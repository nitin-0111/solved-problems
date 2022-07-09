#include <bits/stdc++.h>

using namespace std;
// #include<E:\Coding_and_Web\debug.cpp>

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define eps 1e-6
#define mod 1000000007
#define ull uint64_t

#define cmp [](const auto &l, const auto &r) { return l > r; }
#define all(v) v.begin(), v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

//#define int int64_t

void solve()
{

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int a[q][2];
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < q; i++)
    {
        int x = a[i][0] - 1, y = a[i][1] - 1;
        // cout<<x<<" "<<y<<endl;
        bool flag = true;
        bool check = true;
        for (int l = y + 1; l < n; l++)
        {
            if (s[y] == s[l])
            {
                flag = false;
                cout << "YES" << endl;
                // check = false;
                break;
            }
        }

        if (flag)
        {
           
                bool check = true;
                for (int l = 0; l < x; l++)
                {
                    if (s[l] == s[x])
                    {
                        flag = false;
                        check = false;
                        cout << "Yes" << endl;
                        break;
                    }
                }
               
            
        }

        if (flag)
        {
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
    IOS
        uint32_t tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}