#include <iostream>
#include <cmath>

using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Russian");
	float s, p, n;
    cout << "размер ссуды, процент, кол-во лет" << endl;
	cin >> s >> p >> n;
	float r = p/100;
	cout << s * r * pow(1 + r, n) / 12 / (pow(1 + r, n) - 1);
}
//сдан