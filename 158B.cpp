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


//#define int int64_t





 
void solve()
{

    
    int n;
    cin>>n;
    unordered_map<int, int> map;
   for(int i=0;i<n;i++)
    {
       int x;cin>>x;
       map[x]++;
    }
    int ans=map[4];
    // debug(ans,map);
    if(map[3]>=map[1])
    {
        ans+=map[3];
        map[3]=0;
        map[1]=0;
    }
    else
    {
        ans+=map[3];
        map[1]=map[1]-map[3];
        map[3]=0;
    }
    // debug(ans,map[1]);

    int k=map[2];
    if(k%2==0)
    {
        ans+=(k/2);
    }
    else
    {
        ans+=(k/2);
        ans+=1;
        map[1]-=2;
    }
    // debug(ans);

    if(map[1]>0)
    {
       ans+= map[1]/4;
       if(map[1]%4 !=0)
       {
           ans+= 1;
       }
    }
    // debug(ans);

    cout<<ans<<endl;



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