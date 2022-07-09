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

int dp[100001][1001];
int fun(int *prics, int *page, int money, int n)
{
    if (money == 0 || n == 0)
    {
   
        return 0;
    }

    if (dp[money][n] != 0)
    {
        return dp[money][n];
    }
    if (money < prics[0])
    {

        return dp[money][n] = fun(prics + 1, page + 1, money, n - 1);
    }
    int a=INT_MIN, b=INT_MIN;
    a = fun(prics + 1, page + 1, money, n - 1);
    if(prics[0]<=money)
    b = fun(prics + 1, page + 1, money - prics[0], n - 1) + page[0];
    return dp[money][n] = max(a, b);
}


int32_t main()
{
    IOS int n, money;
    cin >> n >> money;
    memset(dp, 0, sizeof(dp));
    int prices[1001], page[1001];
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> page[i];
    }
    cout << fun(prices, page, money, n) << endl;
    // cout << helper_mem(prices, page, money, n) << endl;

    return 0;
}