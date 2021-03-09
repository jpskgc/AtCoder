#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int cnt = 0, maxc = 0;
    for (int i = 0; i < S.size(); ++i) {
        if (S.at(i) == 'R') {
            cnt++;
            maxc = max(cnt, maxc);
            continue;
        }
        cnt = 0;
    }

    cout << maxc << endl;
}