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

    int m, s;
    cin >> m >> s;
    int a[m + 1] = {0}, b[m + 1] = {0};
    a[1] = 1;
    b[m] = 0;
    int x = s - 1;
    int y = s;
    if (s == 0 and m > 1)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }
    else if(s==0 and m==1)
    {
        cout<<0<<" "<<0<<endl;
        return;
    }

    for (int i = m; i > 1 and x > 0; i--)
    {
        if (x >= 9)
        {
            a[i] = 9;
            x -= 9;
        }
        else
        {
            a[i] = x;
            x = 0;
            break;
        }
    }
    bool ok1 = 1;
    if (x > 0)
    {
        if (a[1] + x <= 9)
        {

            a[1] += x;
        }
        else
            ok1 = 0;
    }
    for (int i = 1; i < m; i++)
    {
        if (y >= 9)
        {
            b[i] = 9;
            y -= 9;
        }
        else
        {
            b[i] = y;
            y = 0;
            break;
        }
    }
    bool ok2 = 1;
    if (y > 0)
    {
        if (b[m] + y <= 9)
        {
            b[m] += y;
        }
        else
            ok2 = 0;
    }
    if (!ok1)
    {
        cout << -1 << " ";
    }
    else
    {
        for (int i = 1; i <= m; i++)
        {
            int u = a[i];
            cout << u;
        }
    }
    if (!ok2)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << " ";
        for (int i = 1; i <= m; i++)
        {
            int u = b[i];
            cout << u;
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