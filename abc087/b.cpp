#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, X;
    scanf("%d%d%d%d", &A, &B, &C, &X);

    int cnt = 0;
    for (int x = 0; x <= A; x++) {
        for (int y = 0; y <= B; y++) {
            for (int z = 0; z <= C; z++) {
                if ((x * 500 + y * 100 + z * 50) == X) {
                    cnt++;
                }
            }
        }
    }

    printf("%d\n", cnt);
}