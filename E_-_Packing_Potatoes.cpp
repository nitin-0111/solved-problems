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

    int n, q, x;
    cin >> n >> q >> x;
    // vector<vector<int>> a;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bool ok = 0;
    int i = 0;
    map<int, int> mp;
    int cur = 0;
    int sum = 0;
    for (int i = 0;; i++)
    {

        i %= n;
        sum += a[i];
        debug(i, sum, a[i]);
        if (sum >= x)
        {
            if (mp.count(cur))
                break;
            mp[cur] = (i >= cur) ? (i - cur + 1) : (i + n - cur + 1);
            debug(cur, i);
            cur = i + 1;
            sum = 0;
        }
    }
    debug(mp);
    cout<<mp.size()<<endl;
    cout<<(1000%9)<<endl;
    while(q--)
    {
        int k;
        cin>>k;

    }
}

signed main()

{
    IOS
        uint32_t test_case = 1;
    // cin>>test_case;
    int __t = test_case;

    while (test_case--)
    {

        solve(__t - test_case);
    }
    return 0;
}