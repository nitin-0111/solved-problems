#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#ifndef ONLINE_JUDGE
#include <D:\Coding_and_Web\debug.cpp>
#else
#define debug(x...)
#endif
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define all(v) v.begin(), v.end()
#define uniq(v) v.resize(unique(all(v)) - v.begin())
#define ll long long
#define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t
#define fi first
#define se second
#define prDouble(x) cout << fixed << setprecision(10) << x
#define rep(i, a, b) for (int i = a; i < b; i++)
#define fr(a, b) for (int i = a; i < b; ++i)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))

#define pb push_back
#define vi vector<int>
string yes = "YES", no = "NO";
template <class T>
using ordered_set = tree<T, null_type, less<T>,
                         rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t

void solve(int _t)
{

    int n;
    cin >> n;
    // int cnt=0;
    int ans = n;
    unordered_map<int, int> mp;
    vi a(n + 1);
    set<int> s;
    fr(1, n + 1)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    map<int, vector<int>> g;
    for (int i = 1; i <= n; i++)
    {
        auto it = s.lower_bound(a[i]);
        if (it == s.begin())
        {
            s.erase(it);
            continue;
        }

        for (auto it1 = --it; it1 != s.begin(); it1--)
        {
            g[a[i]].pb(*it1);
            g[*it1].pb(a[i]);
        }
        g[a[i]].pb(*(s.begin()));
        it++;
        s.erase(it);
    }

    // debug(g);
    int cnt = 0;
    int vis[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        // cout<<x.fi<<"--> ";
        if (!vis[a[i]])
        {
            vis[a[i]] = 1;
            bool ok = 0;
            for (auto y : g[a[i]])
            {
                if (!vis[y])
                {
                    vis[y] = 1;
                }
                else 
                {
                    ok=1;
                    break;
                }
                // cout << y << " ";
            }
            // cout << endl;
            if(!ok)
            cnt++;
        }
    }
    // for(int i=1;i<=n;i++)
    // {
    //     if(vis[i]==0)cnt++;
    // }
    if (cnt == 0)
        cnt = n;
    cout << cnt << endl;
}

signed main()

{
    IOS
        uint32_t test_case = 1;
    cin >> test_case;
    int __t = test_case;

    while (test_case--)
    {

        solve(__t - test_case);
    }
    return 0;
}