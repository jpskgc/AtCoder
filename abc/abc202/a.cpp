#include <bits/stdc++.h>
using namespace std;

int dice(int n) {
    if (n == 1) {
        return 6;
    }
    if (n == 2) {
        return 5;
    }
    if (n == 3) {
        return 4;
    }
    if (n == 4) {
        return 3;
    }
    if (n == 5) {
        return 2;
    }
    if (n == 6) {
        return 1;
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int sum = 0;

    sum += dice(a);
    sum += dice(b);
    sum += dice(c);

    cout << sum << endl;
}
