#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define mod 1000000007

#define cmp [](const auto &l, const auto &r) { return l > r; }
#define all(v) v.begin(), v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

#define int ll
int m;
int fun(int a, int b = -1)
{
    int ans = 0;
    if (b == -1)
    {
        for (int i = a - 1; i <= a + 1; i++)
        {
            if (i > m || i <= 0)
            {
                continue;
            }
            ans++;
        }
        return ans;
    }
    else
    {

        for (int i = min(a, b) - 1; i <= max(a, b) + 1 && i <= m; i++)
        {
            if (abs(i - a) <= 1 && abs(i - b) <= 1 and i >= 0)
            {
                ans++;
            }
        }
        return ans;
    }
}

int32_t main()
{
    IOS int n;
    cin >> n >> m;
    vector<int> arr(n);
    fori(n) cin >> arr[i];
    vector<int> dp(n + 1, 1);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = dp[i - 1];
        if (arr[i - 1] == 0)
        {
            int ans = 0;
            if (i - 1 == 0)
            {
                ans = fun(arr[i]);
            }
            else if (i == n)
            {
                ans = fun(arr[i - 2]);
            }
            else
            {
                ans = fun(arr[i - 2], arr[i]);
            }
             if(ans!=0)
            (dp[i] *= ans) %= mod;
           
        }
    }

    cout
        << dp[n] << endl;
    return 0;
}