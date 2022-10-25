#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "Какое время суток?" << endl;
	string time_string;
	cin >> time_string;
	bool time = time_string == "День";
	
	cout << "Включена ли лампа?" << endl;
	string lamp_string;
	cin >> lamp_string;
	bool lamp = lamp_string == "Да";
	
	cout << "Раздвинуты ли шторы?" << endl;
	string curtains_string;
	cin >> curtains_string;
	bool curtains = curtains_string == "Да";
	
	cout << (time && curtains || lamp ? "В комнате светло" : "В комнате темно");
}
