#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<long long> a(N), b(N), c(M), d(M);
    for (int i = 0; i < N; ++i) {
        cin >> a.at(i) >> b.at(i);
    }
    for (int i = 0; i < M; ++i) {
        cin >> c.at(i) >> d.at(i);
    }
    vector<long long> ANS(N);

    for (int i = 0; i < N; ++i) {
        long long min_dist = LONG_LONG_MAX;
        int ans;
        for (int j = 0; j < M; ++j) {
            long long dist = abs(a.at(i) - c.at(j)) + abs(b.at(i) - d.at(j));
            if (min_dist > dist) {
                min_dist = dist;
                ans = j + 1;
            }
        }
        cout << ans << endl;
    }
}