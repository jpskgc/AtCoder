#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int c[M][2];
    for (int i = 0; i < M; ++i) {
        cin >> c[i][0] >> c[i][1];
    }

    for (int i = 0; i < N; ++i) {
        int cnt = 0;
        for (int j = 0; j < M; ++j) {
            if (c[j][0] == i + 1 || c[j][1] == i + 1) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}