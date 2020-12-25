#include <bits/stdc++.h>
using namespace std;


int main() {
    int N;
    long long sum = 0;
    cin >> N;
    vector<long long> a(3 * N);
    for (int i = 0; i < 3 * N; ++i) {
        cin >> a.at(i);
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    for (int i = 1, j = 0; j < N; i += 2, j++) {
        sum += a.at(i);
    }
    cout << sum << endl;
}
