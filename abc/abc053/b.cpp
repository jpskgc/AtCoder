#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int start;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') {
            start = i;
            break;
        }
    }

    int end;
    for (int i = 0; i < s.size(); i++) {
        if (s[s.size() - i - 1] == 'Z') {
            end = s.size() - i;
            break;
        }
    }

    cout << end - start << "\n";
}