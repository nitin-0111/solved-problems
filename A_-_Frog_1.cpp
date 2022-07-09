#include<bits/stdc++.h>

using namespace std;

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

#define rrep(i,n) for(int i=n-1;i>=0;i--)


#define pb push_back
#define vi vector<int>

//#define int int64_t





 
void solve()
{

    int n;
    cin>>n;
    vector<int> a(n+1);
    rep(i,1,n+1){
        cin>>a[i];
    }
    int dp[n+1];
    mem0(dp);
    dp[2]=abs(a[2]-a[1]);
    for(int i=3;i<=n;i++)
    {
      
       
         int op1=dp[i-1]+abs(a[i]-a[i-1]);
       
       int op2=dp[i-2]+abs(a[i]-a[i-2]);
       dp[i]=min(op1,op2);

    }
    // debug(dp);
    // rep(i,0,n+1)cout<<a[i]<<" ";
    // cout<<endl;
    // rep(i,0,n+1)cout<<dp[i]<<" ";
    // cout<<endl;
    cout<<dp[n]<<endl;

}



signed main ()

{
 IOS
 uint32_t tt=1;

 while(tt--){
 
solve();
}  
return 0;
}