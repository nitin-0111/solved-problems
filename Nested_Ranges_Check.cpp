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
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define rrep(i,n) for(int i=n-1;i>=0;i--)

#define pb push_back
#define vi vector<int>
// template <class T> using ordered_set = tree<T, null_type, less<T>, 
// rb_tree_tag,tree_order_statistics_node_update>;

// #define int int64_t


// *a.find_by_order(i)
// a.order_to_find({x,y})

bool comp(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b)
{
    return   (a.se.se-a.se.fi) >(b.se.se-b.se.fi);
}
 bool check(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b)
 {
     if(a.se.fi<=b.se.fi  and b.se.se <=a.se.se)
     {
         return true;
     }
     return false;
 }
void solve()
{

    int n;
    cin>>n;
   vector< pair<int,pair<int,int> > > v;
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
      v.pb({i,{x,y}});
    }
    sort(all(v),comp);
    vector<int> a(n,0),b(n,0);
    for(int i=0;i<n;i++)
    {
        bool ok=1;
        for(int j=n-1;j>=0;j--)
        {
            if(i==j)continue;
             if(check(v[i],v[j]))
             {
                 a[v[i].fi]=1;
                 b[v[j].fi]=1;
                 ok=0;
                 break;
             }
        }
        if(ok)
        {
            a[v[i]]=0;
        }
    }
    debug(a);
    debug(b);
   

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