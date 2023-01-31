#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    unsigned short i;

    getline(cin, s1);
    getline(cin, s2);

    for ( i = 0; i < s1.size(); i++)
    {
        if (s1[i] >= 'A' and s1[i] <= 'Z')
        {
            s1[i] += 32;
        }
    }

    for ( i = 0; i < s2.size(); i++)
    {
        if (s2[i] >= 'A' and s2[i] <= 'Z')
        {
            s2[i] += 32;
        }
    }

    if (s1 == s2)
    {
        cout << 0 << endl;
    }
    else if (s1 < s2)
    {
        cout << -1 << endl;
    }
    else if (s1 > s2)
    {
        cout << 1 << endl;
    }
    
    
    

    return 0;
}