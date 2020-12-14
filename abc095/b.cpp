#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    scanf("%d%d", &N, &X);

    int m[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &m[i]);
    }

    sort(m, m + N);

    for (int i = 1; i < N; i++) {
        X -= m[i];
    }

    printf("%d\n", N - 1 + X / m[0]);
}
