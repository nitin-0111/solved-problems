// #include<bits/stdc++.h>

// using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

//  #ifndef ONLINE_JUDGE 
// #include<D:\Coding_and_Web\debug.cpp>
 
// #else// online submission 

// #endif 


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
// #define mem1(a) memset(a,-1,sizeof(a) )
// #define mem0(a) memset(a,0,sizeof(a) ) 
// #define rrep(i,n) for(int i=n-1;i>=0;i--)

// #define pb push_back
// #define vi vector<int>
// template <class T> using ordered_set = tree<T, null_type, less<T>, 
// rb_tree_tag,tree_order_statistics_node_update>;

// #define int int64_t

// vector<vector<int> > edge;
//  vi vis;
// unordered_map<int,int> mp;
// int ans=0;
// void dfs(int u)
// {
//     vis[u]=1;
//     for(auto v: edge[u])
//     {
//         if(!vis[v])
//         {
//             if(mp[u]==0 and mp[v]==0)
//             {
//                 mp[u]=1,mp[v]=1;
//                 ans++;

//             }
//             dfs(v);
//         }
//     }
// }

 
// void solve()
// {

//     int n;
//     cin>>n;
//     edge.assign(n+1,vector<int>(n));
//     vis.assign(n+1,0);
//     for(int i=0;i<n-1;i++)
//     {
//         int x,y;
//         cin>>x>>y;
//        edge[x].pb(y);
//        edge[y].pb(x);
//        mp[x]=0,mp[y]=0;

//     }
//     dfs(1);
//     cout<<ans<<endl;


// }



// signed  main ()

// {
//  IOS
//  uint32_t test_case=1;
// #ifndef ONLINE_JUDGE
//  //freopen( "input.txt"  , "r"  , stdin);
//  //freopen("output.txt","w",stdout);
// #endif

//  while(test_case --){
 
// solve();
// }  
// return 0;
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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define prDouble(x) cout<<fixed<<setprecision(10)<<x
#define rrep(i,n) for(int i=n-1;i>=0;i--)
const string yes="YES" ,no="NO" ;
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>
template <class T> using ordered_set = tree<T, null_type, less<T>, 
rb_tree_tag,tree_order_statistics_node_update>;

#define int int64_t



void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    vector<pair<int,int> > mp;
    int n=matrix.size(),m=matrix[0].size();
    for(int i=0;i<n;i++)
    {
        int  ok=0;
        int l;
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]!=0)continue;
            
            mp.push_back({i,j});
        }
       
    }
    for(auto p:mp)
    {
        for(int i=0;i<n;i++)
        {
            matrix[i][p.second]=0;
        }
        for(int j=0;j<m;j++)
        {
            matrix[p.first][j]=0;
        }
    }
   
    
}




 
void solve()
{

    int n,m;
    cin>>n>>m;
    vector<vector<int> > matrix(n,vector<int>(m));
    debug(n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    debug(matrix);
    setZeros(matrix);
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
        
    }
   
   

}



signed  main ()

{
 IOS
 uint32_t test_case;
#ifndef ONLINE_JUDGE
 //freopen( "input.txt"  , "r"  , stdin);
 //freopen("output.txt","w",stdout);
#endif

cin>>test_case;
 while(test_case --){
 
solve();
}  
return 0;
}