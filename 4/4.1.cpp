#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main() {
    string path = "C:\\Users\\RazOne\\Desktop\\vuz\\1 sem\\procedurka\\dz\\4\\4.1.txt", input;
    double input_double;

    ofstream fOut (path);
    for (int i = 1; i < 11; i++) {
        cout << "Enter " << i << " number:" << endl;
        getline(cin, input);
        try {
            input_double = stod(input);
            fOut << input_double << " " << endl;
        }
        catch (invalid_argument) {
            cout << "[ERROR] Not number was entered" << endl;
            i--;
        }

    }
    fOut.close();

    ifstream fIn (path);
    string line;
    double sum = 0;
    while (getline(fIn, line))
        try {sum += stod(line);}
        catch (invalid_argument) {cout << line;}
    fIn.close();

    cout << sum;
}
// сдана
