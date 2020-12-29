#include <bits/stdc++.h>
using namespace std;

int main() {
    int W, H, N;
    cin >> W >> H >> N;
    vector<vector<int>> table(H, vector<int>(W, 1));

    for (int i = 0; i < N; ++i) {
        int x, y, a;
        cin >> x >> y >> a;

        if (a == 1) {
            for (int j = 0; j < H; ++j) {
                for (int k = 0; k < x; ++k) {
                    table.at(j).at(k) = 0;
                }
            }
        }
        if (a == 2) {
            for (int j = 0; j < H; ++j) {
                for (int k = x; k < W; ++k) {
                    table.at(j).at(k) = 0;
                }
            }
        }
        if (a == 3) {
            for (int j = 0; j < y; ++j) {
                for (int k = 0; k < W; ++k) {
                    table.at(H - j - 1).at(k) = 0;
                }
            }
        }
        if (a == 4) {
            for (int j = y; j < H; ++j) {
                for (int k = 0; k < W; ++k) {
                    table.at(H - j - 1).at(k) = 0;
                }
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (table.at(i).at(j) == 1) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}
