#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> vx(N), vy(N), vh(N);
    int si = -1;
    for (int i = 0; i < N; ++i) {
        cin >> vx[i] >> vy[i] >> vh[i];
        if (vh[i] > 0) si = i;
    }

    long long ans_x = -1, ans_y = -1, ans_h = -1;
    for (long long x = 0; x <= 100; ++x) {
        for (long long y = 0; y <= 100; ++y) {
            long long h = vh[si] + abs(x - vx[si]) + abs(y - vy[si]);
            bool ok = true;
            for (int i = 0; i < N; ++i) {
                if (vh[i] > 0 && h - vh[i] != abs(x - vx[i]) + abs(y - vy[i]))
                    ok = false;
                if (vh[i] == 0 && h > abs(x - vx[i]) + abs(y - vy[i]))
                    ok = false;
            }
            if (ok) ans_x = x, ans_y = y, ans_h = h;
        }
    }
    cout << ans_x << " " << ans_y << " " << ans_h << endl;
}
