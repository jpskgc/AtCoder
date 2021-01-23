#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long ans = 1;
    for (int i = 0; i < N; ++i) {
        ans = ans * (i + 1) % 1000000007;
    }

    cout << ans << endl;
}
