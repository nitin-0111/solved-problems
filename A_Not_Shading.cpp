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

vector<vector<int> > dp;

vector<vector<char> >  a;

int dx[] = {-1, 1, 1, -1};
int dy[] = {1, 1, -1, -1};
int n, m, x, y;

int fun(int i, int j)
{
    // if (i < 1 || j < 1 || i > n || j > m)
    // {
    //     return INT_MAX;
    // }
    if (a[i][j] == '1')
    {
        return 0;
    }

    for (int k = 1; k <= m; k++)
    {
        if (a[i][k] == '1')
        {
            return 1;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        if (a[k][j] =='1')
        {
            return 1;
        }
    }
    for (int k = 0; k < 4; k++)
    {
        int r = i + dx[k], c = j + dy[k];
        if (r < 1 || r > n || c < 1 || c > m)
        {
            continue;
        }

        else if (a[r][c] == '1')
        {
            return 2;
        }
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int ans = INT_MAX;
    for (int k = 0; k < 4; k++)
    {
        int r = i + dx[k], c = j + dy[k];
        if (r < 1 || r > n || c < 1 || c > m)
        {
            continue;
        }

        int tmp = fun(i + dx[k], j + dy[k]) + 2;
        ans = min(ans, tmp);
    }
    return dp[i][j] = ans;
}

int32_t main()
{
    IOS int t;
    cin >> t;
    while (t--)
    {
       
        cin >> n >> m >> x >> y;
        dp.assign(n+1,vector<int>(m+1,-1));
        a.assign(n+1,vector<char>(m+1,'0'));
        bool check = true;
        // memset(a, 0, sizeof(a));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                char c;
                cin >> c;

                if (c == 'B')
                {
                    a[i][j] = '1';
                    check = false;
                }
                else
                    a[i][j] = '0';
            }
        }

        if (check)
        {
            cout << -1 << endl;
            continue;
        }
        // memset(dp, -1, sizeof(dp));
        cout << fun(x, y) << endl;
        dp.clear();
        a.clear();
    }

    return 0;
}