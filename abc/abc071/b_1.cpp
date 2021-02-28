#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    vector<bool> s(26);

    for (int i = 0; i < S.size(); ++i) {
        s[S.at(i) - 'a'] = true;
    }

    for (int i = 0; i < 26; ++i) {
        if (!s.at(i)) {
            cout << (char) (i + 'a');
            return 0;
        }
    }

    puts("None");
    return 0;
}