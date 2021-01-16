#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> t(N + 1), x(N + 1), y(N + 1);
    for (int i = 1; i < N + 1; ++i) {
        cin >> t.at(i) >> x.at(i) >> y.at(i);
    }

    for (int i = 0; i < N; ++i) {
        int dt = t.at(i + 1) - t.at(i);
        int dist = abs(x.at(i + 1) - x.at(i)) + abs(y.at(i + 1) - y.at(i));
        if (dt < dist) {
            puts("No");
            return 0;
        }
        if ((dt % 2) != (dist % 2)) {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
}
