#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, cnt = 1;
    scanf("%d%d", &N, &K);

    while (true) {
        if (N < K) {
            break;
        }
        N /= K;
        cnt++;
    }

    printf("%d\n", cnt);
}