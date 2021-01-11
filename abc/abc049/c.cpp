#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    vector<string> word(4);
    word = {"dream", "dreamer", "erase", "eraser"};

    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; ++i) {
        reverse(word.at(i).begin(), word.at(i).end());
    }

    bool ans = true;
    for (int i = 0; i < S.size();) {
        bool ok = false;
        for (int j = 0; j < 4; ++j) {
            string w = word.at(j);
            if (S.substr(i, w.size()) == w) {
                i += w.size();
                ok = true;
            }
        }
        if (!ok) {
            ans = false;
            break;
        }
    }

    if (!ans) {
        puts("NO");
        return 0;
    }
    puts("YES");
}
