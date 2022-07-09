#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
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
const int M=1e5;
int fact[M];
void fun()
{
    fact[1]=1;
    for(int i=2;i<M;i++)
    {
         fact[i]=((fact[i-1]%mod)*(i%mod))%mod;
    }
}



 
void solve(int _t)
{

    int n;
    cin>>n;
    vector<int> a(n);
    int x,y;
  
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            x=i+1;
        }
        if(a[i]==1)
        {
            y=i+1;
        }
    }
      if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    int l=min(x,y),r=max(x,y);
    debug(x,y);
    debug(l,r);
    vector<int> t;
    for(int i=l;i<r-1;i++)
    {
            t.pb(a[i]);
    }
    sort(all(t));
    int cnt=0;
    int u=2;
    for(auto cur:t)
    {
        if(cur!=u)
        {
            break;
        }
        cnt++;
        u++;
    }
    debug(t);
     debug(cnt,u);
    int m=r-l-1-cnt;
    
    int ran=r-l-1;
    debug(ran,m);
    if(ran==0)
    {
        cout<<1<<endl;
    }
    else{
        if(m==0)
        {
            cout<<(fact[ran]%mod)<<endl;
        }
        else{
            m++;
            if(ran==1 and ran+3==n)
            {
                    cout<<1<<endl;
                    return;
            }
            int ans=fact[ran]%mod;
            ans=(ans%mod*m%mod)%mod;
            cout<<ans<<endl;
        }
    }




}



signed  main ()

{
 IOS
 uint32_t test_case=1;
cin>>test_case;
int __t=test_case;
fun();
 while(test_case --){
 
solve(__t-test_case);
}  
return 0;
}