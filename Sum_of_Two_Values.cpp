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

    int n, x;
    cin >> n;
    cin >> x;
    map<int, int> mp;
    vector<int> v;
    rep(i, 0, n)
    {
        int a;
        cin >> a;
        v.pb(a);
        mp[a] = i + 1;
    }
    //   sort(all(v));
    //   reverse(all(v));
    if (n == 1)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (x - v[i] >= 0 and mp.count(x - v[i]) > 0 and i + 1 != mp[x - v[i]])
        {
            cout << i + 1 << " " << mp[x - v[i]] << endl;
            return;
        }
    }
    cout << "IMPOSSIBLE" << endl;
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