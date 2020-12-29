#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    string S;
    for (int i = 0; i < N; i++) {
        cin >> S;
        if (S == "Y") {
            printf("Four\n");
            return 0;
        }
    }

    printf("Three\n");
}