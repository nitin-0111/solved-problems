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

//#define int ll

int32_t main()
{
    IOS

        int n;
   
    while ( cin >> n&&n!=-1)
    {
        int a[n], sum[n];
        fori(n)
        {
            cin >> a[i];
            if (!i)
                sum[i] = a[i];
            else
                sum[i] = sum[i - 1] + a[i];
        }
        int k = sum[n - 1] % n;
        if (k)
        {
            cout << -1 << endl;
        }
        else
        {
            int l = sum[n - 1] / n;
            // cout << l << endl;
            int ans = 0;
            fori(n)
            {
                int x = sum[i];
                // int y = sum[n - 1] - x;
                int b = l * (i + 1);
                // int c = l * n - b;
                ans = max(ans, abs(b - x));
            }
            cout << ans << endl;
            // continue;
        }
    }
    return 0;
}