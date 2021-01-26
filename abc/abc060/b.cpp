#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    for (int i = 0; i < B; ++i) {
        if ((A * (i + 1)) % B == C) {
            puts("YES");
            return 0;
        }
    }

    puts("NO");
}