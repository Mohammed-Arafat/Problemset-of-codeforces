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
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int a[n]; avi(a,n,int);
        bool f=1;
        for (int i = 0;i<n-1;i++)
        {
            if(a[i]!=a[i+1]){
                f=0;
                break;
            }
        }
        if(f==1){
            cout<<0<<endl;
            continue;
        }
        int p1=0,p2=n-1;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i]==a[i+1]) p1++;
            else break;
        }
        for (int i = n-1; i > 0; i--)
        {
            if(a[i]==a[i-1]) p2--;
            else break;
        }
        if(a[p1]==a[p2]){
            cout<<p2-p1-1<<endl;
        }
        else{
            int x1=n-(n-1-p1), x2=n-p2;
            cout<<n-max(x1,x2)<<endl;
        }
    }
    

    return 0;
}