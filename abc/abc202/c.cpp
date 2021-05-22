#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N), C(N);
    for (int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        A.at(i) = n - 1;
    }
    for (int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        B.at(i) = n - 1;
    }
    for (int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        C.at(i) = n - 1;
    }

    vector<int> cnt(N);
    for (int i = 0; i < N; ++i) {
        cnt.at(B.at(C.at(i))) += 1;
    }

    long long sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += cnt.at(A.at(i));
    }

    cout << sum << endl;
}