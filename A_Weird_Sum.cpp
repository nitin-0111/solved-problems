#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 #ifndef ONLINE_JUDGE 
 #include<D:\Coding_and_Web\debug.cpp>
 #else
 #define debug(x...)
 #endif 
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

#define all(v) v.begin(),v.end()
#define uniq(v) v.resize(unique(all(v))-v.begin()) 
 #define ll long long
 #define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t 
#define fi first
#define se second
#define prDouble(x) cout<<fixed<<setprecision(10)<<x
#define rep(i,a,b) for(int i=a;i<b;i++)
#define fr(a,b) for(int i=a;i<b;++i)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 

#define pb push_back
#define vi vector<int>
string yes="YES" , no="NO" ; 
template <class T> using ordered_set = tree<T, null_type, less<T>, 
rb_tree_tag,tree_order_statistics_node_update>;

#define int int64_t


int dist(pair<int,int> a,pair<int,int> b)
{
    return abs(a.fi-b.fi)+abs(a.se-b.se);
}


 
void solve(int _t)
{

    int n,m;
    cin>>n>>m;
    unordered_map<int,vector<pair<int,int>>> mp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            mp[x].pb({i,j});

        }
    }
    int ans=0;
    for(auto u:mp)
    {
         vector<pair<int,int> > v=u.se;
         if(v.size()<=1)
         continue;

         vector<int> p1(v.size()+1,0);
         vector<int> p2(v.size()+1,0);
         vector<int> v1,v2;
         n=v.size();
         for(int i=0;i<n;i++)
         {
             v1.pb(v[i].fi);
             v2.pb(v[i].se);
         }
         sort(all(v1));
         sort(all(v2));
         for(int i=0;i<v.size();i++)
         {

             p1[i+1]+=p1[i]+v1[i];
             p2[i+1]+=p2[i]+v2[i];
         }

         for(int i=0;i<n-1;i++)
         {
             ans+=p1[n]-p1[i+1]-(n-1-i)*v1[i];
             ans+=p2[n]-p2[i+1]-(n-1-i)*v2[i];
         }
        //  debug(v);
        //  n=v.size();
        //  for(int i=0;i<n;i++ )
        //  {
        //      for(int j=0;j<n;j++)
        //      {
                 
        //           ans+=dist(v[i],v[j]);

        //      }
        //  }
    }
    cout<<ans<<endl;

}



signed  main ()

{
 IOS
 uint32_t test_case=1;
 // cin>>test_case;
int __t=test_case;

 while(test_case --){
 
solve(__t-test_case);
}  
return 0;
}