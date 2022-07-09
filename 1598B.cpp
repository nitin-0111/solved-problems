#include <bits/stdc++.h>

using namespace std;
//#include<E:\Coding_and_Web\debug.cpp>

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

void solve()
{

    int n;
    cin >> n;
    int a[n][5];
    int sum[5] = {0};
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            sum[j] += a[i][j];
            if (sum[j] >= n / 2)
            {
                cnt++;
            }
        }
    }
    if (cnt < 2)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < 5; i++)
    {
        if (sum[i] < n / 2)
            continue;
        for (int j = i + 1; j < 5; j++)
        {
            if (sum[j] < n / 2)
            {
                continue;
            }
            bool flag = false;
            for (int l = 0; l < n; l++)
            {
                int k = a[l][i] | a[l][j];
                if (k == 0)
                {
                    break;
                }
                if (l == n - 1)
                {
                    cout << "Yes" << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
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