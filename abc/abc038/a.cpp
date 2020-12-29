#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    if (S.at(S.size() - 1) == 'T') {
        puts("YES");
        return 0;
    }

    puts("NO");
}