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

void solve()
{

    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    int n=s.size();
    string t(s.size(), s[0]);
    if (s == t and s[0]!='1')
    {
        cout << s.size() << endl;
        return;
    }
    if (s[n-1]=='1')
    {
        cout << 1 << endl;
        return;
    }
    else if (s[0] == '0')
    {
        cout << 1 << endl;
        return;
    }
    int k = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (k != -1 and s[i] == '1')
        {
            cout << k - i + 1 << endl;
            return;
        }
        if (s[i] == '0')
        {
            k = i;
        }
    }
    cout << k + 1 << endl;
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