#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;

    if ((a - (n % 500)) >= 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
