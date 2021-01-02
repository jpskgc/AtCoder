#include <bits/stdc++.h>
using namespace std;


int main() {
    int N;
    scanf("%d", &N);
    vector<int> t(N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &t.at(i));
    }

    int ans = INT_MAX;

    for (int bit = 0; bit < (1 << N); ++bit) {
        int A = 0;
        int B = 0;
        int sum;
        for (int i = 0; i < N; ++i) {
            if (bit & (1 << i)) {
                A += t.at(i);
                continue;
            }
            B += t.at(i);
        }
        sum = max(A, B);
        ans = min(sum, ans);
    }

    printf("%d\n", ans);
}