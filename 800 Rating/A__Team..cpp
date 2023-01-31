#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned short n, i, j, f, result = 0;

    cin >> n;

    unsigned short decision[n][3];

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin >> decision[i][j];
        }
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = 0, f = 0; j < 3; j++)
        {
            if (decision[i][j] == 1)
            {
                f++;
            }
        }
        
        if (f >= 2)
        {
            result++;
        }
        
    }

    cout << result << endl;

    return 0;
}