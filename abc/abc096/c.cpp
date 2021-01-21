#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> record(H, vector<char>(W));

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> record.at(i).at(j);
        }
    }

    bool ans_flag = true;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (record.at(i).at(j) == '#') {
                if (i > 0) {
                    if (record.at(i - 1).at(j) == '#') {
                        continue;
                    }
                }
                if (i < H - 1) {
                    if (record.at(i + 1).at(j) == '#') {
                        continue;
                    }
                }
                if (j > 0) {
                    if (record.at(i).at(j - 1) == '#') {
                        continue;
                    }
                }
                if (j < W - 1) {
                    if (record.at(i).at(j + 1) == '#') {
                        continue;
                    }
                }
                ans_flag = false;
            }
        }
    }

    if (ans_flag) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}
