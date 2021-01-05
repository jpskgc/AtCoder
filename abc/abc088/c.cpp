#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> record(3, vector<int>(3));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &record.at(i).at(j));
        }
    }

    vector<int> x(3);
    vector<int> y(3);

    y[0] = 0;

    for (int i = 0; i < 3; ++i) {
        x.at(i) = record.at(0).at(i) - y.at(0);
        y.at(i) = record.at(i).at(0) - x.at(0);
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (record.at(i).at(j) != x.at(j) + y.at(i)) {
                puts("No");
                return 0;
            }
        }
    }
    puts("Yes");
}