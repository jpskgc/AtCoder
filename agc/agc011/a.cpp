#include <bits/stdc++.h>
using namespace std;


int main() {
    int N, C, K;
    cin >> N >> C >> K;
    vector<long long> T(N);
    for (int i = 0; i < N; ++i) {
        cin >> T.at(i);
    }

    sort(T.begin(), T.end());

    int ans = 0;

    for (int i = 0; i < N;) {
        ans++;
        int start = i;

        while (i < N && T.at(i) - T.at(start) <= K && i - start < C) {
            i++;
        }
    }
    cout << ans << endl;
}
