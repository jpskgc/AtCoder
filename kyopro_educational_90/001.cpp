#include <bits/stdc++.h>
using namespace std;

/* ポイント
 * 1.計算量
 *   N個の切れ目からk個を選択する方法では、nCk通りで10^9を超えてしまう
 *   二分探索法で答えを仮決めしつつ、その仮決めの答えが条件を満たすかどうかを判定する方法の場合、
 *   O(logN) + O(N) = O(NlogN) = 10 ^ 5 * 13 で計算することができる。
 *
 * 2. 二分探索
 *    今回は典型記述に則れば良い
 */

int N, L, K;
vector<int> A(100001);

// K+1個以上の『長さM(mid)以上のピース』に分割できるかをチェック
bool check(int mid) {
    int cnt = 0;// 何個に切れたか
    int pre = 0;// 前回の切れ目
    for (int i = 0; i < N; ++i) {
        if (A.at(i) - pre >= mid) {
            cnt++;
            pre = A.at(i);
        }
    }
    // 最後のピースが mid 以上なら加算
    if (L - pre >= mid) ++cnt;

    if (cnt >= K + 1) return true;
    return false;
}

int main() {
    // 入力
    cin >> N >> L >> K;
    for (int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    // 二分探索
    int left = 0;
    int right = L;
    while (right - left > 1) {
        int mid = (left + right) / 2;
        if (check(mid)) left = mid;
        else
            right = mid;
    }
    cout << left << endl;
}