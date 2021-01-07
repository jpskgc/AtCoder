#include <bits/stdc++.h>
using namespace std;

int cnt(long long n) {
    if (n < 10) {
        return 1;
    }
    return cnt(n / 10) + 1;
};

int main() {
    long long N;
    cin >> N;

    int ans = INT_MAX;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            long long B = N / i;
            int tmp = max(cnt(i), cnt(B));
            if (ans > tmp) {
                ans = tmp;
            }
        }
    }

    cout << ans << endl;
}
