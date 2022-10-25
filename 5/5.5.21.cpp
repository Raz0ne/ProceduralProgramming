#include "iostream"
#include "fstream"
#include "string"
#include "vector"
#include "algorithm"
#include "iomanip"
#include "windows.h"

using namespace std;

bool comp(vector<int> a, vector<int> b) {
    return a[1] > b[1];
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Russian");

    vector<vector<int>> chart;
    vector<string> countries;
    string line, country, delimiter1 = " -> ", delimiter2 = " ";
    int i = 0, gold, silver, bronze, score, delimiter1_pos, delimiter2_pos1, delimiter2_pos2;

    while (getline(cin, line)) {
        if (!line.length()) break;

        delimiter1_pos = line.find(delimiter1);
        country = line.substr(0, delimiter1_pos);

        delimiter2_pos1 = line.find(delimiter2, delimiter1_pos + 4);
        gold = stoi(line.substr(delimiter1_pos + 4, delimiter2_pos1 - delimiter1_pos - 4));

        delimiter2_pos2 = line.find(delimiter2, delimiter2_pos1 + 1);
        silver = stoi(line.substr(delimiter2_pos1 + 1, delimiter2_pos2 - delimiter1_pos - 1));

        bronze = stoi(line.substr(delimiter2_pos2 + 1, line.length() - delimiter2_pos1 - 2));

        score = gold * 7 + silver * 6 + bronze * 5;

        chart.push_back({i, score, gold, silver, bronze});
        countries.push_back(country);

        i += 1;
    }


    int country_idx;
    ofstream fout (R"(C:\Users\RazOne\Desktop\vuz\1 sem\procedurka\dz\5\5.5.21.txt)");

    sort(chart.begin(), chart.end(), comp);

    cout << left;
    fout << left;

    cout << setw(10) << "Страна" << setw(5) <<"Очки" << setw(7) << "Золото" << setw(8) << "Серебро"
         << setw(7)<< "Бронза" << endl;
    fout << setw(10) << "Страна" << setw(5) <<"Очки" << setw(7) << "Золото" << setw(8) << "Серебро"
         << setw(7)<< "Бронза" << endl;

    for (vector<int> country_score : chart) {
        country_idx = country_score[0];
        country = countries[country_idx];

        cout << setw(10) << country << setw(5) << country_score[1] << setw(7) << country_score[2]
             << setw(8) << country_score[3] << setw(7) << country_score[4] << endl;
        fout << setw(10) << country << setw(5) << country_score[1] << setw(7) << country_score[2]
             << setw(8) << country_score[3] << setw(7) << country_score[4] << endl;
    }
}