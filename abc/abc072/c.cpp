#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, int> A;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A[a]++;
    }

    int ans = 0;
    for (int i = 0; i <= 100000; ++i) {
        int tmp = A[i - 1] + A[i] + A[i + 1];
        if (tmp > ans) {
            ans = tmp;
        }
    }

    cout << ans << endl;
}
