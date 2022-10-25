#include <iostream>
#include "fstream"
#include "string"

using namespace std;

int main()
{
    string line;
    ifstream inputFile ("C:\\Users\\RazOne\\Desktop\\vuz\\1 sem\\procedurka\\dz\\5\\5.3.12.txt");

    if (inputFile.is_open())
        while (getline(inputFile, line))
            cout << line << endl;

    inputFile.close();
}
