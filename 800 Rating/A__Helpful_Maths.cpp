#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char f;
    unsigned short i, cnt;

    getline(cin, s);

    for ( i = 0, cnt = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            cnt++;
        }
    }

    sort(s.begin(), s.end());

    s.erase(s.begin(), s.begin() + cnt);

    for ( i = 0; i < s.size(); i++)
    {
        if (i == s.size() - 1)
        {
            cout << s[i] << endl;
        }
        else
        {
            cout << s[i] << "+";
        }
        
        
    }
    

    //cout << s << endl;

    return 0;
}