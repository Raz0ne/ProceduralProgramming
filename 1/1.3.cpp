#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float b, c;
	cin >> b >> c;
	if (b == 0) cout << (c == 0 ? "���� �����" : "������� ���");
	else cout << -c/b;
}
