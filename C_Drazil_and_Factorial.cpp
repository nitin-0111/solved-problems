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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
template <class T>
using ordered_set = tree<T, null_type, less<T>,
                         rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t

vi fact(10, 0);
void fun()
{
    for (int i = 0; i <= 9; i++)
    {
        if (i == 0)
        {
            fact[i] = 1;
            continue;
        }
        fact[i] = i * fact[i - 1];
    }
}

void solve(int _t)
{

    int n;
    fun();
    cin >> n;
    string s;
    cin >> s;
    int a = 1;

    debug(fact);
    map<int, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0' and s[i] != '1')
        {
            a *= fact[s[i] - '0'];
            debug(a, s[i]);
            int cnt = 0;
            //    int b=a;
            while (a % 2 == 0)
            {
                a = a / 2;
                //    cnt++;
                mp[2]++;
            }

            //    if(j==2)
            //    {
            //        mp[j]=cnt;
            //        continue;
            //    }
            //    else{

            //        int mn=min(cnt,mp[j-1]);
            //        mp[j-1]-=mn;
            //        mp[j]+=mn;
            //        b/=pow(j,mn);
            //        a=b;
            //    }
            //    if(a==1)
            //    break;
        }
    }

    debug(mp, a);

    // debug("ans   ", mp, a);
    // string ans;
    // int res = 0;
    // for (int i = 9; i >= 0; i--)
    // {
    //     if (mp.count(i))
    //     {
    //         string t(mp[i], i + '0');
    //         ans += t;
    //     }
    // }
    // cout << ans << endl;
    // }
}

signed main()

{
    IOS
        uint32_t test_case = 1;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif
    int __t = test_case;

    while (test_case--)
    {

        solve(__t - test_case);
    }
    return 0;
}