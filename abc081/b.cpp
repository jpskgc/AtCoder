#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A[210];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    bool hasOdd = false;
    int count = 0;

    while (true)
    {
        for (int i = 0; i < N; i++)
        {
            if (A[i] % 2 == 1)
            {
                hasOdd = true;
            }
        }

        if (hasOdd)
        {
            break;
        }

        for (int i = 0; i < N; i++)
        {
            A[i] /= 2;
        }

        count++;
    }

    cout << count << endl;
}
