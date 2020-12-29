#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<bool> x(W);
    vector<bool> y(H);

    vector<vector<char>> table(H, vector<char>(W));
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> table.at(i).at(j);
        }
    }

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (table.at(i).at(j) == '#') {
                x.at(j) = true;
                y.at(i) = true;
            }
        }
    }

    for (int i = 0; i < H; ++i) {
        if (y.at(i)) {
            for (int j = 0; j < W; ++j) {
                if (x.at(j)) {
                    cout << table.at(i).at(j);
                }
            }
            cout << endl;
        }
    }
}