#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    scanf("%d%d", &H, &W);

    vector<vector<char>> record(H, vector<char>(W));
    vector<vector<int>> cnt(H, vector<int>(W, 0));

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> record.at(i).at(j);
        }
    }

    for (int y = 0; y < H; ++y) {
        for (int x = 0; x < W; ++x) {
            if (record.at(y).at(x) == '#') {
                if (y - 1 >= 0 && x - 1 >= 0 && record.at(y - 1).at(x - 1) != '#') {
                    cnt.at(y - 1).at(x - 1)++;
                }
                if (y - 1 >= 0 && record.at(y - 1).at(x) != '#') {
                    cnt.at(y - 1).at(x)++;
                }
                if (y - 1 >= 0 && x + 1 <= W - 1 && record.at(y - 1).at(x + 1) != '#') {
                    cnt.at(y - 1).at(x + 1)++;
                }
                if (x + 1 <= W - 1 && record.at(y).at(x + 1) != '#') {
                    cnt.at(y).at(x + 1)++;
                }
                if (y + 1 <= H - 1 && x + 1 <= W - 1 && record.at(y + 1).at(x + 1) != '#') {
                    cnt.at(y + 1).at(x + 1)++;
                }
                if (y + 1 <= H - 1 && record.at(y + 1).at(x) != '#') {
                    cnt.at(y + 1).at(x)++;
                }
                if (y + 1 <= H - 1 && x - 1 >= 0 && record.at(y + 1).at(x - 1) != '#') {
                    cnt.at(y + 1).at(x - 1)++;
                }
                if (x - 1 >= 0 && record.at(y).at(x - 1) != '#') {
                    cnt.at(y).at(x - 1)++;
                }
            }
        }
    }

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (record.at(i).at(j) == '#') {
                cout << '#';
            } else {
                printf("%d", cnt.at(i).at(j));
            }
            if (j == W - 1) {
                cout << endl;
            }
        }
    }
}