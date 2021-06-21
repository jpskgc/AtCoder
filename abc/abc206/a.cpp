#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int price = floor(N * 1.08);
    int regular_price = 206;


    if (price < regular_price) {
        puts("Yay!");
        return 0;
    }
    if (price == regular_price) {
        puts("so-so");
        return 0;
    }
    if (price > regular_price) {
        puts(":(");
        return 0;
    }
}