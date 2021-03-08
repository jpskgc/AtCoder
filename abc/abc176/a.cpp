#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X, T;
    cin >> N >> X >> T;

    int sumt = 0, sumx = 0;

    while (sumx < N) {
        sumx += X;
        sumt += T;
    }

    cout << sumt << endl;
}