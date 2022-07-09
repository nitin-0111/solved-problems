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

#define int int64_t





 
void solve()
{

    int n;
    cin>>n;
    vector<vector<int> > a(n+1,vector<int> (3,0));
    rep(i,1,n+1)
    {
        rep(j,0,3)
        {
            cin>>a[i][j];
        }
    }
    int dp[n+1][3];
    rep(i,0,3)
    dp[1][i]=a[1][i];

    for(int i=2;i<=n;i++)
    {
        rep(j,0,3)
        {
            dp[i][j]=a[i][j]+max(dp[i-1][(j+1)%3],dp[i-1][(j+2)%3]);
        }
    }

    int mx=INT_MIN;
    rep(i,0,3)
    mx=max(dp[n][i],mx);
    cout<<mx<<endl;




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