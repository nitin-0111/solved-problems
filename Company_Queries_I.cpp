#include<bits/stdc++.h>

using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

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

#define int int64_t
const int M=(int)(2*(1e5)+1);
const int K=32;
vector<int> tree[M];
int Par[M][K];
void sparsTable(int cur,int p)
{
    Par[cur][0]=p;

    for(int i=1;i<K;i++)
    {
        Par[cur][i]=Par[Par[cur][i-1]][i-1];
    }

    for(auto child: tree[cur])
    {
        if(child!=p)
        {
            sparsTable(child,cur);
        }
    }
}

 int fun(int node,int k)
 {
     if(k==0)
     return Par[node][0];
     for(int i=32;i>=0;i--)
     {
         if(k&(1LL<<i))
         {
            // k&=(~(1LL<<i));
            node=Par[node][k];
            //  return fun(Par[node][i],k);
         }
     }
     return node;
 }
void solve()
{

    int n,q;
    cin>>n>>q;
   mem1(Par);
   
    int k=2;
    rep(i,0,n-1)
    {
        int x;
        cin>>x;
        tree[x].pb(k);
        tree[k].pb(x);
        k++;
    }
    sparsTable(1,-1);
    while(q--)
    {
       int node,k;
       cin>>node>>k;
       int ans=fun(node,k-1);
       if(ans==0)ans=-1;
        cout<<ans<<endl;
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