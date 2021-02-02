#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X, K, D;
    cin >> X >> K >> D;

    long long x = abs(X);

    if (x / D >= K) {
        cout << x - D * K << endl;
        return 0;
    }

    long long cnt = x / D;

    if ((K - cnt) % 2 == 0) {
        cout << x - D * cnt << endl;
        return 0;
    }

    cout << abs(x - D * cnt - D) << endl;
}
