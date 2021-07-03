#include <bits/stdc++.h>
using namespace std;

/*
 * ポイント
 * 1. 制約が少ない場合は全探索を試みる
 * N=20かつ1<=i<=Nとなるiは「(」or「)」の2通りなので全探索でいけないか考えてみる
 * 2^20(大体10^6)なので計算量的には10^9に収まる
 *
 * 2. bit演算
 * bit演算を利用してN通りの括弧の全パターンを生成する(テンプレ)
 * 1<=i<=Nとなるiは「(」or「)」の2通りなのでbit演算を利用できる
 *
 * 3. 正しい括弧の条件
 *  a. 「(」と「)」の数は同じ
 *   例: 「()」はOK。「(()」はNG。
 *  b. すべてのi(1<=i<=N)について、左からi文字目の時点で「(」の数が「(」の数以上ある。
 *   例: 「()」はOK。「)(」「())」はNG。
 */
int main() {
    // 入力
    int N;
    cin >> N;

    // 全探索で全通りをチェックする
    for (int bit = 0; bit < (1 << N); ++bit) {
        // 各通りの括弧を生成
        // 回答は「(」を辞書順で先に出力する条件があることを考慮する
        string s = "";
        for (int i = N - 1; i >= 0; --i) {
            if (bit & (1 << i))
                s += '(';
            else
                s += ')';
        }
        // 正しい括弧かどうか判定
        int score = 0;
        for (int i = 0; i < N; ++i) {
            if (s.at(i) == '(')
                ++score;
            else
                --score;

            if (score < 0) break;
        }
        if (score == 0) cout << s << endl;
    }

    return 0;
}