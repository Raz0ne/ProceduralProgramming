#include "iostream"
#include "string"

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    string a30;
    for (int i = 0; i < 30; i++) a30 += 'a';
    cout << "Enter string with 30 symbols like" << endl << a30 << endl;
    string s = "ipuwcoufnCgfqumciuqnaicfzoufgy";
    getline(cin, s);
    char cur_low, next_low, cur, next;
    int i = 0;
    while (s[i])
    {
        if(!isalpha(s[i])) {
            cout <<"[ERROR] There are not only alphas in string";
            return 0;
        }
        i++;
    }
    int j = 29;
    for (i = 0; i < 29; i ++) {
        for (int idx = 0; idx < j - i; idx++) {
            /*cur = s[idx];
            next = s[idx + 1];
            cur_low = tolower(cur);
            next_low = tolower(next);

            if (cur_low > next_low || (cur_low == next_low && cur > next)) {
                s[idx] = next;
                s[idx + 1] = cur;
            }*/
            if (tolower(s[idx]) > tolower(s[idx+1])
                || (tolower(s[idx])  == tolower(s[idx+1])  && s[idx] > s[idx+1])) {
                char buf = s[idx +1];
                s[idx + 1] = s[idx];
                s[idx] = buf;
            }
        }

    }
    cout << s;
}
// сдана
