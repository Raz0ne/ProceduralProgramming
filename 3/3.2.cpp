#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
	cout << "размер ссуды, мес€чные выплаты, кол-во лет" << endl;
	float s, m, n;
    cin >> s >> m >> n;
    if (s < 0 || m < 0 || n < 0) {
        cout << "Ћогическа€ ошибка";
        return 0;
    }
    float p_best = 0, dm_min = m * 2, m_cur, dm_cur, dm_prev = m * 2, r, p = 0;
    while (p < 101) {
        r = p / 100;
        m_cur = s * r * pow(1 + r, n) / 12 / (pow(1 + r, n) - 1);
        dm_cur = abs(m - m_cur);
        if (dm_cur < dm_min) {
            dm_min = dm_cur;
            p_best = p;
        }
        if (dm_cur > dm_prev) break;

        p += 0.01;
        dm_prev = dm_cur;
    }
    cout << round(p_best * 100) / 100;
}
//сдан
