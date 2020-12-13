#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string odd_s;

    for (int i = 1; i <= s.size(); i++) {
        if (i % 2 == 1) {
            odd_s += s[i - 1];
        }
    }

    cout << odd_s << "\n";
}
