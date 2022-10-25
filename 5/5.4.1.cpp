#include "iostream"
#include "cmath"
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n, i;
    float y = 0, z = 0;
    cout << "¬ведите целое n" << endl;
    cout << fixed << setprecision(2);
    cin >> n;

    if (n > 0)
        for (i = 1; i <= n; i++) {
            z += sin(i);
            y += i / z;
        }
    else if (n == 0) {
        z = sin(1);
        y = 1 / z;
    }
    else {
        cout << "бесконечность";
        return 0;
    }
    cout << y;
}