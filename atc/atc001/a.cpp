#include <bits/stdc++.h>
using namespace std;

bool is_valid_move(vector<vector<char>> &board, vector<vector<bool>> &checked, int x, int y) {
    int H = board.size();
    int W = board.at(0).size();

    if (x <= -1 || x >= W || y <= -1 || y >= H) {
        return false;
    }
    if (board.at(y).at(x) == '#') {
        return false;
    }
    if (checked.at(y).at(x)) {
        return false;
    }

    return true;
}

bool reachable(vector<vector<char>> &board, vector<vector<bool>> &checked, int x, int y) {

    checked.at(y).at(x) = true;

    if (board.at(y).at(x) == 'g') {
        return true;
    }

    bool result = false;

    if (is_valid_move(board, checked, x, y - 1) && reachable(board, checked, x, y - 1)) {
        result = true;
    }
    if (is_valid_move(board, checked, x + 1, y) && reachable(board, checked, x + 1, y)) {
        result = true;
    }
    if (is_valid_move(board, checked, x, y + 1) && reachable(board, checked, x, y + 1)) {
        result = true;
    }
    if (is_valid_move(board, checked, x - 1, y) && reachable(board, checked, x - 1, y)) {
        result = true;
    }

    return result;
}

int main() {
    int H, W;
    scanf("%d%d", &H, &W);
    vector<vector<char>> board(H, vector<char>(W));
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> board.at(i).at(j);
        }
    }

    int y, x;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (board.at(i).at(j) == 's') {
                y = i;
                x = j;
            }
        }
    }

    vector<vector<bool>> checked(H, vector<bool>(W));

    if (reachable(board, checked, x, y)) {
        puts("Yes");
        return 0;
    }

    puts("No");
}