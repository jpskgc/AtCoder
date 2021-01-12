#include <bits/stdc++.h>
using namespace std;


int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    int ans = 0;
    for (int i = 0; i < N; ++i) {
        while (i + 1 < N && A.at(i) == A.at(i + 1)) {
            ++i;
        }

        if (i + 1 < N && A.at(i) < A.at(i + 1)) {
            while (i + 1 < N && A.at(i) <= A.at(i + 1)) {
                ++i;
            }
        } else if (i + 1 < N && A.at(i) > A.at(i + 1)) {
            while (i + 1 < N && A.at(i) >= A.at(i + 1)) {
                ++i;
            }
        }
        ans++;
    }
    cout << ans << endl;
}
