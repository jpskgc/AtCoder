#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, l = INT_MAX, cnt = 0;
    cin >> N;
    vector<int> b(N);
    for (int i = 0; i < N; ++i) {
        cin >> b[i];
    }

    sort(b.rbegin(), b.rend());

    for (int i = 0; i < N; ++i) {
        if (b[i] < l) {
            l = b[i];
            cnt++;
        }
    }

    printf("%d\n", cnt);
}