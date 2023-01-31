#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned short matrix[5][5], i, j, pos_i, pos_j;

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                pos_i = i;
                pos_j = j;
                goto done;
            }
            
        }
    }
    done:;

    if (pos_i == 2 and pos_j == 2)
    {
        cout << 0 << endl;
    }
    else if (pos_i > 2 and pos_j < 2)
    {
        cout << (pos_i - 2) + (2 - pos_j) << endl;
    }
    else if (pos_i < 2 and pos_j > 2)
    {
        cout << (2 - pos_i) + (pos_j - 2) << endl;
    }
    else if (pos_i < 2 and pos_j < 2)
    {
        cout << (2 - pos_i) + (2 - pos_j) << endl;
    }
    else if (pos_i > 2 and pos_j > 2)
    {
        cout << (pos_i - 2) + (pos_j - 2) << endl;
    }
    else if (pos_i == 2 and pos_j < 2)
    {
        cout << (2 - pos_j) << endl;
    }
    else if (pos_i == 2 and pos_j > 2)
    {
        cout << (pos_j - 2) << endl;
    }
    else if (pos_i < 2 and pos_j == 2)
    {
        cout << (2 - pos_i) << endl;
    }
    else if (pos_i > 2 and pos_j == 2)
    {
        cout << (pos_i - 2) << endl;
    }

    return 0;
}