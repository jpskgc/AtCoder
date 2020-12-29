#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    scanf("%d%d", &N, &D);
    vector<vector<int>> X(N, vector<int>(D));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < D; j++) {
            scanf("%d", &X[i][j]);
        }
    }

    int cnt = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int distance = 0;
            for (int k = 0; k < D; k++) {
                int d = abs(X[i][k] - X[j][k]);
                distance += d * d;
            }
            bool flag = false;
            for (int l = 0; l <= distance; l++) {
                if (distance == l * l) {
                    flag = true;
                }
            }
            if (flag) {
                cnt++;
            }
        }
    }

    printf("%d\n", cnt);
}