#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P(N), Q(N);
    for (int i = 0; i < N; ++i) {
        cin >> P.at(i);
    }
    for (int i = 0; i < N; ++i) {
        cin >> Q.at(i);
    }
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        A.at(i) = i + 1;
    }

    map<vector<int>, int> m;
    do {
        m[A] = m.size();
    } while (next_permutation(A.begin(), A.end()));


    cout << abs(m.at(P) - m.at(Q)) << endl;
    return 0;
}
