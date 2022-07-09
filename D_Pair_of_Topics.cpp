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
#define fr(a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

#define pb push_back
#define vi vector<int>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
template <class T>
using ordered_set = tree<T, null_type, less<T>,
                         rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t

bool comp(pair<int, int> a, pair<int, int> b)
{
    // return (a.fi  b.fi) > (a.se + b.se);
    return (a.fi-a.se)>(b.fi-b.se);
}

void solve(int _t)
{

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    fr(0, n)
    {
        cin >> v[i].fi;
    }
    fr(0, n)
            cin >>
        v[i].se;

    // for (auto x : v)
    // {
    //     cout << x.fi << " " << x.se << endl;
    // }
    // cout << endl;
    sort(all(v), comp);

   int res=0;
    for(int i=0;i<n-1;i++)
    {
        int l=i+1,r=n-1;
        int ans=i;
        while(l<=r)
        {
            int mid=(l+r)>>1;
            bool ok= v[i].fi+v[mid].fi > v[i].se+v[mid].se;
            debug(i,mid,ok);
            if(ok)
            {
                ans=mid;
                l=mid+1;
            }
            else
            r=mid-1;
        }
       res+=ans-i;
       debug(res);
    }
    cout<<res<<endl;
    // for (auto x : v)
    // {
    //     cout << x.fi << " " << x.se << endl;
    // }
}

signed main()

{
    IOS
        uint32_t test_case = 1;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif
    int __t = test_case;

    while (test_case--)
    {

        solve(__t - test_case);
    }
    return 0;
}