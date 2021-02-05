#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> N(5);
    for (int i = 0; i < 5; ++i) {
        cin >> N.at(i);
    }

    int ans = max(N.at(4) + N.at(3) + N.at(0), N.at(4) + N.at(2) + N.at(1));

    cout << ans << endl;
}
