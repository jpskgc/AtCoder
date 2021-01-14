#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    long countStartWithPlus = 0;
    long sumStartWithPlus = 0;
    for (int i = 0; i < N; ++i) {
        sumStartWithPlus += A.at(i);
        if (i % 2 == 0) {
            if (sumStartWithPlus <= 0) {
                countStartWithPlus += abs(sumStartWithPlus) + 1;
                sumStartWithPlus += abs(sumStartWithPlus) + 1;
            }
        } else {
            if (sumStartWithPlus >= 0) {
                countStartWithPlus += abs(sumStartWithPlus) + 1;
                sumStartWithPlus -= abs(sumStartWithPlus) + 1;
            }
        }
    }

    long countStartWithMinus = 0;
    long sumStartWithMinus = 0;
    for (int i = 0; i < N; ++i) {
        sumStartWithMinus += A.at(i);
        if (i % 2 == 1) {
            if (sumStartWithMinus <= 0) {
                countStartWithMinus += abs(sumStartWithMinus) + 1;
                sumStartWithMinus += abs(sumStartWithMinus) + 1;
            }
        } else {
            if (sumStartWithMinus >= 0) {
                countStartWithMinus += abs(sumStartWithMinus) + 1;
                sumStartWithMinus -= abs(sumStartWithMinus) + 1;
            }
        }
    }

    cout << min(countStartWithPlus, countStartWithMinus) << endl;
}
