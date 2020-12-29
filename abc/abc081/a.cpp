#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i <= 2; i++)
    {
        if (s[0] == "1")
        {
            count++;
        }
    }

    cout << count << endl;
}
