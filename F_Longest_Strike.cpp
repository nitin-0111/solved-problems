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

    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    int s = INT_MAX;
    vi a;
    fr(0, n)
    {
        int x;
        cin >> x;
        a.pb(x);
        s = min(s, x);
        mp[x]++;
    }
    sort(all(a));
    a.resize(unique(all(a)) - a.begin());

    // int cur = s;
    // int l = s, r;
    // debug(a);
    // debug(mp);
    int ans = 0;
    pair<int, int> res={-1,-1};
    // res.fi = cur;
    // s=cur;

    for (int i = 0; i < a.size(); i++)
    {
        int l = a[i], r = a[a.size() - 1];
        int x=-1;
        while (l <= r)
        {
            int mid = (l + r) >> 1;
            bool ok = 1;
            for (int j = l; j <= mid; j++)
            {
                if (mp.count(j) == 0 || mp[j] < k)
                {
                    ok = 0;
                    break;
                }
            }

            if(ok)
            {
                x=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;

            }
        }

        if(x!=-1)
        {
            if(ans<x-a[i]+1)
            {
                res={a[i],x};
                ans=x-a[i]+1;
            }
        }
    }
    if(res.fi==-1)
    cout<<-1<<endl;
    else
    cout<<res.fi<<" "<<res.se<<endl;
    // for (auto x : mp)
    // {
    //     if (x.fi == cur and x.se >= k)
    //     {
    //         r = cur;
    //         cur++;
    //     }
    //     else if (x.fi != cur)
    //     {
    //         if (l - r > ans)
    //         {
    //             res = {l, r};
    //             ans = r - l;
    //         }
    //         if (x.se >= k)
    //         {
    //             l = x.fi;
    //             r = l;
    //             cur = l;
    //         }
    //     }
    // }

    // cout << res.fi << " " << res.se << endl;
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