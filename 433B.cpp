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
    vector<int> a(n+1),b(n+1);
   
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        a[i]+=a[i-1];
    }
   
   sort(all(b));
   for(int i=1;i<=n;i++)
   {
       b[i]+=b[i-1];
   }
    int m;

    cin>>m;
    while(m--)
    {
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1)
        {
            cout<<a[r]-a[l-1]<<endl;
        }
        else
        {
            cout<<b[r]-b[l-1]<<endl;
        }
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