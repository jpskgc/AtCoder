#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    int L[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &L[i]);
    }

    if (N < 3) {
        printf("%d\n", 0);
        return 0;
    }

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (L[i] == L[j]) {
                continue;
            }
            for (int k = j + 1; k < N; k++) {
                if (L[i] == L[k] || L[j] == L[k]) {
                    continue;
                }
                if (L[i] + L[j] > L[k] && L[j] + L[k] > L[i] && L[k] + L[i] > L[j]) {
                    cnt++;
                }
            }
        }
    }

    printf("%d\n", cnt);
}