#include <bits/stdc++.h>
using namespace std;

int main() {
    int Y, X;
    cin >> Y >> X;
    vector<string> table(Y);
    vector<bool> yok(Y), xok(X);
    for (int i = 0; i < Y; ++i) {
        cin >> table.at(i);
    }

    for (int i = 0; i < Y; ++i) {
        for (int j = 0; j < X; ++j) {
            if (table.at(i).at(j) == '#') {
                yok.at(i) = true;
                xok.at(j) = true;
            }
        }
    }

    for (int i = 0; i < Y; ++i) {
        if (yok.at(i)) {
            for (int j = 0; j < X; ++j) {
                if (xok.at(j)) {
                    cout << table.at(i).at(j);
                }
            }
            cout << endl;
        }
    }
}