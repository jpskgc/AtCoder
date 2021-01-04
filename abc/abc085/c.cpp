#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Y;
    scanf("%d%d", &N, &Y);

    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= N - i; ++j) {
            int sum = 10000 * i + 5000 * j + 1000 * (N - i - j);
            if (sum == Y) {
                printf("%d %d %d\n", i, j, N - i - j);
                return 0;
            }
        }
    }
    puts("-1 -1 -1");
}