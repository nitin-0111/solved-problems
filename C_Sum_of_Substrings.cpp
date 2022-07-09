#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#ifndef ONLINE_JUDGE
#include <D:\Coding_and_Web\debug.cpp>
#else
#define debug(x...)
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
#define fr(a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

#define pb push_back
#define vi vector<int>
template <class T>
using ordered_set = tree<T, null_type, less<T>,
                         rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t

void solve(int _t)
{

    int n, k;

    cin >> n >> k;
    string s;
    cin >> s;
    int ok1 = s[0] == '1' ? 1 : 0;
    int ok2 = s[n - 1] == '0' ? 1 : 0;
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (l == -1 and s[i] == '0')
            l = i;
    }
    if (l != -1 and k >= l)
    {
        swap(s[0], s[l]);
        k -= l;
    }
    bool ok=1;
    for (int i = n - 2; i > 0; i--)
    {
        string t =s.substr(i-1,2);
        if(k<n-1-i)break;
        if (t == "11" and k >= n - 1 - i )
        {
            ok=0;
            swap(s[n - 1], s[i]);
            break;

        }
        if(  r==-1 and s[i]=='1')
        r==i;
        
    }
    if (ok and l != r and r != -1 and k >= n - 1 - r)
    {
         swap(s[n-1],s[r]);
    }

    int ans = 0;
    fr(0, n - 1)
    {
        ans += stoi(s.substr(i, 2));
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
    cin >> test_case;
    int __t = test_case;

    while (test_case--)
    {

        solve(__t - test_case);
    }
    return 0;
}