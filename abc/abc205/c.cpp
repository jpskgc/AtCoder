#include <bits/stdc++.h>
using namespace std;

/*
 * まともにやると計算量は10^9 * 10^9 = 10^18
 * long longでおよそ10^18(-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807)の為、
 * オーバーフローになってしまう。
 */
int main() {
    long long A, B, C;
    cin >> A >> B >> C;

    if (C % 2 == 0) {
        if (abs(A) < abs(B)) {
            puts("<");
            return 0;
        }
        if (abs(A) == abs(B)) {
            puts("=");
            return 0;
        }
        if (abs(A) > abs(B)) {
            puts(">");
            return 0;
        }
    }

    if (A < B) {
        puts("<");
        return 0;
    }
    if (A == B) {
        puts("=");
        return 0;
    }
    if (A > B) {
        puts(">");
        return 0;
    }
}