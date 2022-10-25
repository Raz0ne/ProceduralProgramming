#include "iostream"

using namespace std;

int main() {
    int a, b;
    cout << "Enter 2 numbers" << endl;
    cin >> a >> b;

    if (a * b == 0) {
        cout << "[ERROR] Zero has been entered";
        return 0;
    }

    while (a != 0 and b != 0) {
        if (a > b) a -= b;
        else b -= a;
    }
    cout << "By difference: " << a + b << endl;

    while (a != 0 and b != 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    cout << "By division: " << a + b;
}
// готова