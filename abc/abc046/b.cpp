#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int ans = 0;

    for (int i = 0; i < N; ++i) {
        if (i == 0) {
            ans = K;
            continue;
        }
        ans *= K - 1;
    }

    cout << ans << endl;
}