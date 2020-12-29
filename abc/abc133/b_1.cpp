#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<vector<int>> table(N, vector<int>(D));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < D; ++j) {
            cin >> table.at(i).at(j);
        }
    }
    int cnt = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int distance = 0, diff;
            for (int k = 0; k < D; ++k) {
                diff = abs(table.at(i).at(k) - table.at(j).at(k));
                distance += diff * diff;
            }
            for (int k = 0; k <= distance; ++k) {
                if (distance == k * k) {
                    cnt++;
                }
            }
        }
    }

    printf("%d\n", cnt);
}