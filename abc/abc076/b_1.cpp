#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int A, B, min = 1;
    for (int i = 0; i < N; ++i) {
        A = min * 2;
        B = min + K;
        if (A > B) {
            min = B;
            continue;
        }
        min = A;
    }
    printf("%d\n", min);
}