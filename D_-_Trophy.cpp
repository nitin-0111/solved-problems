#include <bits/stdc++.h>

using namespace std;
#ifndef ONLINE_JUDGE
#include <D:\Coding_and_Web\debug.cpp>
#else
#define debug(x...)
#endif
#define all(v) v.begin(), v.end()
#define ll long long
#define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define fi first
#define se second
#define prDouble(x) cout << fixed << setprecision(10) << x

#define pb push_back
#define vi vector<int>

#define int int64_t

signed main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> t(n);
    vi a(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i].fi >> t[i].se;
        a[i + 1] += a[i] + t[i].fi + t[i].se;
    }
    int64_t ans = 1e18;
    
        for (int i = 1; i <= n; i++)
        {
                 if(x<i)break;
            int sum = a[i];

            sum += (x - i) * t[i - 1].se;
            ans = min(ans, sum);
           
        }
    cout << ans << endl;

    return 0;
}