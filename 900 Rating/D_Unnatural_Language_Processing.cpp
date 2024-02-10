#include<bits/stdc++.h>
using namespace std;

typedef unsigned int ui;
typedef unsigned long long ull;
typedef unsigned short us;
typedef long long ll;
typedef string str;
typedef double dou;
typedef unsigned char uc;
typedef vector<int> vi;
typedef vector<unsigned int> vui;
typedef vector<short> vsh;
typedef vector<unsigned short> vus;
typedef vector<unsigned long long> vull;
typedef vector<long long> vll;
typedef vector<float> vf;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<string> vs;
#define um unordered_map
#define umm unordered_multimap
#define uset unordered_set
#define umset unordered_multiset
#define st stack
#define qu queue
#define pa pair
#define pi 2*acos(0)
#define phb(a) push_back(a)
#define plb(a) pull_back(a)
#define sz(v, datatype) (datatype)(v).size()
#define all(a) (a).begin(), (a).end()
#define allr(a) (a).rbegin(), (a).rend()
#define alla(a,n) a,a+n
#define lcm(a,b) ((a*b)/__gcd(a,b))
#define endl "\n"
#define avi(arr, n, datatype)        \
    for (datatype i = 0; i < n; i++) \
    {                                \
        cin >> arr[i];               \
    }
#define avo(arr, n, datatype)  \
    for (datatype i = 0; i < n; i++) \
    {                          \
        cout << arr[i] << " "; \
    }                          \
    cout << endl;
#define a2i(arr, n, m, datatype)         \
    for (datatype i = 0; i < n; i++)     \
    {                                    \
        for (datatype j = 0; j < m; j++) \
        {                                \
            cin >> arr[i][j];            \
        }                                \
    }
#define a2o(arr, n, m, datatype)         \
    for (datatype i = 0; i < n; i++)     \
    {                                    \
        for (datatype j = 0; j < m; j++) \
        {                                \
            cout << arr[i][j] << " ";    \
        }                                \
        cout << endl;                    \
    }
#define s2i(st, n, datatype)         \
    for (datatype i = 0; i < n; ++i) \
    {                                \
        getline(cin >> ws, st[i]);   \
    }
#define s2o(st, n, datatype)         \
    for (datatype i = 0; i < n; ++i) \
    {                                \
        cout << st[i] << endl;       \
    }
#define prb(datatype, n, range)           \
    for (datatype i = range; i >= 0; i--) \
    {                                     \
        cout << ((n >> i) & 1);           \
    }                                     \
    cout << endl;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    short t; cin>>t;
    while (t--)
    {
        int n,f=0; cin>>n;
        str s; cin>>s;
        vs v;
        for (int i = 0; i < sz(s,int)-3; i++,f=i)
        {
            if((s[i]=='b' or s[i]=='c' or s[i]=='d') and (s[i+1]=='a' or s[i+1]=='e') and (s[i+2]=='b' or s[i+2]=='c' or s[i+2]=='d') and (s[i+3]=='a' or s[i+3]=='e')){
                str x;
                x.push_back(s[i]);
                x.push_back(s[i+1]);
                v.push_back(x);
                i+=1;
            }else if((s[i]=='b' or s[i]=='c' or s[i]=='d') and (s[i+1]=='a' or s[i+1]=='e') and (s[i+2]=='b' or s[i+2]=='c' or s[i+2]=='d') and (s[i+3]=='b' or s[i+3]=='c' or s[i+3]=='d')){
                str x;
                x.push_back(s[i]);
                x.push_back(s[i+1]);
                x.push_back(s[i+2]);
                v.push_back(x);
                x.clear();
                i+=2;
            }
        }
        if((sz(s,int)-1-f==2) and (s[f]=='b' or s[f]=='c' or s[f]=='d') and (s[f+1]=='a' or s[f+1]=='e') and (s[f+2]=='b' or s[f+2]=='c' or s[f+2]=='d')){
                str x;
                x.push_back(s[f]);
                x.push_back(s[f+1]);
                x.push_back(s[f+2]);
                v.push_back(x);
                x.clear();
            }
            else if((sz(s,int)-1-f==1) and (s[f]=='b' or s[f]=='c' or s[f]=='d') and (s[f+1]=='a' or s[f+1]=='e')){
                str x;
                x.push_back(s[f]);
                x.push_back(s[f+1]);
                v.push_back(x);
                x.clear();
            }
        for (int i = 0; i < sz(v,int); i++)
        {
            if(i==sz(v,int)-1) cout<<v[i]<<endl;
            else cout<<v[i]<<".";
        }
        
    }
    

    return 0;
}