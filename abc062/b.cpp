#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    string a[H];
    for (int i = 0; i < H; i++) {
        cin >> a[i];
        a[i] = '#' + a[i] + '#';
    }

    string firstAndLast;
    for (int i = 0; i < W + 2; i++) {
        firstAndLast += '#';
    }

    cout << firstAndLast << endl;
    for (int i = 0; i < H; ++i) {
        cout << a[i] << endl;
    }
    cout << firstAndLast << endl;
}