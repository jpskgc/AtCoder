#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int a = A % 2;
    int b = B % 2;

    if (a + b == 1) {
        puts("Borys");
        return 0;
    }

    puts("Alice");
}
