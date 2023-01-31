#include<bits/stdc++.h>
using namespace std;

int main()
{
    short n, i, j, bit = 0;

    cin >> n;

    getchar();

    string s;

    for ( i = 0; i < n; i++)
    {
        getline(cin, s);

        for ( j = 0; j < 3; j++)
        {
            if (s[j] == '+')
            {
                bit++;
                break;
            }
            else if(s[j] == '-')
            {
                bit--;
                break;
            }
        }
        
    }

    cout << bit << endl;

    return 0;
}