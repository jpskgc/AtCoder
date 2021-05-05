#include <bits/stdc++.h>
using namespace std;

int H, W;
vector<string> field;

// 上下左右移動
const int dx[4] = {0, 0, -1, 1};
const int dy[4] = {1, -1, 0, 0};

// 通過したマスを記録しておく
vector<vector<bool>> checked(500, vector<bool>(500, false));

// 探索(再帰関数)
void dfs(int h, int w) {
    checked.at(h).at(w) = true;

    // 上下左右を探索
    for (int i = 0; i < 4; ++i) {
        int nh = h + dy[i];
        int nw = w + dx[i];

        // 範囲外に移動
        if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        // 壁に移動
        if (field.at(nh).at(nw) == '#') continue;
        // 既に通過済
        if (checked.at(nh).at(nw)) continue;

        // 次のマスを再帰的に探索
        dfs(nh, nw);
    }
}


int main() {
    // 入力
    cin >> H >> W;
    field.resize(H);
    for (int i = 0; i < H; ++i) cin >> field.at(i);

    // スタートとゴール地点を特定
    int sh, sw, gh, gw;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (field.at(i).at(j) == 's') sh = i, sw = j;
            if (field.at(i).at(j) == 'g') gh = i, gw = j;
        }
    }

    // 探索
    dfs(sh, sw);

    // 結果
    if (checked.at(gh).at(gw)) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
}