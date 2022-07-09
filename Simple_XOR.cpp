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

bool  fun(int r,int l)
{
    if(r<l)return false;
    
    int v[]={0,1,2,3};
    vector<int> a;
 
  
    for(int i=0;i<4;i++)
    {
        int k=r|v[i];
        if(k>=l)
        {
            a.pb(k);
        }
        else{
           return false;
        }
    }
   
    if(a.size()==4)
    {
        int y=0;
        
        for(int i=0;i<4;i++)
        {
            cout<<a[i]<<"  ";
          
        }
        cout<<endl;
        return true;
        
    }
   
       return 
          false;
    
}



 
void solve()
{

   
    int l,r;
    cin>>l>>r;
    // int ok=0;
    for(int i=2;i<32;i++)
    {
        if(r&(1LL<<i))
        {
           
            int k=r;
            k&= ~(1LL<<i);
            bool ok=fun(k,l);
            if(ok)
            return;

           
        }
    }
    
        cout<<-1<<endl;
        return;
    







    


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