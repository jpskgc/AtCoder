#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long S, D;
    cin >> N >> S >> D;

    for (int i = 0; i < N; ++i) {
        long long X, Y;
        cin >> X >> Y;

        if (S > X && Y > D) {
            puts("Yes");
            return 0;
        }
    }

    puts("No");
    return 0;
}