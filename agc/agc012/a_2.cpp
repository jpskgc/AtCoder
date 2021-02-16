#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<long long> record(N * 3);
    for (int i = 0; i < N * 3; ++i) {
        cin >> record.at(i);
    }

    sort(record.begin(), record.end());
    reverse(record.begin(), record.end());

    long long ans = 0;
    for (int i = 1; i < 2 * N; i += 2) {
        ans += record.at(i);
    }

    cout << ans << endl;
}