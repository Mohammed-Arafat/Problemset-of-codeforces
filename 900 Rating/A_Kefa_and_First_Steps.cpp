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
#define pi 2*acos(0);
#define phb(a) push_back(a);
#define plb(a) pull_back(a);
#define sor(v) sort(v.begin(),v.end());
#define rsor(v) sort(v.rbegin(),v.rend());
#define sz(v, datatype) (datatype)(v.size());
#define find(v, e) find(v.begin(),v.end(), e);
#define endl "\n";
#define arr_or_vec_input(arr, n, datatype)    for (datatype i = 0; i < n; i++)\
                                                {\
                                                    cin >> arr[i];\
                                                }
#define arr_or_vec_output(arr, n, datatype)   for (us i = 0; i < n; i++)\
                                                {\
                                                    cout << arr[i] << " ";\
                                                }\
                                            cout << endl;
#define arr_2D_input(arr, n , m, datatype)  for(datatype i = 0; i < n; i++)\
                                                {\
                                                    for(datatype j = 0; j < m; j++)\
                                                        {\
                                                            cin >> arr[i][j];\
                                                        }\
                                                }
#define arr_2D_output(arr, n, m, datatype)  for(datatype i = 0; i < n; i++)\
                                                {\
                                                    for(datatype j = 0; j < m; j++)\
                                                        {\
                                                            cout << arr[i][j] << " ";\
                                                        }\
                                                    cout << endl;\
                                                }
#define str_2D_input(st, n, datatype)       for (datatype i = 0; i < n; ++i)\
                                                {\
                                                    getline(cin >> ws, st[i]);\
                                                }
#define str_2D_output(st, n, datatype)      for (datatype i = 0; i < n; ++i)\
                                                {\
                                                    cout<<st[i]<< endl;\
                                                }


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ui n; cin >> n;
    ui a[n];
    arr_or_vec_input(a, n, ui);
    ull cnt = 0, now = 0;
    for (ui i = 0; i < n - 1; i++)
    {
        if ((i == n - 2) and ((a[i] < a[i + 1]) or (a[i] == a[i + 1])))
        {
            cnt++;
            if (now < cnt)
            {
                now = cnt;
                //cnt = 0;
                break;
            }
        }
        else if ((a[i] < a[i + 1]) or (a[i] == a[i + 1]))
        {
            cnt++;
        }
        else if (now < cnt)
        {
            now = cnt;
            cnt = 0;
        }
        else
        {
            cnt = 0;
        }
        
    }
    cout << now + 1 << endl;

    return 0;
}