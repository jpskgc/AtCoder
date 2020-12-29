#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    string op;
    cin >> A >> op >> B;

    if (op == "+") {
        printf("%d", A + B);
        return 0;
    }

    printf("%d", A - B);
}