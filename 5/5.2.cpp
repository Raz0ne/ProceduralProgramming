#include "iostream"
#include "cmath"
#include "vector"

using namespace std;

int main() {
    int n;
    vector<bool> er;
    cout << "Enter count of numbers" << endl;
    cin >> n;

    for (int i = 0; i < n - 2; i++) er.push_back(true);

    for (int i = 2; pow(i, 2) <= n; i++) {
        if (er[i - 2])
            for (int j = pow(i, 2); j <= n; j += i)
                er[j - 2] = false;
    }

    for (int i = 0; i < n - 2; i++)
        if (er[i])
            cout << i + 2 << " ";

    return 0;


}
// готова