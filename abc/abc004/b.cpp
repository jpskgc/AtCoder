#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    string ans = "";
    for (int i = 0; i < S.size(); ++i) {
        if (S.at(i) == 'B') {
            if (ans.size() != 0) {
                ans = ans.substr(0, ans.size() - 1);
                continue;
            }
            if (ans.size() == 0) {
                continue;
            }
        }
        ans += S.at(i);
    }

    cout << ans << endl;
}