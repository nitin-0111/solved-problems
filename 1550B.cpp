#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include <D:\Coding_and_Web\debug.cpp>
#else
// online submission
#endif

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define eps 1e-6
#define mod 1000000007
#define ull uint64_t

#define cmp [](const auto &l, const auto &r) { return l > r; }
#define all(v) v.begin(), v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

//#define int int64_t
vector<int> dp;
int fun(string s, int i)
{
    if (s.size() == 0)
        return 0;
    int j;
    if (dp[i] != -1)
    {
        return dp[i];
    }
    for (j = i; j < s.size() - 1; j++)
    {
        if (s[j] != s[j + 1])
        {
            break;
        }
    }
    int a = INT_MAX, b = INT_MAX;
    if (j + 1 < s.size())
    {
        a = fun(s, j + 1);
    }
    s = s.substr(0, i) + s.substr(j + 1);
    b = 1 + fun(s, 0);
    return dp[i] = min(a, b);
}

void solve()
{

    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    dp.assign(s.size(), -1);
    int ans = (s.size() * (a + b));

    int m = fun(s, 0);
    cout<<m<<endl;
    int k = ((a * n) + m * b);
    ans = max(ans, k);
    cout << ans << endl;
}

int32_t main()
{
    IOS
        uint32_t tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}