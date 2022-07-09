#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define mod 1000000007

#define cmp [](const auto &l, const auto &r) { return l < r; }
#define all(v) v.begin(), v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

#define int ll

vector<int> arr;
vector<vector<int>> dp;
int fun(int i, int j)
{

    if (i > j)
    {
        return 0;
    }
    if (i == j)
    {
        return arr[j];
    }
    if (dp[i][j] != -1)
        return dp[i][j];

    int a = arr[i] + min(fun(i + 2, j), fun(i + 1, j - 1));
    int b = arr[j] + min(fun(i + 1, j - 1), fun(i, j - 2));
    return dp[i][j] = max(a, b);
}

int32_t main()
{
    IOS int n;
    cin >> n;
    // arr.resize(n);
    dp.assign(n, vector<int>(n, -1));
    fori(n)
    {
        int t;
        cin >> t;
        arr.pb(t);
    }
    cout << fun(0, n - 1) << endl;
    dp.clear();
    arr.clear();

    return 0;
}