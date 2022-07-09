#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define MOD 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int>

vector<int> c;
int dp_fun(set<int> a, set<int> b, map<int, int> &dp, int k)
{
    if (k >= c.size())
    {
        return 0;
    }
    if (dp[k] != -1)
    {
        return dp[k];
    }
    int ans = 0;
    if (k == 0)
    {
        int x = *(a.begin()), y = *(b.begin());
        if (x >= y)
        {
            auto it1 = a.find(c[1]);
            for (auto it = a.begin(); it != it1; it++)
            {
                ans += *it;
            }
        }
        else
        {
            auto it1 = b.find(c[1]);
            for (auto it = b.begin(); it != it1; it++)
            {
                ans += *it;
            }
        }
    }
    else
    {

        auto its1 = a.find(c[k]), ite1 = a.find(c[k + 1]), its2 = b.find(c[k]), ite2 = b.find(c[k + 1]);
        int x = 0, y = 0;
        for (auto it = its1; it != ite1; it++)
        {
            x += *it;
        }

        for (its2; its2 != ite2; its2++)
        {
            y += *its2;
        }
        ans = max(x, y);
    }
    dp[k] = ans + dp_fun(a, b, dp, k + 1);

    return dp[k];
}

int dp_helper(set<int> a, set<int> b)
{
    int n = a.size(), m = b.size();
    map<int, int> dp;
    c.pb(INT_MIN);
    sort(c.begin(), c.end());

    for (int i = 0; i < c.size(); i++)
    {
        dp[i] = -1;
    }
    //    dp[INT_MIN]=-1;

    return dp_fun(a, b, dp, 0);
}

int32_t main()
{
    IOS

        int n;
    cin >> n;
    if (n == 0)
    {
        exit(0);
    }
    set<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.insert(temp);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        b.insert(temp);
        auto it = a.find(temp);
        if (it != a.end())
        {
            c.pb(*it);
        }
    }

    cout << dp_helper(a, b) << endl;

    return 0;
}