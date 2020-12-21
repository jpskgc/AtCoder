#include <bits/stdc++.h>
using namespace std;


int sum(int n) {
    int sum = 0;
    while (true) {
        if (n == 0) {
            break;
        }
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N, min = INT_MAX, s;
    cin >> N;

    for (int i = 1; i < N; ++i) {
        s = 0;
        s += sum(i);
        s += sum(N - i);
        if (s < min) {
            min = s;
        }
    }

    cout << min << endl;
}