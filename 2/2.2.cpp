#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	float x, a;
	cin >> x >> a;
	cout << "w = " << (abs(x) < 1 ? a * log(abs(x)) : sqrt(a - pow(x, 2)));
}
