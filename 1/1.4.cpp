#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	cin >> a >> b >> c;
	if (a == 0) {
		if (b == 0) cout << (c == 0 ? "Люое число" : "Решений нет");
		else cout << -c/b;
	}
	else{
		float d = pow(b, 2) - 4 * a * c;
		if (d == 0) cout << -b/2/a;
		else if (d < 0) cout << "Решений нет";
		else {
			d = sqrt(d);
			cout << (-b-d)/2/a << " " << (-b+d)/2/a;	
		}
	}
}
