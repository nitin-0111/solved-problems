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
    int q;
    cin >> n >> q;
    int presum[n][n] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char cur;
            cin >> cur;
            if (i == 0 and j == 0)
            {
                if (cur == '*')
                {
                    presum[i][j] = 1;
                }
                continue;
            }
            if (i == 0)
            {
                presum[i][j] = presum[i][j - 1];
                if (cur == '*')
                    presum[i][j]++;
                continue;
            }

            if (j == 0)
            {
                presum[i][j] = presum[i - 1][j];
                if (cur == '*')
                    presum[i][j]++;
                continue;
            }

            presum[i][j] = presum[i - 1][j] + presum[i][j - 1] - presum[i - 1][j - 1];
            if (cur == '*')
                presum[i][j]++;
        }
    }
    // fr(0, n)
    // {
    //     rep(j, 0, n)
    //             cout
    //         << presum[i][j] << " ";
    //     cout << endl;
    // }

    while (q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x2--, y2--;
        x1 -= 2, y1 -= 2;
        int ans = presum[x2][y2];
        if (x1 >= 0)
        {
            ans -= presum[x1][y2];
        }
        if (y1 >= 0)
        {
            ans -= presum[x2][y1];
        }
        if (x1 >= 0 and y1 >= 0)
            ans += presum[x1][y1];
        cout << ans << endl;
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
    int __t = test_case;

    while (test_case--)
    {

        solve(__t - test_case);
    }
    return 0;
}