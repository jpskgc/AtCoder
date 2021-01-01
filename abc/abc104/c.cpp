#include <bits/stdc++.h>
using namespace std;

int main() {
    int D, G;
    scanf("%d%d", &D, &G);

    vector<int> P(D);
    vector<int> C(D);

    for (int i = 0; i < D; ++i) {
        scanf("%d%d", &P.at(i), &C.at(i));
    }

    long long ans = INT_MAX;
    for (int bit = 0; bit < (1 << D); ++bit) {
        long long sum = 0;
        long long cnt = 0;
        for (int i = 0; i < D; ++i) {
            if (bit & (1 << i)) {
                sum += C.at(i) + 100 * (i + 1) * P.at(i);
                cnt += P.at(i);
            }
        }
        if (sum >= G) {
            ans = min(cnt, ans);
            continue;
        }
        for (int i = D - 1; i >= 0; --i) {
            if (bit & (1 << i)) {
                continue;
            }
            for (int j = 0; j < P.at(i); ++j) {
                if (sum >= G) {
                    break;
                }
                sum += 100 * (i + 1);
                cnt++;
            }
        }
        ans = min(cnt, ans);
    }
    printf("%d\n", ans);
}
