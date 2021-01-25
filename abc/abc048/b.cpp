#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, x;
    cin >> a >> b >> x;

    long long L, R = 0;
    if (a != 0) {
        R = (a - 1) / x + 1;
    }

    L = b / x + 1;

    cout << L - R << endl;
}