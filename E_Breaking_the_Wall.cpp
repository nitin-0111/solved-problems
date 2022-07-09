#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include <D:\Coding_and_Web\debug.cpp>

#else // online submission

#endif

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(v) v.begin(), v.end()
#define uniq(v) v.erase(unique(all(v)), v.end())
#define sz(x) (int)((x).size())
#define ll long long
#define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t
#define cmp [](const auto &l, const auto &r) { return l > r; }
#define fi first
#define se second
#define prDouble(x) cout << fixed << setprecision(10) << x
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

#define pb push_back
#define vi vector<int>

#define int int64_t

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n), a(n);
    rep(i, 0, n)
    {
        cin >> v[i];
        a[i] = v[i];
    }
    sort(all(a));
    int ans = INT_MAX;
    ans = min(ans, (a[0] + 1) / 2 + (a[1] + 1) / 2);
    for (int i = 0; i < n - 1; i++)
    {
        if (i > 0)
        {
            // ans = min(ans, max(v[i - 1], v[i + 1]));
            // int x = min(v[i - 1], v[i + 1]), y = max(v[i - 1], v[i + 1]);
            // ans = min(ans, x + (y - x + 1) / 2);
            ans=min(ans,(v[i-1]+v[i+1]+1)/2)
        }
        int x = v[i];
        int y = v[i + 1];
        if (x > y)
            swap(x, y); // y always bigger;
        if ((y + 1) / 2 > x)
        {
            ans = min(ans, (y + 1) / 2);
            continue;
        }
        ans = min(ans, (v[i] + v[i + 1] + 2) / 3);
    }
    cout << ans << endl;
}

signed main()

{
    IOS
        uint32_t test_case = 1;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif

    while (test_case--)
    {

        solve();
    }
    return 0;
}