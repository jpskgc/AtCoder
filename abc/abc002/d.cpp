#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    scanf("%d%d", &N, &M);
    vector<vector<bool>> record(N, vector<bool>(N, false));
    for (int i = 0; i < M; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        record.at(x - 1).at(y - 1) = true;
    }

    int ans = 0;
    for (int bit = 0; bit < (1 << N); ++bit) {
        bool ok = true;
        int cnt = bitset<32>(bit).count();
        for (int i = 0; i < N; ++i) {
            if (!(bit & (1 << i))) {
                continue;
            }
            for (int j = i + 1; j < N; ++j) {
                if (!(bit & (1 << j))) {
                    continue;
                }
                if (!(record.at(i).at(j))) {
                    ok = false;
                    break;
                }
            }
        }
        if (ok) {
            ans = max(ans, cnt);
            continue;
        }
        ans = max(ans, 1);
    }
    printf("%d\n", ans);
}