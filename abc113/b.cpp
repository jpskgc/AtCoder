#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    double T, A;
    cin >> N >> T >> A;

    int H[N];
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    double min = 2147483647;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        double tmp = T - H[i] * 0.006;
        double diff = abs(A - tmp);
        if (diff < min) {
            ans = i + 1;
            min = diff;
        }
    }

    cout << ans << endl;
}