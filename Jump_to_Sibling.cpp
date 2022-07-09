#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include <D:\Coding_and_Web\debug.cpp>

#else // online submission

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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define prDouble(x) cout << fixed << setprecision(10) << x
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
const string yes = "YES", no = "NO";
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>

#define int int64_t

vector<int> dp;
vector<int> v;
int n;
int fun(int i, int ok)
{
    // debug(v, dp);
    if (i >= n)
    {
        return 0;
    }
    if (dp[i] != -1)
        return dp[i];

    int a = 1e9, b = 1e9;
    int l = -1, r = -1;
    for (int k = i + 1; k <= n; k++)
    {
        if ((v[i] & 1) == (v[k] & 1))
        {
            l = k;
            break;
        }
    }
    for (int k = i + 1; k <= n; k++)
    {
        if ((v[i] & 1) != (v[k] & 1))
        {
            r = k;
            break;
        }
    }
    // debug(l, r);
    if (l != -1)
        a = 1 + fun(l, ok);

    if (r != -1 and ok)
    {
        b = 1 + fun(r, !ok);
    }
    return dp[i] = min(a, b);
}

void solve()
{

    // int n;
    cin >> n;
    dp.assign(n + 1, -1);
    // vector<int> v(n+1);
    v.assign(n + 1, 0);
    rep(i, 1, n + 1) cin >> v[i];
    cout << fun(1, 1) << endl;
}

signed main()

{
    IOS
        uint32_t test_case;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif

    cin >> test_case;
    while (test_case--)
    {

        solve();
    }
    return 0;
}