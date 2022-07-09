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

int dp[101][101];
int fun(vector<int> &a,int i,int x)
{
   if(i>=a.size())
   {
       return x==0;
   }
    
    if(dp[i][x]!=-1)
    return dp[i][x];
    int ans=0;
    for(int cur=0;cur<=a[i] and cur<=x;cur++)
    {
        // debug(i,x,cur,ans);
        (ans+=fun(a,i+1,x-cur))%=mod;
        
    }
    return dp[i][x]=ans;
}


 
void solve(int _t)
{
 int n,m;
 cin>>n>>m;
 vi a(m);
 int sum=0;
 fr(0,m)
 {
     int x,y;
     cin>>x>>y;
     sum+=x;
     a[i]=y-x;
 }
 if(sum>=n)
 {
     cout<<1<<endl;
     return;
 }
 else
 {
     debug(a);
     mem1(dp);
     cout<<fun(a,0,n-sum)<<endl;
 }
    

}



signed  main ()

{
 IOS
 uint32_t test_case=1;
cin>>test_case;
int __t=test_case;

 while(test_case --){
 
solve(__t-test_case);
}  
return 0;
}