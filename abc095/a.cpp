#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int y = 700;

    if (s[0] == 'o')
        y += 100;
    if (s[1] == 'o')
        y += 100;
    if (s[2] == 'o')
        y += 100;

    cout << y << endl;
}
