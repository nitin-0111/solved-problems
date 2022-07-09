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
bool comp(auto a, auto b)
{
    return a.se > b.se;
}
void solve()
{

    int n;
    cin >> n;
    unordered_map<int, int> mp;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<pair<int, int>> v;
    for (auto x : mp)
        v.pb(x);

    sort(all(v), comp);
    if (2 * v[0].se > n + 1)
    {
        cout << no << endl;
        return;
    }

    cout << yes << endl;
    vector<int> a;
    for (int i = 0; i < v.size();)
    {
        int t = v[i].se;
        for (int j = i + 1; j < v.size(); j++)
        {
            int k = v[j].se;
            while (k-- and t > 0)
            {
                cout << v[i].fi << " " << v[j].fi << endl;
                t--;
                v[i].se--;
                v[j].se--;
            }
            i = j;
            if (t == 0)
            {
                i = j;
                a.pb(v[j].fi);
                break;
            }
        }
    }
    for(int i=1;i<v.size();i++)
    {
        if(v[i].se!=0)
        {
            cout<<v[i]
        }
    }
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