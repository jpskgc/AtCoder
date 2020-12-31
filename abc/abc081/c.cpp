#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    scanf("%d%d", &N, &K);

    vector<int> list(N);

    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        list.at(a - 1)++;
    }

    sort(list.begin(), list.end());

    int ans = 0;
    for (int i = 0; i < N - K; ++i) {
        ans += list[i];
    }

    printf("%d\n", ans);
}
