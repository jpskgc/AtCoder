#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> S(4);

    for (int i = 0; i < 4; ++i) {
        cin >> S.at(i);
    }

    for (int bit = 0; bit < (1 << 3); ++bit) {
        int tmp = S.at(0) - '0';
        string math;
        math = S.at(0);

        for (int i = 0; i < 3; ++i) {
            if (bit & (1 << i)) {
                tmp += S.at(i + 1) - '0';
                math += '+';
                math += S.at(i + 1);
                continue;
            }
            tmp -= S.at(i + 1) - '0';
            math += '-';
            math += S.at(i + 1);
        }

        if (tmp == 7) {
            math += "=7";
            cout << math << endl;
            return 0;
        }
    }
}
