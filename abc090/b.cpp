#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, cnt = 0;
    scanf("%d%d", &A, &B);

    while (A <= B) {
        string a = to_string(A);
        if (a[0] == a[4] && a[1] == a[3]) {
            cnt++;
        }
        A++;
    }

    printf("%d\n", cnt);
}