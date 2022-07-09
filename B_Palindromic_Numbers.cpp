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

    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    if (s[0] == '9')
    {
        string t(n + 1, '1');
        int borrow = 0;
        // debug(t);
        for (int i = n - 1, j = i + 1; i >= 0; i--)
        {
            int d1 = t[j] - '0', d2 = s[i] - '0';
            d1 -= borrow;
            borrow = 0;
            if (d1 < d2)
            {
                borrow = 1;
                d1 += 10;

                ans = to_string(d1 - d2) + ans;
            }
            else
            {
                ans = to_string(d1 - d2) + ans;
            }
            // debug(d1, d2, ans);
        }
        // cout << ans << endl;
    }
    else
    {
        // int c = s[0]+1;
        // s[0]
        int borrow = 0;
        // debug(t);
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]>s[0]+1)
            {
                x++;
                break;
            }
        }
        string t(n, s[0] + 1+x);
        for (int i = n - 1, j = i; i >= 0; i--)
        {
            int d1 = t[j] - '0', d2 = s[i] - '0';
            d1 -= borrow;
            borrow = 0;
            if (d1 < d2)
            {
                borrow = 1;
                d1 += 10;

                ans = to_string(d1 - d2) + ans;
            }
            else
            {
                ans = to_string(d1 - d2) + ans;
            }
            // debug(d1, d2, ans);
        }
    }
    cout<<ans<<endl;
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