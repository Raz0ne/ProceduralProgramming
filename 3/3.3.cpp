#include <iostream>
#include "fstream"
#include "string"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string line;
    ifstream inputFile ("C:\\Users\\RazOne\\Desktop\\vuz\\1 sem\\procedurka\\dz\\3\\3.3.txt");

    if (inputFile.is_open())
        while (getline(inputFile, line))
            cout << line << endl;

    else cout << "Файл отсутствует";

    inputFile.close();
}
//сдан