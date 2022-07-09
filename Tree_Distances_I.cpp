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
template <class T> using ordered_set = tree<T, null_type, less<T>, 
rb_tree_tag,tree_order_statistics_node_update>;

#define int int64_t

const int M=(int)(2*(1e5)+1);
vector<int> adj[M];
map<pair<int,int> ,int> mp;

int ht[M];
void height(int src,int p)
{
    int leaf=1;
    int mx=0;
   
    for(auto child: adj[src])
    {
      if(child!=p)
      {
          leaf=0;
        height(child,src);
        mx=max(mx,ht[child]);

      }
    }
    if(leaf)ht[src]=0;
    else ht[src]=1+mx;
}


int dis[M];


void fun(int src,int par,int par_ans)
{
    vector<int> prefixMax,suffixMax;
    for(auto child: adj[src])
    {
        if(child!=par)
        {
            prefixMax.pb(ht[child]);
            suffixMax.pb(ht[child]);
        }
    }
    //building suffix array

    for(int i=1;i<prefixMax.size();i++)
    {
        prefixMax[i]=max(prefixMax[i-1],prefixMax[i]);
    }
    for(int i=suffixMax.size()-2;i>=0;i--)
    {
        suffixMax[i]=max(suffixMax[i],suffixMax[i+1]);
    }


    int c_no=0;
    for(auto child:adj[src])
    {
        if(child!=par)
        {
            int op1=(c_no==0)?INT_MIN:prefixMax[c_no-1];
            int op2=(c_no==(suffixMax.size()-1))?INT_MIN:suffixMax[c_no+1];

            int partial_ans=1+max(par_ans,max(op1,op2));
            fun(child,src,partial_ans);
            c_no++;
        }
    }
    dis[src]=1+max(par_ans,(prefixMax.empty()?-1:prefixMax.back()));
}

 
void solve()
{

    int n;
    cin>>n;
    rep(i,0,n-1)
    {
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);adj[y].pb(x);
    }

    height(1,-1);
    fun(1,0,-1);
    for(int i=1;i<=n;i++)
    {
        cout<<dis[i]<<" ";
    }
    cout<<endl;
   
   


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