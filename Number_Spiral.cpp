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


#define int uint64_t





 
void solve()
{

    int r,c;
    cin>>r>>c;
    if(r>=c)
    {
        if(r&1)
        {
            int k=(r-1)*(r-1)+c;
            cout<<k<<endl;
        }
        else
        {
            int k=r*r-c+1;
            cout<<k<<endl;
        }
    }
    else
    {
        if(c&1)
        {
            int k=c*c-r+1;
            cout<<k<<endl;
        }
        else
        {
            int k=(c-1)*(c-1)+r;
            cout<<k<<endl;
        }
    }
    return;

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