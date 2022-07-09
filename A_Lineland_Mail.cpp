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

    int n;
    cin>>n;
    vector<int> v(n);
    rep(i,n)
    {
        cin>>v[i];
    }

    sort(all(v));
    
    cout<<(v[1]-v[0])<<" "<<v[n-1]-v[0]<<endl;
    for(int i=1;i<n-1;i++)
    {
       int a=min(v[i]-v[i-1],v[i+1]-v[i]);
       int b=max(v[n-1]-v[i],v[i]-v[0]);
       cout<<a<<" "<<b<<endl;
    }
    cout<<v[n-1]-v[n-2]<<" "<<v[n-1]-v[0]<<endl;


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