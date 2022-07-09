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
vector<int> p;
void fun()
{

    for (int i = 0; pow(3, i) <= (1e10); i++)
    {
        p.pb(pow(3, i));
    }
}

void solve(int _t)
{
    int x;
    cin >> x;
    map<int, int> mp;
    int n = p.size();
    int mx = -1;
    bool ok = 1;
    int y=x;
    // while (x)
    // {
    for (int i = n - 1; i >= 0; i--)
    {
        if (p[i] <= x)
        {
            mp[i]++;
            x -= p[i];
            mx = max(mx, i);
            if (mp[i] > 1)
                ok = 0;

            // break;
            i++;
        }
    }
    // }
    if(ok)
    {
        cout<<y<<endl;
        return;
    }

    int ans = p[mx + 1];
    debug(mp);
    debug(ans);
    int mn=-1;
    int cur=0;
    // vi psum;
    for(auto x:mp)
    {
        if(x.se>1)
        {
            if(mn==-1)
            mn=x.fi;
            cur+=(x.se)*(p[x.fi]);
        //    psum.pb(cur);

        }
    }
    // cur=0;
    // int k=0;
    debug(cur);
    // y-=cur;
    for(int i=mn+1;i<=mx+1;i++)
    {
        if(!mp.count(i))
        {
               cur-=p[i];
            debug(i,cur,p[i]);
               if(cur<=0)
               {
                   y-=cur;
                   break;
               }
               
        }
    }
    debug(mp);
    // cout<<ans<<endl;
    cout<<min(ans,y)<<endl;
}

signed main()

{
    IOS
        uint32_t test_case = 1;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif
    cin >> test_case;
    int __t = test_case;
    fun();
    while (test_case--)
    {

        solve(__t - test_case);
    }
    return 0;
}