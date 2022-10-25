#include "iostream"
#include "cmath"
#include "iomanip"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n, ch = 1;
    double z = 0, y = 1;
    cout << "¬ведите n" << endl;
    cin >> n;

    if (n > 0)
        for (int i = 1; i <= n; i++) {
            ch *= i;
            z += sin(i * 2);

            y *= ch / z;
        }
    else if (n == 0) {
        for (int i = 1; i >= n; i--) {
            if (i != 0) ch *= i;
            z += sin(i * 2);

            y *= ch / z;
        }
    }
    else {
        cout << "inf";
        return 0;
    }

    cout << fixed << setprecision(2);
    cout << y;
}