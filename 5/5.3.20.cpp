#include "iostream"
#include "fstream"
#include "string"
#include <locale.h>
#include "map"
#include "vector"


using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string line;
    ifstream fin("C:\\Users\\RazOne\\Desktop\\vuz\\1 sem\\procedurka\\dz\\5\\5.3.20.txt");
    map <char, int> counts = {};

    while (getline(fin, line)) {
        for (char el : line) counts[el] += 1;
    }

    int minCnt = -1;
    vector<char> minCntEls;

    for (pair<char, int> x : counts) {
        char el = x.first;
        int cnt = x.second;

        if (cnt < minCnt or minCnt == -1) {
            minCnt = cnt;
            minCntEls = {el};
        }
        else if (cnt == minCnt) minCntEls.push_back(el);
    }
    for (char el : minCntEls) cout << el << ' ';
    fin.close();
}
// готова