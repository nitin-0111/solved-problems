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
#define prDouble(x) cout << fixed << setprecision(10) << x
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

#define pb push_back
#define vi vector<int>

#define int int64_t

bool cmp1(pair<int, int > a, pair<int, int > b)
{
    return a.se < b.se;
}

int fun(int i, vector<pair<int, int> > v)
{
    int l = 0, r = i - 1;
    int ans = 0;
    while (l <= r)
    {
        int m = (l + r) >> 1;
        if (v[m].se < v[i].fi)
        {
            // ans=m;
            // l=m+1;
            if (v[m + 1].se < v[i].fi)
            {
                l = m + 1;
            }
            else
                return m;
        }
        else
            r = m - 1;
    }
    return ans;
    // for(int j=i-1;j>=1;j--)
    // {
    //     if(a[j].se.fi<a[i].fi)
    //     {
    //         return j;
    //     }
    // }
    // return 0;
}

void solve()
{

    int n;
    cin >> n;
    vector<pair<int, int>> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i].fi >> v[i].se;
    }
    sort(all(v), cmp1);
    //  debug(v);
    vector<int> dp(n + 1, 1);
    for (int i = 1; i <= n; i++)
    {
        dp[i] = max(dp[i - 1], (1 + dp[fun(i, v)]));
    }
    // debug(dp);
    cout << dp[n] << endl;
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
