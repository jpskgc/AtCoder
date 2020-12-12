#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int n[N];
    int count[N];

    for (int i = 0; i < N; i++) {
        n[i] = i + 1;
        count[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        while (true) {
            if (n[i] % 2 == 1) {
                break;
            }
            n[i] /= 2;
            count[i]++;
        }
    }

    int max = *max_element(count, count + N);

    cout << pow(2, max) << endl;
}
