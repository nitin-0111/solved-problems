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

// #define int int64_t





 
void solve()
{

    int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    rep(i,1,n+1)
    {
        cin>>a[i];
    }
    
    int dp[n+1];
     mem0(dp);
    //  dp[1]=a[1];
    dp[2]=abs(a[2]-a[1]);

    for(int i=3;i<=n;i++)
    {
        int mn=INT_MAX;
        for(int j=1;j<=min(i-1,k);j++)
        {
           mn=min(mn,dp[i-j]+abs(a[i]-a[i-j]));
        }
        dp[i]=mn;
    }
    
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