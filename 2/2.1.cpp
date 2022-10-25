#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите высоту и радиусы большего и меньшего оснований" << endl;
	float h, R, r;
	cin >> h >> R >> r;
	float l = sqrt(pow(R - r, 2) + pow(h, 2));
	cout << M_PI * h * (pow(R, 2) + R * r + pow(r, 2)) / 3<< " " << M_PI * (pow(R, 2) + (R + r) * l + pow(r, 2));
}
