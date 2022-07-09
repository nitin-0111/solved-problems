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

bool fun(int n)
{
    int d1 = n % 10;
    int t = n % 100;
    int d3 = (n - t) / 100;
    int d2 = t / 10;
    int x = d2 - d1;

    if (x < 0)
        x += 10;

    int y = d1 + 11 * x;
    y /= 10;

    // debug(d1,d2,d3,x,y);
    if (d3 >= y)
        return true;
    else
        return false;
}

void solve()
{

    int n;
    cin >> n;
    if (n < 11)
    {
        cout << "NO" << endl;
        return;
    }
    else if (n < 110 and n % 11 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    else if (n < 1099)
    {
        if (!fun(n))
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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