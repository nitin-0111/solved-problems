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

//#define int int64_t





 
void solve()
{

    int a,b;
    cin>>a>>b;
    if(b>=2*a)
    {
        cout<<a<<" "<<2*a<<endl;
    }
    else
     cout<<-1<<" "<<-1<<endl;

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