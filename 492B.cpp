#include<bits/stdc++.h>

using namespace std;
 //#include<E:\Coding_and_Web\debug.cpp> 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
 #define eps 1e-6
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

    double ans;
    int n,l;
    cin>>n>>l;
    // int diff=0;
    vector<int> v(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(all(v));
    int diff=0;
    if(v[0]!=0)
    {
       diff=2*v[0];
    }

    for(int i=0;i<n-1;i++)
    {
        // cout<<diff<<" ";
        // cout<<endl;
        // cout<<v[i]<<endl;
        diff=max(diff,v[i+1]-v[i]);
    }
    if(v[n-1]!=l)
    {
        diff=max(2*(l-v[n-1]),diff);
    }

    ans=((1.0*diff)/2);
    
    // cout<<ans<<endl;
    printf(" %.9f ",ans);



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