#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    map<int, long long> mp;
    for (int i = 0; i < (n); ++i) {
        int a;
        cin >> a;
        mp[a]++;
    }
    long long ans = n * (n - 1) / 2;
    for (auto &[a, b] : mp) {
        ans -= b * (b - 1) / 2;
    }
    cout << ans << endl;
}