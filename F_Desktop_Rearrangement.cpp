#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include <D:\Coding_and_Web\debug.cpp>

#else // online submission

#endif

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(v) v.begin(), v.end()
#define uniq(v) v.erase(unique(all(v)), v.end())
#define sz(x) (int)((x).size())
#define ll long long
#define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t
#define cmp [](const auto &l, const auto &r) { return l > r; }
#define fi first
#define se second
#define prDouble(x) cout << fixed << setprecision(10) << x
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

#define pb push_back
#define vi vector<int>

#define int int64_t

void solve()
{

    int n, m, q;
    cin >> n >> m >> q;
    char c[n][m];
    map<pair<int, int>, int> mp;
    rep(i, 0, n)
    {
        bool ok = false;
        rep(j, 0, m)
        {

            cin >> c[i][j];
            if (c[i][j] == '.')
            {
                ok = true;
                continue;
            }
            if (ok and c[i][j] == '*')
            {
                mp[{i, j}] = 1;
            }
        }
    }
    // debug(mp);
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        x--,y--;
        if (c[x][y] == '.')
        {
            for (int i = y - 1; i >= 0; i--)
            {
                if (c[x][i] == '.')
                {
                    mp[{x, y}] = 1;
                    break; 
                }
            }
            cout << mp.size() << endl;
        }
        else
        {
            if (mp[{x, y}])
            {
                mp.erase({x, y});
                cout<<mp.size()<<endl;
                continue;
              
            }
            c[x][y] = '.';
            for(int k=y+1;k<m;k++)
            {
                if(c[x][k]=='*')
                {
                    if(mp[{x,k}]!=0)
                    mp[{x,k}]=1;
                }
            }
            cout << mp.size() << endl;
        }
        // debug(mp);
        // cout<<q<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         cout<<c[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    }
}

signed main()

{
    IOS
        uint32_t test_case = 1;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif

    while (test_case--)
    {

        solve();
    }
    return 0;
}