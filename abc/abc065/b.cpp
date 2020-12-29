#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, tmp;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        a[i] = tmp - 1;
    }

    int cnt = 0;
    int now = 0;
    while (true) {
        if (now == 1) {
            break;
        }
        if (cnt == N) {
            puts("-1");
            return 0;
        }
        cnt++;
        now = a[now];
    }
    printf("%d", cnt);
}