#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            if (i * j == N) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}
