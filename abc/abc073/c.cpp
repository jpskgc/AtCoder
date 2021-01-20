#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    set<long long> A;
    map<long long, int> list;
    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        A.insert(a);
        list[a]++;
    }

    int ans = 0;
    for (const auto &e : A) {
        if (list[e] % 2 == 1) {
            ans++;
        }
    }

    cout << ans << endl;
}
