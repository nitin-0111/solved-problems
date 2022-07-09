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

void solve(int _t)
{

    int n, m;
    cin >> n >> m;

    int a[n][m];
    vi v(n, 0);
    vi h(m, 0);
    fr(0, n)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];

            if (a[i][j])
                h[j]++;

            if (a[i][j])
                cnt++;
        }
        v[i] += cnt;
    }

    int ans[n][m];
    mem0(ans);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j])
            {

                if (h[j] == n)
                {

                    bool ok = 0;
                    for (int k = 0; k < n; k++)
                    {
                        if (v[k] == m)
                        {
                            ok = 1;
                            ans[k][j] = 1;
                            // break;
                        }
                    }
                    if (!ok)
                    {
                        cout << "NO" << endl;
                        return;
                    }
                }
                else if (v[i] == m)
                {
                    bool ok = 0;
                    for (int k = 0; k < m; k++)
                    {
                        if (h[k] == n)
                        {
                            ok = 1;
                            ans[i][k] = 1;
                            // break;
                        }
                    }
                    if (!ok)
                    {
                        cout << "NO" << endl;
                        return;
                    }
                }
                else
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }

    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
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