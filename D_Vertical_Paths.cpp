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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define prDouble(x) cout << fixed << setprecision(10) << x
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
const string yes = "YES", no = "NO";
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>

#define int int64_t
vector<int> vis;
map<int, vector<int>> mp;
void fun(vector<int> &v, int src)
{
    v.pb(src);
    vis[src] = 1;
    if (mp.count(src) == 0)
    {
        return;
    }

    for (auto x : mp[src])
    {
        if (vis[x] == 0)
        {
            fun(v, x);
            break;
        }
    }
}
void solve()
{

    int n;
    cin >> n;
    vector<int> v(n + 1);
    int k = 0;
    vis.assign(n + 1, 0);

    rep(i, 1, n + 1)
    {
        cin >> v[i];
        if (i == v[i])
        {
            k = i;
            continue;
        }

        mp[v[i]].pb(i);
    }
    // debug(mp);
    // for (auto l : mp)
    // {
    //     cout << l.fi << " -->";
    //     for (auto x : l.se)
    //     {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }
    vector<int> ans;
    int src = k;
    // debug(src);
    fun(ans, src);
    // debug(ans);
    set<vector<int>> res;
    res.insert(ans);
   vector<int> p;
   for(auto x: mp)
   {
       if (x.fi == src)
            continue;


        ans.clear();
        if (vis[x.fi] == 0)
        {
            vector<int> z;
            fun(z, x.fi);
            res.insert(z);
            // cout << ans.size() << endl;
            // for (auto x: ans)
            // {
            //     cout << x << " ";
            // }
            // cout << endl;
        }
   }
    for (int i = 1; i <= n; i++)
    {
        if (i == src)
            continue;


        ans.clear();
        if (vis[i] == 0)
        {
            vector<int> z;
            fun(z, i);
            res.insert(z);
            // cout << ans.size() << endl;
            // for (auto x: ans)
            // {
            //     cout << x << " ";
            // }
            // cout << endl;
        }
    }
    cout << res.size() << endl;
    for (auto u : res)
    {
        cout << u.size() << endl;
        for (auto x : u)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    cout << endl;
    mp.clear();
    vis.clear();
    res.clear();
}

signed main()

{
    IOS
        uint32_t test_case;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif

    cin >> test_case;
    while (test_case--)
    {

        solve();
    }
    return 0;
}