#include <bits/stdc++.h>
using namespace std;

// 上下左右移動
const int dx[4] = {0, 0, -1, 1};
const int dy[4] = {1, -1, 0, 0};

int main() {
    // 入力
    int H, W;
    cin >> H >> W;
    vector<string> field(H);
    for (int i = 0; i < H; ++i) cin >> field.at(i);

    // スタート地点を特定
    int sh, sw;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (field.at(i).at(j) == 's') sh = i, sw = j;
        }
    }

    // 通過したマスを記録しておく
    vector<vector<bool>> checked(H, vector<bool>(W, false));

    // これから通過する予定のマス
    stack<pair<int, int>> stk;
    stk.push(make_pair(sh, sw));

    // スタックが空になるまで行う
    while (!stk.empty()) {
        // 「LIFO」（英：Last In First Out）「先入れ後出し」
        pair<int, int> p = stk.top();
        stk.pop();

        int h = p.first, w = p.second;

        // ゴール地点
        if (field.at(h).at(w) == 'g') {
            cout << "Yes" << endl;
            return 0;
        }

        // 既に通過済
        if (checked.at(h).at(w)) continue;

        checked.at(h).at(w) = true;

        // 上下左右を探索
        for (int i = 0; i < 4; ++i) {
            int nh = h + dy[i];
            int nw = w + dx[i];

            // 範囲外に移動
            if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
            // 壁に移動
            if (field.at(nh).at(nw) == '#') continue;

            // スタックに追加する
            stk.push(make_pair(nh, nw));
        }
    }

    cout << "No" << endl;
}