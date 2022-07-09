#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define mod (int)(1e9 + 7)

#define cmp [](const auto &l, const auto &r) { return l > r; }
#define all(v) v.begin(), v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

#define int ll
int fun(int n)
{
    if (n % 10 == n)
        return 1;

    string s = to_string(n);
    int i = 0, j = s.size() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
vector<vector<int>> dp;
vector<int> d((4 * (1e4)) + 1);
void per()
{
    //    int x;
    //     cin >> x;
    int x = (4 * (1e4));
    // int n = x;
    vector<int> c;
    for (int i = 0; i < x; i++)
    {
        if (fun(i + 1))
            c.pb(i + 1);
        d[i+1] = c.size();
    }
    // vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    int n = c.size();
    dp.assign(n + 1, vector<int>(x + 1, 0));

    dp[0][0] = 1;
    // dp[i][x]   no. of ways to make x using first i coins
    // dp[n][x]== means no. of ways to make x using n coins  that's our ans;
    // dp[i][x]  depends on dp[i-1][x] no. of making x by last i-1 coins without this coins
    //           and dp[i][x- val of  coin]
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            dp[i][j] = dp[i - 1][j];
            int left = j - c[i - 1];
            if (left >= 0)
            {
                (dp[i][j] += dp[i][left]) %= mod;
            }
        }
    }
    // cout << dp[n][x] << endl;
}

int32_t main()
{
    IOS int t;
    cin >> t;
    per();
    while (t--)
    {
        int n;
        cin >> n;
        // vector<int> v;
        // for(int i=0;i<n;i++)
        // {
        //     if(fun(i+1))
        //     v.pb(i+1);
        // }
        cout << dp[d[n]][n] << endl;
    }

    return 0;
}