#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> N(3);
    for (int i = 0; i < 3; ++i) {
        cin >> N.at(i);
    }
    sort(N.begin(), N.end());
    reverse(N.begin(), N.end());

    int ans = 0;
    if ((3 * N.at(0)) % 2 == ((N.at(0) + N.at(1) + N.at(2)) % 2)) {
        ans = (3 * N.at(0) - N.at(0) - N.at(1) - N.at(2)) / 2;
    } else {
        ans = (3 * (N.at(0) + 1) - N.at(0) - N.at(1) - N.at(2)) / 2;
    }

    cout << ans << endl;
}
