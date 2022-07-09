// #include <bits/stdc++.h>

// using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// #ifndef ONLINE_JUDGE
// #include <D:\Coding_and_Web\debug.cpp>

// #else // online submission

// #endif

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ppb pop_back
// #define pf push_front
// #define ppf pop_front
// #define all(v) v.begin(), v.end()
// #define uniq(v) v.erase(unique(all(v)), v.end())
// #define sz(x) (int)((x).size())
// #define ll long long
// #define eps 1e-6
// #define mod 1000000007
// #define pi (3.141592653589)
// #define ull uint64_t
// #define cmp [](const auto &l, const auto &r) { return l > r; }
// #define fi first
// #define se second
// #define prDouble(x) cout << fixed << setprecision(10) << x
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define mem1(a) memset(a, -1, sizeof(a))
// #define mem0(a) memset(a, 0, sizeof(a))
// #define rrep(i, n) for (int i = n - 1; i >= 0; i--)

// #define pb push_back
// #define vi vector<int>
// template <class T>
// using ordered_set = tree<T, null_type, less<T>,
//                          rb_tree_tag, tree_order_statistics_node_update>;

// #define int int64_t

// const int M = (int)(2 * (1e5) + 1);
// vector<int> adj[M];
// int dia = 0;
// int fun(int v, int p)
// {
   
//     vector<int> res;
//     for (auto u : adj[v])
//     {
//         if (p != u)
//         {
//             int x=fun(u, v);
//             res.pb(x);
//         }
//     }
//     sort(all(res));
//     int n = res.size() - 1;
//     if(n==-1)return 1;
//     if(n==0)dia=max(dia,1+res[0]);
//     else if(n>0)dia=max(dia,res[n]+res[n-1]+2);

//     return res[n]+1;
// }
// void solve()
// {

//     int n;
//     cin >> n;
//     rep(i, 0, n-1)
//     {
//         int x, y;
//         cin >> x >> y;
//         adj[x].pb(y);
//         adj[y].pb(x);
//     }
//     cout << fun(1, -1);
//     cout << dia << endl;
// }

// signed main()

// {
//     IOS
//         uint32_t test_case = 1;
// #ifndef ONLINE_JUDGE
//     // freopen( "input.txt"  , "r"  , stdin);
//     // freopen("output.txt","w",stdout);
// #endif

//     while (test_case--)
//     {

//         solve();
//     }
//     return 0;
// }



#include<bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

 #ifndef ONLINE_JUDGE 
#include<D:\Coding_and_Web\debug.cpp>
 
#else// online submission 

#endif 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(v) v.begin(),v.end()
#define uniq(v) v.erase(unique(all(v)),v.end()) 
#define sz(x) (int)((x).size())
 #define ll long long
 #define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t 
#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define fi first
#define se second
#define prDouble(x) cout<<fixed<<setprecision(10)<<x
#define rep(i,a,b) for(int i=a;i<b;i++)

#define rerep(a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define rrep(i,n) for(int i=n-1;i>=0;i--)

#define pb push_back
#define vi vector<int>
template <class T> using ordered_set = tree<T, null_type, less<T>, 
rb_tree_tag,tree_order_statistics_node_update>;

#define int int64_t



int M=(int)(2*(1e5)+1);
vector<int> adj[M];
int heigth[M],dia[M];


void funheight(int src,int par)
{
    int bestChild=0;
    bool leaf=1;
    for(int child: tree[src])
    {
        if(child!=par)
        {
            leaf =0;
            funheight(child,src);
            bestChild=max(bestChild,heigth[child]);

        }
    }
    if(leaf)heigth[src]=0;
    else heigth[src]=1+bestChild;

}
void fun(int src,int par)
{
    int ans=0;
    vector<int> childrenDownPaths;
    for(auto child: tree[src])
    {
        if(child!=par)
        {
            fun(child,src);
            childrenDownPaths.pb(heigth(child));
        }
    }
}
 
void solve()
{

    int n;
    cin>>n;
    rep(i,0,n-1)
    {
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);

    }
    

}



signed  main ()

{
 IOS
 uint32_t test_case=1;
#ifndef ONLINE_JUDGE
 //freopen( "input.txt"  , "r"  , stdin);
 //freopen("output.txt","w",stdout);
#endif

 while(test_case --){
 
solve();
}  
return 0;
}