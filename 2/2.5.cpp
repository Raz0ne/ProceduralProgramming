#include <iostream>
#include <cmath>
#include "iomanip"

using namespace std;

float y(float x){
	return (pow(x, 2) - 2*x + 2) / (x - 1);
}

int main()
{
    cout << fixed << setprecision(2);
	for (float x = -4; x < 4; x += 0.5)
	{
		cout << y(x) << endl;
	}
}
