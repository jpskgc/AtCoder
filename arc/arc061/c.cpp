#include <bits/stdc++.h>
using namespace std;


int main() {
    string S;
    cin >> S;

    long long sum = 0;
    int N = S.size();
    for (int bit = 0; bit < (1 << (N - 1)); ++bit) {
        long long tmp = 0;

        for (int j = 0; j < N - 1; ++j) {
            tmp *= 10;

            tmp += S.at(j) - '0';

            if (bit & (1 << j)) {
                sum += tmp;
                tmp = 0;
            }
        }
        tmp *= 10;

        tmp += S.back() - '0';

        sum += tmp;
    }

    cout << sum << endl;
}