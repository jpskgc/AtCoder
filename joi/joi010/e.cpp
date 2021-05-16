#include <bits/stdc++.h>
using namespace std;

// 上下左右移動
const int dx[4] = {0, 0, -1, 1};
const int dy[4] = {1, -1, 0, 0};

int main() {
    // 入力
    int H, W, N;
    cin >> H >> W >> N;
    vector<string> field(H);
    for (int i = 0; i < H; ++i) {
        cin >> field.at(i);
    }

    // スタート地点
    int sx, sy;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (field.at(i).at(j) == 'S') {
                sx = j;
                sy = i;
            }
        }
    }

    int ans = 0;

    // スタートから1の最短、1から2の最短...と言う風にBFSを順番に行う
    for (int i = 0; i < N; ++i) {
        // 始点から各頂点までの最短距離 (訪れていないところは -1 としておく)
        vector<vector<int>> dist(H, vector<int>(W, -1));
        // 始点は最短距離=0に設定
        dist.at(sy).at(sx) = 0;

        // 「一度見た頂点」のうち「まだ訪れていない頂点」を表すキュー
        queue<pair<int, int>> que;
        // 始点を push
        que.push(make_pair(sx, sy));

        // BFS開始(キューが空になるまで探索を行う)
        while (!que.empty()) {
            // キューから先頭頂点を取り出す
            pair<int, int> p = que.front();
            int x = p.first;
            int y = p.second;

            que.pop();

            // 上下左右を探索({x,y}からたどれる頂点を全て調べる)
            for (int j = 0; j < 4; ++j) {
                int nx = x + dx[j];
                int ny = y + dy[j];

                // 範囲外に移動はダメ
                if (ny < 0 || ny >= H || nx < 0 || nx >= W) continue;
                // 壁に移動はダメ
                if (field.at(ny).at(nx) == 'X') continue;

                // 既に発見済みの頂点は含まない
                if (dist.at(ny).at(nx) == -1) {
                    // 新たに発見した頂点について、距離情報を更新してキューに追加
                    que.push(make_pair(nx, ny));
                    dist.at(ny).at(nx) = dist.at(y).at(x) + 1;
                }
            }
        }

        // 始点から終点までの最短距離を合計に足していく
        for (int j = 0; j < H; ++j) {
            for (int k = 0; k < W; ++k) {
                if (field.at(j).at(k) == (i + 1) + '0') {
                    sx = k;
                    sy = j;
                    ans += dist.at(j).at(k);
                }
            }
        }
    }

    cout << ans << endl;
}