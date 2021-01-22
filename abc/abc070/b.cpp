#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (B <= C || D <= A) {
        cout << 0 << endl;
        return 0;
    }

    if (C <= A && B <= D) {
        cout << B - A << endl;
        return 0;
    }

    if (A <= C && D <= B) {
        cout << D - C << endl;
        return 0;
    }

    if (A < C) {
        cout << B - C << endl;
        return 0;
    }

    cout << D - A << endl;
    return 0;
}
