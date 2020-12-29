#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    string ans;
    for (int i = 0; i <= 25; i++) {
        for (int j = 0; j <= 14; j++) {
            if (i * 4 + j * 7 == N) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}
