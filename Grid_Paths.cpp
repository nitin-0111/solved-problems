#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define eps 1e-6

#define mod 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int>

int n;
int dp[1001][1001] = {0};
int grid()
{
    n--;
    if (dp[0][0] == -1 || dp[n][n] == -1)
    {
        return 0;
    }
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {

        if (dp[0][i] == -1)
        {
            break;
        }
            dp[0][i] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (dp[i][0] == -1)
        {
            break;
        }
            dp[i][0] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(dp[i][j]==-1)continue;
            if (dp[i - 1][j] != -1)
            {
                dp[i][j] = dp[i - 1][j];
            }
            if (dp[i][j - 1] != -1)
            {
                dp[i][j] += dp[i][j - 1];
            }
            dp[i][j] %= mod;
        }
    }
    return dp[n][n];
}

int32_t main()
{
    IOS

            cin >>
        n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char a;
            cin >> a;
            if (a == '*')
            {
                dp[i][j] = -1;
            }
        }
    }

    cout << grid() << endl;

    return 0;
}