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

// bool is_possible(int k,vector<int> v)
// {
//     auto it=lower_bound(all(v),k);
//     if(*it==k)
//     return false;
//     for(auto )

// }

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<int> sum(n + 1);
    rep(i, 1, n + 1)
    {
        cin >> v[i];
    }
    sort(all(v));
    rep(i, 0, n)
    {
        sum[i + 1] = sum[i] + v[i];
    }
    int k = v[0];
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (dp[i - 1] < v[i])
        {
            cout << dp[i - 1] << endl;
            return;
        }
        dp[i] = dp[i - 1] + v[i];
    }
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