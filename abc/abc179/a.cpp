#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    if (S.at(S.size() - 1) == 's') {
        cout << S << "es" << endl;
        return 0;
    }

    cout << S << "s" << endl;
    return 0;
}