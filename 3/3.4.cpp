#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string line;
    bool prevIsDigit = true, wasDigit = false;
    ifstream inf ("C:\\Users\\RazOne\\Desktop\\vuz\\1 sem\\procedurka\\dz\\3\\3.4.txt");

    if (inf.is_open())
    {
        while (getline(inf, line)) {
            for (char element: line)
                if (isdigit(element)) {
                    if (!prevIsDigit)
                        cout << " ";
                    cout << element;
                    prevIsDigit = true;
                    wasDigit = true;
                } else if (wasDigit)
                    prevIsDigit = false;
            if (wasDigit)
                prevIsDigit = false;
        }
        inf.close();
    }

    else cout << "Файл отсутствует";
}
//сдан