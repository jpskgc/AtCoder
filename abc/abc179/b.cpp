#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 0; i < N; ++i) {
        int df, ds;
        cin >> df >> ds;

        if (df == ds) {
            cnt++;
            if (cnt >= 3) {
                puts("Yes");
                return 0;
            }
            continue;
        }
        cnt = 0;
    }

    puts("No");
}