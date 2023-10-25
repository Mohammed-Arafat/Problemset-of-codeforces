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
    int n; cin>>n;
    um<str, int> m;
    vs v;
    while (n--)
    {
        str s; cin>>s;
        auto it = find(all(v),s);
        if(it==v.end()){
            v.push_back(s);
            m.insert({s,1});
        }
        else m[s]++;
    }
    if(v.size()>1){
        int ct1 = m[v[0]], ct2=m[v[1]];
        if(ct1>ct2) cout<<v[0]<<endl;
        else cout<<v[1]<<endl;
    }else cout<<v[0]<<endl;

    return 0;
}