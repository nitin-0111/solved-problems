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
#define prDouble(x) cout << fixed << setprecision(10) << x
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

#define pb push_back
#define vi vector<int>
template <class T>
using ordered_set = tree<T, null_type, less<T>,
                         rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t

void solve()
{

    int n, q;
    cin >> n >> q;
    vi a(n);
    ull sum = 0;
    rep(i, 0, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    map<int, int> mp;
    int each = -1;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int i, val;
            cin >> i >> val;
            if (each == -1)
            {
                sum -= a[i - 1];
                sum += val;
                a[i - 1] = val;
            }
            else
            {
                //  cout<<"yes"<<endl;
                // cout<<mp.count(i)<<endl;
                if (!mp.count(i))
                {
                    sum -= each;
                    sum += val;
                    a[i - 1] = val;
                    mp[i] = 1;
                    //  debug(5-q);
                }
                else
                {
                    sum -= a[i - 1];
                    sum += val;
                    a[i - 1] = val;
                    mp[i] = 1;
                }
            }
        }
        else
        {
            int val;
            cin >> val;
            each = val;
            sum = n * val;
            mp.clear();
        }

        cout << sum << endl;
    }
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