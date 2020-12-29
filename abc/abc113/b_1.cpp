#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, T, A;
    cin >> N >> T >> A;

    int x, diff, min = INT_MAX, ans;

    for (int i = 0; i < N; ++i) {
        cin >> x;
        diff = abs(1000 * A - (1000 * T - 6 * x));
        if (diff < min) {
            ans = i + 1;
            min = diff;
        }
    }

    printf("%d\n", ans);
}