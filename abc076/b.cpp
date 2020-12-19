#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    scanf("%d%d", &N, &K);
    int min = 1, t, k;

    for (int i = 0; i < N; i++) {
        t = min * 2;
        k = min + K;
        if (t < k) {
            min = t;
        } else {
            min = k;
        }
    }

    printf("%d", min);
}