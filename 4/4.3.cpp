#include "iostream"
#include "string"
#include "cmath"
#include "set"
#include "algorithm"


using namespace std;

float rectangle() {
    float a, b;

    cout << "Введите длины сторон" << endl;
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Логическая ошибка";
        exit(0);
    }

    return a * b;
}

float circle() {
    float r;

    cout << "Введите радиус" << endl;
    cin >> r;

    if (r <= 0) {
        cout << "Логическая ошибка";
        exit(0);
    }

    return M_PI * pow(r, 2);
}

float triangle() {
    int way;

    set<int> ways = {1, 2};

    while (true) {
        cout << "Введите более удобный вам способ\n"
                "1 - Через стороны\n"
                "2 - Через сторону и высоту, опирающуюся на неё\n";
        cin >> way;

        if (way == 1) {
            cout << "Введите длины сторон\n";

            float m[3], p_half, a, b, c;
            // cin >> m[0] >> m[1] >> m[2];
            cin >> a >> b >> c;

            if (a <= 0 || b <= 0 || c <= 0) {
                cout << "Логическая ошибка";
                exit(0);
            }

            if (a + b + c - max({a, b, c}) < max({a, b, c})) return 0;

            else {
                p_half = (a + b + c) / 2;
                return sqrt(p_half * (p_half - a) * (p_half - b) * (p_half - c));
            }
        } else if (way == 2) {
            cout << "Введите сторону и высоту, опирающуюся на неё\n";

            float a, h;
            cin >> a >> h;

            if (a <= 0 || h <= 0) {
                cout << "Логическая ошибка";
                exit(0);
            }

            return a * h / 2;
        } else {
            cout << "Такого варианта нет\n";
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int figure;

    while (true) {
        cout << "Напишите площадь какой фигуры хотите найти:\n"
                "1 - прямоугольник,\n"
                "2 - круг\n"
                "3 - треугольник\n";
        cin >> figure;
        if (figure == 1) {
            cout << rectangle();
            break;
        }
        else if (figure == 2) {
            cout << circle();
            break;
        }
        else if (figure == 3) {
            float s = triangle();
            if (s == 0) cout << "Такой треугольник не существует";
            else cout << s;
            break;
        }
        else cout << "Я не знаю такой фигуры\n";
    }
}
//сдан