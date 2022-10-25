#include "iostream"
#include "string"

using namespace std;

void f(int m, int b, int c, int n, int s = 0, int nCur = 1) {
    s = (m * s + b) % c;
    cout << s << endl;
    if (n != nCur) f(m, b, c, n, s, nCur + 1);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int m = 37, b = 3, c = 64, n = 5;
    string s;
    cout << "Enter count of fake-random numbers" << endl;
    getline(cin, s);
    try {
        n = stod(s);
    }
    catch (invalid_argument) {
        cout << "[ERROR] Not number was entered";
        return 0;
    }
    f(m, b, c, n);
}
// сдана
