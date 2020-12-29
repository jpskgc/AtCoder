#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    scanf("%d%d", &H, &W);
    string S[H];
    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }

    int dx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
    int dy[8] = {1, 1, 1, 0, -1, -1, -1, 0};

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '#') {
                continue;
            }

            int cnt = 0;
            for (int k = 0; k < 8; k++) {
                int x = i - dx[k];
                int y = j - dy[k];
                if (x >= 0 && x < H && y >= 0 && y < W) {
                    if (S[x][y] == '#') {
                        cnt++;
                    }
                }
            }

            S[i][j] = char(cnt + '0');
        }
    }

    for (int i = 0; i < H; i++) {
        cout << S[i] << endl;
    }
}
