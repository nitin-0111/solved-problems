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

void solve()
{

    int n, k;
    cin >> n >> k;
    vector<int> mp[k];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x % k].pb(x);
    }
    for(int i=0;i<k;i++)
    {
        sort(all(mp[i]));
        reverse(all(mp[i]));
    }
    int ans = 0;
    if (mp[0].size() > 1)
    {
        vi v = mp[0];
        mp[0].clear();
        if (v.size() & 1)
        {
            mp[0].pb(v[v.size() - 1]);
        }
        for (int i = 0; i < v.size() - 1; i += 2)
        {
            ans += (v[i] + v[i + 1]) / k;
        }
    }
    int i = 1, j = k - 1;
    vector<int> v;
    while (i < j)
    {
        if (mp[i].size() == 0 || mp[j].size()==0)
        {
            i++;
            j--;

            continue;
        }
        
        vi a = mp[i], b = mp[j];
        mp[i].clear(), mp[j].clear();
        while (a.size() and b.size())
        {
            ans += (a[0] + b[0]) / k;
            a.erase(a.begin());
            b.erase(b.begin());
        }
        if (a.size())
        {
            mp[i] = a;
        }
        else if (b.size())
        {
            mp[j] = b;
        }
    }
     for(int i=0;i<k;i++)
     {
         if(mp[i].size())
         {
             for(int j=0;j<mp[i].size();j++)
             {
                 v.pb(mp[i][j]);
             }
         }
     }
     sort(all(v));
     reverse(all(v));

      for(int i=0;i<v.size();i+=2)
      {
          ans+=(v[i]+v[i+1])/k;
      }
    cout<<ans<<endl;
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