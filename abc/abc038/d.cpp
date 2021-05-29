#include <bits/stdc++.h>
using namespace std;

int main() {
    // 入力
    int N;
    cin >> N;
    pair<int, int> box[N];
    for (int i = 0; i < N; ++i) {
        cin >> box[i].first >> box[i].second;
    }

    /*
     * 箱(width/height)をwightの昇順でソート.
     * widthが同じ場合、hの降順にする.(例: {1,1},{1,2},{1,3} -> {1,3},{1,2},{1,1})
     * hの降順にしないと、LISを行った際に「縦または横の長さが等しい箱に入れることはできない」条件に一致しなくなる.
     */
    sort(box, box + N, [](pair<int, int> a, pair<int, int> b) {
        if (a.first != b.first) {
            return a.first < b.first;
        } else
            return a.second > b.second;
    });

    // ソート済みの箱のheight配列を作成
    vector<int> boxh(N);
    for (int i = 0; i < N; ++i) {
        boxh.at(i) = box[i].second;
    }


    // LIS(最長増加部分列)の長さを求めていく
    vector<int> dp(N);
    for (int i = 0; i < N; ++i) {
        dp.at(i) = INT_MAX;
    }

    // lower_boundを利用して配列dpを更新していく
    for (int i = 0; i < N; ++i) {
        *lower_bound(dp.begin(), dp.end(), boxh.at(i)) = boxh.at(i);
    }

    /*
     * 配列dpのうち、初めてINT_MAX以上の値になるインデックス番号を返す
     * 例: {1,2,3,4,INT_MAX,INT_MAX} -> 4
    */
    int ans = lower_bound(dp.begin(), dp.end(), INT_MAX) - dp.begin();

    cout << ans << endl;
}