#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> A(4);
    for (int i = 0; i < 4; ++i) {
        cin >> A.at(i);
    }

    sort(A.begin(), A.end());

    cout << A.at(0) << endl;
}