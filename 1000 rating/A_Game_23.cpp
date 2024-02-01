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
    ll n1,n2; cin>>n1>>n2;
    if(n1==n2) cout<<0<<endl;
    else if(n1==0) cout<<-1<<endl;
    else if(n1>n2) cout<<-1<<endl;
    else if(n2%n1==0){
        ll r=n1,cnt=0;
        for (int i = 0; r<n2; i++)
        {
            cnt++;
            if(n2%(r*2)==0) r*=2;
            else r*=3;
        }
        if(r==n2) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }else cout<<-1<<endl;

    return 0;
}