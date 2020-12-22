#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, sum = 0;
    cin >> N >> K;
    vector<int> l(N);
    for (int i = 0; i < N; ++i) {
        cin >> l.at(i);
    }
    sort(l.begin(), l.end(), greater<int>());
    for (int i = 0; i < K; ++i) {
        sum += l.at(i);
    }
    printf("%d\n", sum);
}
