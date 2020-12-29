#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, x, d = 0;
    scanf("%d%d", &N, &K);

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x > abs(x - K)) {
            d += abs(x - K) * 2;
            continue;
        }
        d += x * 2;
    }

    printf("%d\n", d);
}
