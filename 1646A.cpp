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
#define ull uint64_t 

#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define all(v) v.begin(),v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)

#define int int64_t





 
void solve()
{

    int a;
    int s;
    cin>>a>>s;
    if(a>s)
    {
        cout<<0<<endl;
        return;
    }
    if(a==1 &&s==1)
    {
        cout<<1<<endl;
        return;

    }
    int k=s/(a*a);
    cout<<k<<endl;

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