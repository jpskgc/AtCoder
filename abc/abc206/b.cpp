#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int saving = 0;
    int i = 1;
    while (true) {
        saving += i;
        if (saving >= N) {
            break;
        }
        i++;
    }

    cout << i << endl;
}