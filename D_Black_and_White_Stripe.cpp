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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define prDouble(x) cout<<fixed<<setprecision(10)<<x
#define rrep(i,n) for(int i=n-1;i>=0;i--)
const string yes="YES" ,no="NO" ;
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>
template <class T> using ordered_set = tree<T, null_type, less<T>, 
rb_tree_tag,tree_order_statistics_node_update>;

#define int int64_t





 
void solve()
{

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> sum(n+1,0);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='W')
         cnt++;

         sum[i+1]=cnt;
    }
     int ans=INT_MAX;
    for(int i=0;i<=n-k;i++)
    {
        ans=min(ans,sum[i+k]-sum[i]);
    }
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