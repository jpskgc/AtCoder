#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int maxL = 0;
    int minR = INT_MAX;
    for (int i = 0; i < M; ++i) {
        int L, R;
        cin >> L >> R;
        maxL = max(maxL, L);
        minR = min(minR, R);
    }

    cout << max(0, minR - maxL + 1) << endl;
}
