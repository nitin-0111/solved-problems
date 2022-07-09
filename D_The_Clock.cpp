#include <bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

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
template <class T>
using ordered_set = tree<T, null_type, less<T>,
                         rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t

bool ispal(string s)
{
    string t = s;
    reverse(all(t));
    return t == s;
}

void solve()
{

    string s;
    cin >> s;
    int x;
    cin >> x;
    int y = x % 60;
    x /= 60;
    int cnt = 0;
    map<string, int> mp;
    mp[s] = 1;
    while (true)
    {
        int a = (s[0] - '0') * 10 + (s[1] - '0');
        int b = (s[3] - '0') * 10 + (s[4] - '0');

        b += y;
        if (b > 59)
        {
            a++;
            b = b % 60;
        }
        a += x;
        if (a > 23)
        {
            a %= 24;
        }

        string t = to_string(b);
        if (b < 10)
            t = '0' + t;
        t = to_string(a) + ":" + t;
        if (a < 10)
            t = '0' + t;

        if (ispal(t))
            cnt++;
        if (mp[t])
            break;
        s = t;
        mp[t] = 1;

        // debug(t);
    }
    cout << cnt << endl;
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