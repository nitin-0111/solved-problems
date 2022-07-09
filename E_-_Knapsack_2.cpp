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

int wt[105],val[105];
int dp[105][100005];

int func(int ind,int value_left)
{
    if(value_left==0)return 0;
    if(ind<0)return 1e15;// i.e we are not able to make this value
     if(dp[ind][value_left]!=-1)return dp[ind][value_left];
    int ans=func(ind-1,value_left);
    if(value_left-val[ind]>=0)
    {
        ans=min(ans,func(ind-1,value_left-val[ind])+wt[ind]);

    }
    return dp[ind][value_left]=ans;


}

 
void solve()
{

    memset(dp,-1,sizeof(dp));
    int n,w;
    cin>>n>>w;
    for(int i=0;i<n;i++)
    {
        cin>>wt[i]>>val[i];
    }
    int max_value=1e5;
    for(int i=max_value;i>=0;--i)
    {
        if(func(n-1,i)<=w)
        {
            cout<<i<<endl;
            return;
        }
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