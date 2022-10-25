#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int k = 1;
    if (n < 1) cout << "Это не натуральное число";
	else
        for (int i = n; i < n + k * 10; i += k) cout << i << endl;
}
