#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    unsigned int i, cnt;

    cin >> s;

    for ( i = 0, cnt = 0; i < s.length(); i++)
    {
        if (find(t.begin(), t.end(), s[i]) == t.end())
        {
            t.push_back(s[i]);
            cnt++;
        }
        
    }

    if (cnt % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}