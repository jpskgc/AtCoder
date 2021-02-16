#include <bits/stdc++.h>
using namespace std;
int main() {
    int X, Y;
    cin >> X >> Y;

    int small = min(X, Y);
    int big = max(X, Y);

    if (small + 3 > big) {
        puts("Yes");
        return 0;
    }

    puts("No");
    return 0;
}