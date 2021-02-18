#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, W;
    cin >> N >> W;

    int cnt = 0;
    while (true) {
        if (N >= W * (cnt + 1)) {
            cnt++;
            continue;
        }
        break;
    }

    cout << cnt << endl;
}