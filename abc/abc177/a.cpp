#include <bits/stdc++.h>
using namespace std;

int main() {
    float D, T, S;
    cin >> D >> T >> S;

    float time = D / S;

    if (time <= T) {
        puts("Yes");
        return 0;
    }

    puts("No");
    return 0;
}