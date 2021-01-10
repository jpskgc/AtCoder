#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    vector<tuple<string, int, int>> p;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        string a;
        int b;
        cin >> a >> b;
        p.emplace_back(a, -b, i + 1);
    }

    sort(p.begin(), p.end());

    for (int i = 0; i < N; ++i) {
        int x;
        tie(ignore, ignore, x) = p.at(i);
        cout << x << endl;
    }
}