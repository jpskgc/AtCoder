#include <bits/stdc++.h>
using namespace std;

int main() {
    // 入力
    vector<int> N(4);
    for (int i = 0; i < 4; ++i) {
        char S;
        cin >> S;
        N.at(i) = S - '0';
    }

    // 3つの+/-の場所を全通り試す(000~111:---~+++)
    for (int bit; bit < (1 << 3); bit++) {
        string math = to_string(N.at(0));
        int sum = N.at(0);

        // bit(000~111:---~+++)のどの部分が+/-なのかをチェックする
        for (int i = 0; i < 3; ++i) {
            // +のとき
            if (bit & (1 << i)) {
                math += '+';
                math += to_string(N.at(i + 1));
                sum += N.at(i + 1);
                continue;
            }
            // -のとき
            math += '-';
            math += to_string(N.at(i + 1));
            sum -= N.at(i + 1);
        }

        if (sum == 7) {
            math += "=7";
            cout << math << endl;
            return 0;
        }
    }
}
