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

vector<vector<int>> b;
void fun(int x)
{
    int mx = (x + 2) / 3;
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                vector<int> arr;
                if (i + j + k == x)
                {
                    arr.pb(i);
                    arr.pb(j);
                    arr.pb(k);
                    b.pb(arr);
                }
            }
        }
    }
}

void solve()
{

    int n;
    cin >> n;
    map<int, int> mp;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        x %= 10;
        mp[x]++;
    }
    // debug(mp);
    // cout << mp.count(1) << endl;
    // debug(mp.count(1),mp[1]);
    // cout << "ou" << endl;
    for (int i = 0; i < b.size(); i++)
    {
        int x = b[i][0], y = b[i][1], z = b[i][2];
        map<int, int> ch;
        ch[x]++,ch[y]++,ch[z]++;
         if(mp[x]>=ch[x] and mp[y]>=ch[y] and mp[z]>=ch[z])
         {
             cout<<yes<<endl;
            //  debug(mp);
            //  debug(ch);
             ch.clear();
             mp.clear();
             return;
         }
    }

    cout << no << endl;
    mp.clear();
}

signed main()

{
    IOS
        uint32_t test_case;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif
    fun(3);
    fun(13);
    fun(23);
    cin >> test_case;
    while (test_case--)
    {

        solve();
    }
    return 0;
}