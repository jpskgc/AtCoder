#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> S(s.size());

    for (int i = 0; i < s.size(); ++i) {
        S.at(i) = s.at(i);
    }

    vector<bool> hasS(26);

    for (int i = 0; i < s.size(); ++i) {
        hasS[s.at(i) - 'a'] = true;
    }

    for (int i = 0; i < hasS.size(); ++i) {
        if (!hasS.at(i)) {
            cout << char(i + 'a') << endl;
            return 0;
        }
    }
    puts("None");
}