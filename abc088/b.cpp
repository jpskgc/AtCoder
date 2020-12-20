#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A = 0, B = 0;
    cin >> N;
    vector<int> a(100);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    for (int i = 0; i < N; ++i) {
        if (i == 0 || i % 2 == 0) {
            A += a[i];
            continue;
        }
        B += a[i];
    }

    printf("%d\n", A - B);
}