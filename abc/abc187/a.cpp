#include <bits/stdc++.h>
using namespace std;
int main() {
    string A, B;
    cin >> A >> B;

    int SA, SB = 0;
    for (int i = 0; i < 3; ++i) {
        SA += A.at(i) - '0';
        SB += B.at(i) - '0';
    }

    cout << max(SA, SB) << endl;
}