#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &a.at(i));
    }

    int i = 0;
    int cnt = 0;
    while (true) {
        if (i == 1) {
            printf("%d\n", cnt);
            return 0;
        }
        if (cnt == N) {
            break;
        }
        i = a.at(i) - 1;
        cnt++;
    }

    puts("-1");
}