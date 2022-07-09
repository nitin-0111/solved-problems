// #include <bits/stdc++.h>
// using namespace std;
// #define mod (int)1e9 + 7
// // m is size of coins array (number of different coins)
// int minCoins(int coins[], int m, int V)
// {
//     // table[i] will be storing the minimum number of coins
//     // required for i value. So table[V] will have result
//     int table[V + 1];

//     // Base case (If given value V is 0)
//     table[0] = 1;

//     // Initialize all table values as Infinite
//     for (int i = 1; i <= V; i++)
//         table[i] = 0;

//     // Compute minimum coins required for all
//     // values from 1 to V
//     set<pair<int, int>> s;
//     for (int i = 1; i <= V; i++)
//     {
//         // Go through all coins smaller than i

//         for (int j = 0; j < m; j++)
//             if (coins[j] <= i)
//             {
//                 if ((s.find({coins[j], i - coins[j]}) == s.end() ) and (s.find({i - coins[j], coins[j]}) == s.end()))
//                 {

//                     table[i] += table[i - coins[j]];
//                     table[i] %= mod;
//                     s.insert({coins[j], i - coins[j]});
//                     s.insert({i - coins[j], coins[j]});
//                 }
//                 // pre=coins[j];
//             }
//     }

//     return table[V];
// }

// // Driver program to test above function
// int main()
// {
//     int n, x;
//     cin >> n >> x;
//     int *a = new int[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << minCoins(a, n, x);
// }
#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define mod (int)(1e9+7)

#define cmp [](const auto &l, const auto &r) { return l > r; }
#define all(v) v.begin(), v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

//#define int ll

int32_t main()
{
    IOS

        int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int> c(n);
    fori(n) cin >> c[i];


    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
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
    cout << dp[n][x] << endl;

    return 0;
}