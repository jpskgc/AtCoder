#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int N;
    cin >> S >> N;


    for (int i = 0; i < N; ++i) {
        int l, r;
        cin >> l >> r;
        if ((r - l) % 2 == 0) {
            for (int j = 0; j < ((r - l) / 2); ++j) {
                char replace_l = S.at(l + j - 1);
                char replace_r = S.at(r - j - 1);

                S.at(l + j - 1) = replace_r;
                S.at(r - j - 1) = replace_l;
            }
        } else {
            for (int j = 0; j < ((r - l + 1) / 2); ++j) {
                char replace_l = S.at(l + j - 1);
                char replace_r = S.at(r - j - 1);

                S.at(l + j - 1) = replace_r;
                S.at(r - j - 1) = replace_l;
            }
        }
    }

    cout << S << endl;
}