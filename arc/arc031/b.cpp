#include <bits/stdc++.h>
using namespace std;

void fill_island(vector<vector<char>> &board, vector<vector<bool>> &checked, int y, int x) {
    if (y < 0 || y > 9 || x < 0 || x > 9) {
        return;
    }
    if (board.at(y).at(x) == 'x') {
        return;
    }
    if (checked.at(y).at(x)) {
        return;
    }

    checked.at(y).at(x) = true;

    fill_island(board, checked, y + 1, x);
    fill_island(board, checked, y - 1, x);
    fill_island(board, checked, y, x + 1);
    fill_island(board, checked, y, x - 1);
}

bool check_connected(vector<vector<char>> &board) {
    vector<vector<bool>> checked(10, vector<bool>(10, false));

    int y, x;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (board.at(i).at(j) == 'o') {
                y = i;
                x = j;
                break;
            }
        }
    }

    fill_island(board, checked, y, x);

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (board.at(i).at(j) == 'o') {
                if (!checked.at(i).at(j)) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    vector<vector<char>> board(10, vector<char>(10));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; ++j) {
            cin >> board.at(i).at(j);
        }
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (board.at(i).at(j) == 'o') {
                continue;
            }

            board.at(i).at(j) = 'o';
            if (check_connected(board)) {
                puts("YES");
                return 0;
            }

            board.at(i).at(j) = 'x';
        }
    }
    puts("NO");
}