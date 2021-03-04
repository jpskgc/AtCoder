#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<long long> record(4);

    record.at(0) = a * c;
    record.at(1) = a * d;
    record.at(2) = b * c;
    record.at(3) = b * d;

    long long ans = -LONG_LONG_MAX;
    for (int i = 0; i < 4; ++i) {
        ans = max(ans, record.at(i));
    }

    cout << ans << endl;
}