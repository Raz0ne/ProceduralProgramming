#include "iostream"
#include "sstream"
#include "string"
#include "vector"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russsian");

    int n;
    cout << "Введите количество шариков" << endl;
    cin >> n;

    vector<int> balls;
    int ball;
    string str;
    stringstream ss;
    cout << "Введите номера,написанные на шариках" << endl;
    getline(cin, str);
    ss << str;
    while (ss >> ball) balls.push_back(ball);


}