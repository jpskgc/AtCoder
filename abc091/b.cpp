#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    string s[N];
    for (int i = 0; i < N; ++i) {
        cin >> s[i];
    }
    cin >> M;
    string t[M];
    for (int i = 0; i < M; ++i) {
        cin >> t[i];
    }

    int h = 0;
    for (int i = 0; i < N; ++i) {
        int cnt = 0;
        string w = s[i];
        for (int j = 0; j < N; ++j) {
            if (w == s[j]) {
                cnt++;
            }
        }
        for (int j = 0; j < M; ++j) {
            if (w == t[j]) {
                cnt--;
            }
        }
        if (h < cnt) {
            h = cnt;
        }
    }

    printf("%d\n", h);
}