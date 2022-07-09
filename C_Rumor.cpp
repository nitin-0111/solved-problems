// #pragma GCC optimize("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// #include<bits/stdc++.h>

// using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
//  #ifndef ONLINE_JUDGE
//  #include<D:\Coding_and_Web\debug.cpp>
//  #else
//  #define debug(x...)
//  #endif
// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

// #define ppb pop_back
// #define pf push_front
// #define ppf pop_front
// #define all(v) v.begin(),v.end()
// #define uniq(v) v.erase(unique(all(v)),v.end())
// #define sz(x) (int)((x).size())
//  #define ll long long
//  #define eps 1e-6
// #define mod 1000000007
// #define pi (3.141592653589)
// #define ull uint64_t
// #define cmp [] (const auto &l, const auto &r) {return l > r;}
// #define fi first
// #define se second
// #define prDouble(x) cout<<fixed<<setprecision(10)<<x
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define fr(a,b) for(int i=a;i<b;i++)
// #define mem1(a) memset(a,-1,sizeof(a) )
// #define mem0(a) memset(a,0,sizeof(a) )
// #define rrep(i,n) for(int i=n-1;i>=0;i--)

// #define pb push_back
// #define vi vector<int>
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// template <class T> using ordered_set = tree<T, null_type, less<T>,
// rb_tree_tag,tree_order_statistics_node_update>;

// #define int int64_t

// // vector<int> adj[(int)(1e5)];
// unordered_map<int,vector<int> > adj;
// vi vis;

// int dfs(int src,vi v)
// {
//      vis[src]=1;
//      int mn=v[src];

//              debug(mn,src);
//      for(auto u:adj[src])
//      {
//          if(!vis[u])
//          {
//              debug(mn,src,u);
//             mn=min(mn,dfs(u,v));
//          }
//      }
//      return mn;
// }

// void solve(int _t)
// {

//     int n,m;
//     cin>>n>>m;
//     vi v(n);
//     fr(0,n)cin>>v[i];
// //   debug(v);
// vis.assign(n,0);
// int src;
//     while(m--)
//     {
//         int x,y;
//         cin>>x>>y;
//          x--,y--;
//         adj[x].pb(y);
//         adj[y].pb(x);
//     }
//  int ans=0;
//    for(int i=0;i<n;i++)
//    {
//        if(!vis[i])
//        {
//           ans+=dfs(i,v);
//        }
//    }
//    cout<<ans<<endl;

// }

// signed  main ()

// {
//  IOS
//  uint32_t test_case=1;
// #ifndef ONLINE_JUDGE
//  //freopen( "input.txt"  , "r"  , stdin);
//  //freopen("output.txt","w",stdout);
// #endif
// // cin>>test_case;
// int __t=test_case;

//  while(test_case --){

// solve(__t-test_case);
// }
// return 0;
// }

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

int find(int x, vi p)
{
    return !p[x] ? x : p[x] = find(p[x], p);
}

void solve(int _t)
{
    int n, m;
    cin >> n >> m;
    vi c(n+1);
    fr(1, n+1) cin >> c[i];
    debug(c);
    vi p(n+1, 0);
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        // x--, y--;
        x = find(x, p);
        y = find(y, p);
        debug(x, y);
        if (x == y)
            continue;
        else if (c[x] > c[y])
            p[x] = y;
        else
            p[y] = x;


            // debug(p);
    }
    // debug(p);
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (!p[i])
            ans += c[i];
    cout << ans << endl;
    return;
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