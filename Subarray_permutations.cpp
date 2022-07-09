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
const string yes="YES" ,no="NO" ;
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>

#define int int64_t





 
void solve()
{

    int n,k;
    cin>>n>>k;
    vector<int> v(n+1);
    if(n>1 and k==1  || k>n)
    {
        cout<<-1<<endl;
        return;
    }

    int l=(n+1)/2;
    v[l]=1;
    int x=2;
    rep(i,l+1,n+1)
     {
         v[i]=x;
         x+=2;
     }
     x=3;
     for(int i=l-1;i>=1;i--)
     {
         v[i]=x;
         x+=2;
     }
    //  debug(v);
     int r=n-k;
     int y=r/2;
    //  l++;
     swap(v[l+1],v[l+y+1]);
     if(r&1)
     {
         int z=l-(y+1);
         if(z>=1)
         {
             swap(v[z],v[z+1]);
         }
         else
         {
             cout<<-1<<endl;
             return;
         }
     }
     rep(i,1,n+1)
     {
         cout<<v[i]<<" ";
     }
     cout<<endl;

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