#include "iostream"
#include "map"
#include "string"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    map <char, int> toA = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
    };
    string r;
    char rDigit;
    int a = 0, next = 0, aDigit, oneAlphaCount = 1;
    bool nextOperation = true; // true - +, false - -
    cin >> r;
    for (int idx = r.size() - 1; idx >= 0; idx--) {
        rDigit = r[idx];
        if (!toA.count(rDigit)) {
            cout << "[ERROR] Not known alpha was entered";
            return 0;
        }
        aDigit = toA[rDigit];
        if (next > aDigit) {
            a -= aDigit;
        }
        else {
            a += aDigit;
        }
        next = aDigit;
    }
    cout << a;
}
//сдана, но дофиксить надо)