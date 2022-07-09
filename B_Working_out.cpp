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
int n, m;
int a[1000][1000];

int dp1[1000][1000], dp2[1000][1000], dp3[1000][1000], dp4[1000][1000];

void dp1_fun()
{

    // cout<<1<<endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            dp1[i][j] = max(dp1[i][j - 1], dp1[i - 1][j]) + a[i][j];
        }
    }
}

void dp2_fun()
{

    int ro = n, col = m;
    // cout<<1<<endl;

    for (int i = ro; i >= 1; i--)
    {
        for (int j = col; j >= 1; j--)
        {
            dp2[i][j] = max(dp2[i + 1][j], dp2[i][j + 1]) + a[i][j];
        }
    }
}
// girls start
void dp3_fun()
{

    int ro = n, col = m;

    for (int i = ro; i >= 1; i--)
    {
        for (int j = 1; j <= col; j++)
        {
            dp3[i][j] = max(dp3[i + 1][j], dp3[i][j - 1]) + a[i][j];
        }
    }
}
void dp4_fun()
{

    int ro = n, col = m;

    for (int i = 1; i <= ro; i++)
    {
        for (int j = col; j >= 1; j--)
        {
            dp4[i][j] = max(dp4[i - 1][j], dp4[i][j + 1]) + a[i][j];
            // cout<<dp4[i][j]<<" ";
        }
        cout<<endl;
    }
    // cout<<1<<endl;
}

int solve()
{
    int ro = n, col = m;
   int i,j;
    int ans = INT_MIN;
    
    for (i = 2; i < ro; i++)
    {
        // cout << 1 << endl;
        for ( j = 2; j < col; j++)
        {

            cout << 1 << endl;
            int a = dp1[i - 1][j] + dp2[i + 1][j] + dp3[i][j - 1] + dp4[i][j + 1];
            int b = dp1[i][j - 1] + dp2[i][j + 1] + dp3[i - 1][j] + dp4[i + 1][j];
            cout<<a<<endl;
            ans = max(ans, max(a, b));
        }
    }
    cout<<dp4[1][1]<<endl;
    cout<<j<<endl;
    return ans;
}

int32_t main()
{
    IOS
        memset(dp1, 0, sizeof(dp1));
    memset(dp2, 0, sizeof(dp2));
    memset(dp3, 0, sizeof(dp3));
    memset(dp4, 0, sizeof(dp4));
    memset(a, 0, sizeof(a));

    cin >>
        n,
        m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int t;
            cin >> t;
            a[i][j] = t;
        }
    }

    dp1_fun();
    dp2_fun();
    dp4_fun();
    dp3_fun();
    cout << solve() << endl;
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ll long long
// #define eps 1e-6

// #define mod 1000000007

// #define fi first
// #define se second
// #define pb push_back
// #define vi vector<int>
// int n, m;
// int a[1000][1000];

// int dp1[1000][1000], dp2[1000][1000], dp3[1000][1000], dp4[1000][1000];

// void dp1_fun()
// {
//     memset(dp1, 0, sizeof(dp1));
//     // cout<<1<<endl;
//     dp1[0][0] = a[0][0];
//     for (int i = 1; i < m; i++)
//     {
//         dp1[0][i] = dp1[0][i - 1] + a[0][i];
//     }
//     for (int i = 1; i < n; i++)
//     {
//         dp1[i][0] = dp1[i - 1][0] + a[i][0];
//     }
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j < m; j++)
//         {
//             dp1[i][j] = max(dp1[i][j - 1], dp1[i - 1][j]) + a[i][j];
//         }
//     }
// }

// void dp2_fun()
// {
//     memset(dp2, 0, sizeof(dp2));
//     int ro = n - 1, col = m - 1;
//     // cout<<1<<endl;

//     memset(dp2, 0, sizeof(dp1));
//     dp2[n - 1][m - 1] = a[n - 1][m - 1];
//     for (int i = col - 1; i >= 0; i--)
//     {
//         dp2[ro][i] = dp2[ro][i + 1] + a[ro][i];
//     }
//     for (int i = ro - 1; i >= 0; i--)
//     {
//         dp2[i][col] = dp2[i + 1][col] + a[i][col];
//     }
//     for (int i = ro - 1; i >= 0; i--)
//     {
//         for (int j = col - 1; j >= 0; j--)
//         {
//             dp2[i][j] = max(dp2[i + 1][j], dp2[i][j + 1]) + a[i][j];
//         }
//     }
// }

// void dp3_fun()
// {
//     memset(dp3, 0, sizeof(dp3));
//     int ro = n - 1, col = m - 1;
//     dp3[ro][0] = a[ro][0];
//     for (int i = ro - 1; i >= 0; i--)
//     {
//         dp3[i][0] = dp3[i + 1][0] + a[i][0];
//     }
//     for (int i = col - 1; i >= 0; i--)
//     {
//         dp3[0][i] = dp3[0][i + 1] + a[0][i];
//     }
//     for (int i = ro - 1; i >= 0; i--)
//     {
//         for (int j = 1; j < col; j++)
//         {
//             dp3[i][j] = max(dp3[i + 1][j], dp3[i][j - 1]) + a[i][j];
//         }
//     }
// }
// void dp4_fun()
// {
//     memset(dp4, 0, sizeof(dp4));
//     int ro = n - 1, col = m - 1;
//     dp4[0][col] = a[0][col];
//     for (int i = col - 1; i >= 0; i--)
//     {
//         dp4[0][i] = dp4[0][i + 1] + a[0][i];
//     }
//     for (int i = 1; i < ro; i++)
//     {
//         dp4[i][0] = dp4[i - 1][0] + a[i][0];
//     }
//     for (int i = 1; i < ro; i++)
//     {
//         for (int j = col - 1; j >= 0; j--)
//         {
//             dp4[i][j] = max(dp4[i - 1][j], dp4[i][j + 1]) + a[i][j];
//         }
//     }
//     // cout<<1<<endl;
// }

// int solve()
// {
//     int ro = n - 1, col = m - 1;
//     int ans = INT_MIN;
//     for (int i = 1; i < ro; i++)
//     {
//         for (int j = 1; j < col; j++)
//         {
//             int a = dp1[i - 1][j] + dp2[i + 1][j] + dp3[i][j - 1] + dp4[i][j + 1];
//             int b = dp1[i][j - 1] + dp2[i][j + 1] + dp3[i - 1][j] + dp4[i + 1][j];
//             ans = max(ans, max(a, b));
//         }
//     }
//     if (ans != INT_MIN)
//     {

//         return ans;
//     }
//     return 0;
// }

// int32_t main()
// {
//     IOS
//             cin >>
//         n,
//         m;
//     dp1_fun();
//     dp2_fun();
//     dp4_fun();
//     dp3_fun();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             int t;
//             cin >> t;
//             a[i][j] = t;
//         }
//     }
//     cout << solve() << endl;
//     return 0;
// }