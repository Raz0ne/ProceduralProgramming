#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "����� ����� �����?" << endl;
	string time_string;
	cin >> time_string;
	bool time = time_string == "����";
	
	cout << "�������� �� �����?" << endl;
	string lamp_string;
	cin >> lamp_string;
	bool lamp = lamp_string == "��";
	
	cout << "���������� �� �����?" << endl;
	string curtains_string;
	cin >> curtains_string;
	bool curtains = curtains_string == "��";
	
	cout << (time && curtains || lamp ? "� ������� ������" : "� ������� �����");
}
