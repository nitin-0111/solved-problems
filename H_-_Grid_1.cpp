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
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

#define pb push_back
#define vi vector<int>

// #define int int64_t

void solve()
{

    int n, m;
    cin >> n >> m;
    char a[n][m];
    int dp[n][m];
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            cin >> a[i][j];
        }
    }
    mem0(dp);
    dp[0][0]=1;
    rep(i, 1, m)
    {
        if (a[0][i] == '#')
            break;
        dp[0][i] = dp[0][i - 1];
    }
    rep(i, 1, n)
    {
        if (a[i][0] == '#')
            break;
        dp[i][0] = dp[i-1][0];
    }
    rep(i, 1, n)
    {
        rep(j, 1, m)
        {
            if (a[i][j] == '#')
                continue;

            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1])%mod;
        }
    }
    cout << dp[n - 1][m - 1] << endl;
}

signed main()

{
    IOS
        uint32_t test_case = 1;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif

    while (test_case--)
    {

        solve();
    }
    return 0;
}