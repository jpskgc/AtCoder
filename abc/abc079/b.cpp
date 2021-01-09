#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    vector<long long> lucas(N + 1);
    lucas.at(0) = 2LL;
    lucas.at(1) = 1LL;
    for (int i = 2; i <= N; ++i) {
        lucas.at(i) = lucas.at(i - 1) + lucas.at(i - 2);
    }

    printf("%lld\n", lucas.at(N));
}
