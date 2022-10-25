#include "iostream"
#include "vector"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    vector<vector<int>> a = {
            {5, 2, 0, 10},
            {3, 5, 2, 5},
            {20, 0, 0 ,0}
    };
    vector<vector<double>> b = {
            {1.2, 0.5},
            {2.8, 0.4},
            {5, 1},
            {2, 1.5}
    };
    vector<vector<double>> c = {
    };
    double s;
    for (int y = 0; y < a.size(); y++) {
        c.push_back({});
        for (int x = 0; x < b[0].size(); x++) {
            s = 0;
            for (int i = 0; i < a[0].size(); i++) {
                s += a[y][i] * b[i][x];
            }
            c[y].push_back(s);
        }
    }

    double proceedsMan, proceedsMin = 100000, proceedsMax = 0, proceedsFull = 0, manWithProceedsMin, manWithProceedsMax,
           commissionMan, commissionMin = 100000, commissionMax = 0, commissionFull = 0, manWithCommissionMin, manWithCommissionMax,
           moneyFull;

    for (int man = 0; man < 3; man++) {
        proceedsMan = 0, commissionMan = 0;

        for (int goods = 0; goods < 4; goods++) {
            proceedsMan += a[man][goods] * b[goods][0];
            commissionMan += a[man][goods] * b[goods][1];
        }

        if (proceedsMan < proceedsMin) proceedsMin = proceedsMan, manWithProceedsMin = man;
        else if (proceedsMan > proceedsMax) proceedsMax = proceedsMan, manWithProceedsMax = man;

        if (commissionMan < commissionMin) commissionMin = commissionMan, manWithCommissionMin = man;
        else if (commissionMan > commissionMax) commissionMax = commissionMan, manWithCommissionMax = man;

        proceedsFull += proceedsMan;
        commissionFull += commissionMan;
    }

    moneyFull = proceedsFull + commissionFull;


    cout << "1) больше всего денег с продажи выручил " << manWithProceedsMax + 1 << " продавец; ";
    cout << "меньше всего денег с продажи выручил " << manWithProceedsMin + 1 << " продавец." << endl;

    cout << "2) наибольшие комиссионные получил " << manWithCommissionMax + 1 << " продавец; ";
    cout << "наименьшие комиссионные получил " << manWithCommissionMin + 1 << " продавец." << endl;

    cout << "3) общая выручка составила " << proceedsFull << "." << endl;

    cout << "4) общая комиссия составила " << commissionFull << "." << endl;

    cout << "5) общая сумма денег, прошедших через руки продавцов составила, " << moneyFull << "." << endl;

    for (int y = 0; y < c.size(); y++) {
        for (int x = 0; x < c[0].size(); x++)
            cout << c[y][x] << ' ';
        cout << endl;
    }
}
// готова
