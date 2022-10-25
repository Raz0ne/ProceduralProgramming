#include "iostream"
#include "string"

using namespace std;

int sign(double x) {
    if (x < 0)
        return -1;
    return int(x > 0);
}

int main() {
    string s;
    double i = 0;
    getline(cin, s);
    try {
        i = stod(s);
        cout << sign(i);
    }
    catch (invalid_argument) {
        cout << "[ERROR] Not number was entered";
    }
}
// сдана