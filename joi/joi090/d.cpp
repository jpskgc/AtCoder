#include <bits/stdc++.h>
using namespace std;

int main() {
    // 入力
    int n, k;
    cin >> n >> k;
    vector<string> card(n);
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        card.at(i) = s;
    }

    // 辞書順の先頭になるようにソート
    // これをしないと途中からnext_permutationするので誤った答えになる
    sort(card.begin(), card.end());

    // setを利用して既出の文字列を除外する
    set<string> cnt;

    // カードの並びを全探索
    // その中で、先頭からk個取り出した文字列のうちユニークなものをsetに入れる
    do {
        string tmp;
        for (int i = 0; i < k; ++i) {
            tmp += card.at(i);
        }
        cnt.insert(tmp);
    } while (next_permutation(card.begin(), card.end()));

    cout << cnt.size() << endl;
}