#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    vector<int> L(N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &L.at(i));
    }

    int cnt = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (L.at(i) == L.at(j)) {
                continue;
            }
            for (int k = j + 1; k < N; ++k) {
                if (L.at(i) == L.at(k) || L.at(j) == L.at(k)) {
                    continue;
                }
                if (L.at(i) + L.at(j) > L.at(k) && L.at(j) + L.at(k) > L.at(i) && L.at(k) + L.at(i) > L.at(j)) {
                    cnt++;
                }
            }
        }
    }

    printf("%d\n", cnt);
}