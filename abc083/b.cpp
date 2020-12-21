#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B, n, sum;
    cin >> N >> A >> B;

    int ans = 0;
    for (int i = 1; i <= N; ++i) {
        sum = 0;
        n = i;
        while (true) {
            if (n == 0) {
                break;
            }
            sum += n % 10;
            n /= 10;
        }
        if (A <= sum && sum <= B) {
            ans += i;
        }
    }

    cout << ans << endl;
}
