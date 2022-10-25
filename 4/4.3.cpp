#include "iostream"
#include "string"
#include "cmath"
#include "set"
#include "algorithm"


using namespace std;

float rectangle() {
    float a, b;

    cout << "������� ����� ������" << endl;
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "���������� ������";
        exit(0);
    }

    return a * b;
}

float circle() {
    float r;

    cout << "������� ������" << endl;
    cin >> r;

    if (r <= 0) {
        cout << "���������� ������";
        exit(0);
    }

    return M_PI * pow(r, 2);
}

float triangle() {
    int way;

    set<int> ways = {1, 2};

    while (true) {
        cout << "������� ����� ������� ��� ������\n"
                "1 - ����� �������\n"
                "2 - ����� ������� � ������, ����������� �� ��\n";
        cin >> way;

        if (way == 1) {
            cout << "������� ����� ������\n";

            float m[3], p_half, a, b, c;
            // cin >> m[0] >> m[1] >> m[2];
            cin >> a >> b >> c;

            if (a <= 0 || b <= 0 || c <= 0) {
                cout << "���������� ������";
                exit(0);
            }

            if (a + b + c - max({a, b, c}) < max({a, b, c})) return 0;

            else {
                p_half = (a + b + c) / 2;
                return sqrt(p_half * (p_half - a) * (p_half - b) * (p_half - c));
            }
        } else if (way == 2) {
            cout << "������� ������� � ������, ����������� �� ��\n";

            float a, h;
            cin >> a >> h;

            if (a <= 0 || h <= 0) {
                cout << "���������� ������";
                exit(0);
            }

            return a * h / 2;
        } else {
            cout << "������ �������� ���\n";
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int figure;

    while (true) {
        cout << "�������� ������� ����� ������ ������ �����:\n"
                "1 - �������������,\n"
                "2 - ����\n"
                "3 - �����������\n";
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
            if (s == 0) cout << "����� ����������� �� ����������";
            else cout << s;
            break;
        }
        else cout << "� �� ���� ����� ������\n";
    }
}
//����