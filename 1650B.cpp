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

    int a,l,r;
    cin>>l>>r>>a;
    int ans=r/a+r%a;
    int k=r%a;
    // debug(k);
    if(k!=a-1)
    {
        if(l<=r-(k+1))
        {
            int f=r-(k+1);

            int m=f/a +f%a;
            ans=max(ans,m);
        }
        else
        {
            int m=l/a+l%a;
            ans=max(ans,m);
        }

    }
    cout<<ans<<endl;


}



int32_t main ()

{
 IOS
 uint32_t tt;

cin>>tt;
 while(tt--){
 
solve();
}  
return 0;
}