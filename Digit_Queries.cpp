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
template <class T>
using ordered_set = tree<T, null_type, less<T>,
                         rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t

void solve(int _t)
{

    int k;
    cin >> k;
    int d = 1;
    int cnt = 0;
     int x=0;
    for (; d < 20; d++)
    {
        cnt += 9 * powl(10, d - 1) * d;
        if (cnt >= k)
        {
          
            break;
        }
        // x=cnt;
        x += 9 * powl(10, d - 1) * d;
    }
    vi pow10(19,1);
    for(int i=1;i<19;i++)
    {
        pow10[i]=pow10[i-1]*10;
    }
    
    int l=pow10[d-1];
    int r=pow10[d]-1;
    int startIndx;
    int best = 0;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        int y = (mid - x) * d + x;
        if (y <= k)
        {
            l = mid + 1;
            if (mid > best)
            {
                startIndx = y;
                best = mid;
            }
        }
        else
        {
            r = mid - 1;
        }
    }

    string no = to_string(best);
    cout << no[k - startIndx] << endl;
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

    while (test_case--)
    {

        solve(__t - test_case);
    }
    return 0;
}