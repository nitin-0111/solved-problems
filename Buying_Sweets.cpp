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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define prDouble(x) cout << fixed << setprecision(10) << x
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
const string yes = "YES", no = "NO";
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>

#define int int64_t

bool cmp1(pair<int, int> a, pair<int, int> b)
{
    if ((a.fi - a.se) == (b.fi - b.se))
        return a.fi < b.fi;
    return (a.fi - a.se) < (b.fi - b.se);
}

void solve()
{

    int n;
    cin >> n;
    int r;
    cin >> r;
    vector<pair<int, int>> v(n);
    rep(i, 0, n) cin >> v[i].fi;
    rep(i, 0, n) cin >> v[i].se;
    sort(all(v), cmp1);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (r - v[i].fi >= 0)
        {

            int d = v[i].fi - v[i].se;
            int l = (r - v[i].fi) / d + 1;
            r -= l * d;
            ans += l;
        }

        // while (r > 0)
        // {
        //     if (r - v[i].fi >= 0)
        //     {
        //         ans++;
        //         r -= v[0].fi;
        //         r += v[0].se;
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
    }
    // cout << r << endl;

    cout << ans << endl;
}

signed main()

{
    IOS
        uint32_t test_case;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif

    cin >> test_case;
    while (test_case--)
    {

        solve();
    }
    return 0;
}
