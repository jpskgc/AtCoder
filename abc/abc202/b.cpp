#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    for (int i = 0; i < s.length(); ++i) {
        if (s.at(i) == '6') {
            s.at(i) = '9';
            continue;
        }

        if (s.at(i) == '9') {
            s.at(i) = '6';
        }
    }

    cout << s << endl;
}