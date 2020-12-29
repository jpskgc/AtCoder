#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    int sum = 0;
    for (int i = 0; i < N.length(); i++) {
        sum += N[i] - '0';
    }

    if (stoi(N) % sum == 0) {
        puts("Yes");
        return 0;
    }

    puts("No");
}
