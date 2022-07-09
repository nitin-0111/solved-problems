#include<bits/stdc++.h>

using namespace std;

 #ifndef ONLINE_JUDGE 

#include<D:\Coding_and_Web\debug.cpp>
 
#else// online submission 

#endif 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
 #define eps 1e-6

#define mod 1000000007

#define pi (3.141592653589)

#define ull uint64_t 

#define cmp [] (const auto &l, const auto &r) {return l > r;}

#define all(v) v.begin(),v.end()
#define fi first
#define se second
#define rep(i,n) for(int i=0;i<n;i++)

#define rrep(i,n) for(int i=n-1;i>=0;i--)


#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)


#define int int64_t





 
void solve()
{

    int u,v;
    cin>>u>>v;
    int d=v-u;
   if(v<u || d&1)
   {
       cout<<-1<<endl;
       return;
   }
   if(u==v)
   {
       if(u==0)
       {
           cout<<0<<endl;
       }
       else{
           cout<<"1\n"<<u<<endl;
       }
       return;
   }
   int x=d/2;
   if(x&u)
   {
       cout<<3<<endl;
       cout<<u<<" "<<x<<" "<<x<<endl;
       
   }
   else
   {
       cout<<2<<endl;
       cout<<(u+x)<<" "<<x<<endl;
   }


}



int32_t main ()

{
 IOS
 uint32_t tt=1;

 while(tt--){
 
solve();
}  
return 0;
}