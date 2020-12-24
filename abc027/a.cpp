#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, x, cnt = 0;
    cin >> N >> x;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < N; ++i) {
        if (i == N - 1 && a.at(i) != x) {
            break;
        }
        if (a[i] > x) {
            break;
        }

        x -= a[i];
        cnt++;
    }

    printf("%d\n", cnt);
}