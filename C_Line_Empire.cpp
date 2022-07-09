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
#define prDouble(x) cout<<fixed<<setprecision(10)<<x
#define rrep(i,n) for(int i=n-1;i>=0;i--)
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>

#define int int64_t





 
void solve()
{

    int n,a,b;
    cin>>n>>a>>b;
    vector<int> v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }
    // sort(all(v));
    vector<int> sum(n+1);
    rep(i,1,n+1)
    {
        sum[i]+=v[i-1]+sum[i-1];

    }
    int ans=1e18;
      sort(all(v));
    rep(i,0,n)
    {
        int res=v[i]*(a+b);
        int l=(sum[n]-sum[i]);
        l-=(n-i)*v[i];
        l*=b;
        if(l>=0)
        res+=l;
        ans=min(ans,res);

    }
    ans=min(ans,sum[n]*b);
    cout<<ans<<endl;





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