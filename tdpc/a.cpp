#include <bits/stdc++.h>
using namespace std;
/*
 * N = 100
 * 計算量: (問題数) * (点数)= (N) * (N * N) = 10 ^ 6
 */
int main() {
    // 入力
    int N;
    cin >> N;
    vector<int> score(N);
    for (int i = 0; i < N; ++i) {
        cin >> score.at(i);
    }

    // DP配列
    // (問題数: 0 ~ N) * (点数: 0 ~ N * N)
    vector<vector<bool>> DP(N + 1, vector<bool>(100 * 100 + 1, false));

    // 初期条件
    DP.at(0).at(0) = true;

    // ループ
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= 100 * 100; ++j) {
            if (DP.at(i).at(j)) {
                DP.at(i + 1).at(j) = true;
                DP.at(i + 1).at(j + score.at(i)) = true;
            }
        }
    }

    // 最後のN問目をみれば、全部で何通りできるのかが分かる
    int cnt = 0;
    for (int i = 0; i <= 100 * 100; ++i) {
        if (DP.at(N).at(i)) {
            cnt++;
        }
    }

    cout << cnt << endl;
}