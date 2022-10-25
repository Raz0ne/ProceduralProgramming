#include "iostream"
#include "cmath"
#include "string"

using namespace std;

string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int k_to_decimal(string a, int k) throw(const int) {
    int d = 0, n;
    string aEnd;
    for (int  i = a.length() - 1; i > -1; i--) aEnd.push_back(a[i]);
    for (int i = 0; i < aEnd.length(); i++) {
        if (isdigit(aEnd[i])) n = ((int)(aEnd[i]) - 48) * pow(k, i);
        else n = (alphabet.find(aEnd[i]) + 10) * pow(k, i);
        if (n >= k) {
            cout << "[ERROR] Invalid input data";
            throw 1;
        }
        d += n;
    }
    return d;
}

string decimal_to_q(int d, int q) {
    string bEnd, b;
    int remainder;
    while (d) {
        remainder = d % q;
        if (remainder < 10) bEnd += to_string(remainder);
        else bEnd += alphabet[remainder - 10];
        d /= q;
    }
    for (int  i = bEnd.length() - 1; i > -1; i--) b.push_back(bEnd.at(i));
    return b;
}

int main() {
    setlocale(LC_ALL, "Russian");

    string a, b;
    int k, q, d;
    cout << "¬ведите число и его систему счислени€" << endl;
    cin >> a >> k;
    cout << "¬ведите требуюмую систему счислени€" << endl;
    cin >> q;
    try {
        d = k_to_decimal(a, k);
        cout << decimal_to_q(d, q);
    }
    catch (int er) {}
}
// сдана
