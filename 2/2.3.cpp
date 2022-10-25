#include <iostream>
#include <cmath>

using namespace std;

float z(float x, float y, float b)
{
	return log(b - y) * sqrt(b - x);
}

int main()
{
	float x, y, b;
	cin >> x >> y >> b;
	cout << z(x, y, b);
}
