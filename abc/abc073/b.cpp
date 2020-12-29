#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    int ans = 0;
    int l, r;

    for (int i = 0; i < N; i++) {
        scanf("%d%d", &l, &r);
        ans += r - l + 1;
    }

    printf("%d\n", ans);
}
