#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    long long ans = A * X + B * Y;
    for (int i = 0; i <= max(X, Y) * 2; ++i) {
        long long tmp = 2 * C * i;
        tmp += max(0LL, X - i) * A;
        tmp += max(0LL, Y - i) * B;
        if (ans > tmp) {
            ans = tmp;
        }
    }

    cout << ans << endl;
}