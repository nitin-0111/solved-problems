#include<bits/stdc++.h>

using namespace std;
//  #include<E:\Coding_and_Web\debug.cpp> 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
#define mod 1000000007
#define ull uint64_t 

#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define all(v) v.begin(),v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)

//#define int int64_t





 
void solve()
{

    int n,l,r,k;
    cin>>n>>l>>r>>k;
    vector<int> v(n);
    fori(n)cin>>v[i];


    sort(all(v));
    
    auto low=lower_bound(all(v),l)-v.begin();
   auto up=upper_bound(all(v),r)-v.begin()-1;
   int ans=0;
   if(low>up)
   {
       cout<<0<<endl;
       return;
   }
   int tmp=v[low];
    ans=tmp>k?0:1;
//    debug(low,up,tmp);
   for(auto i=++low;i<=up;i++)
   {
        //    debug(tmp,ans);
       tmp+=v[i];
       if(tmp>k)
       {
           break;
       }
       ans++;
   }
   cout<<ans<<endl;

}



int32_t main ()
{
 IOS
 int tt;
 cin>>tt;
 while(tt--){
 solve();
}  
return 0;
}