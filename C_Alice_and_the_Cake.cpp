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



map<int,int> mp,ma;
void fun(int x)
{
     if(ma==mp)
     return ;
    if(x<2)
    {
        if(mp.count(x))
        {
            mp[x]-=1;
            if(mp[x]==0)
            {
                mp.erase(x);
            }

        }
            return;
    }

     if(mp.count(x))
     {
         mp[x]-=1;
         if(mp[x]==0)
         mp.erase(x);

         return;

     }
    int a=x/2;
    int b=x-a;

   fun(a);
   fun(b);
}
 
void solve(int _t)
{

    int n;
    cin>>n;
    mp.clear();
    vi a(n);
    int sum=0;
    fr(0,n)
    {
        cin>>a[i];
        sum+=a[i];
        mp[a[i]]++;
    }
//    debug(mp);
    fun(sum);
//    debug(mp);
   if(mp==ma)
    cout<<yes<<endl;
    else
    cout<<no<<endl;


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