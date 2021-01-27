#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> record(2, vector<int>(N));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> record.at(i).at(j);
        }
    }

    int ans = 0;
    for (int i = 0; i < N; ++i) {
        int sum = 0;
        for (int j = 0; j < i; ++j) {
            sum += record.at(0).at(j);
        }
        sum += record.at(0).at(i);
        sum += record.at(1).at(i);

        for (int j = i + 1; j < N; ++j) {
            sum += record.at(1).at(j);
        }

        ans = max(ans, sum);
    }

    cout << ans << endl;
}