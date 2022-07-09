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

#define int int64_t





 
void solve()
{

    int a,b;
    cin>>a>>b;
    int x,y,z;
    x=a,y=2*a*b,z=a*(1+2*b);
    if(x==y||y==z||z==x)
    {
        y=a*(2*b-1);
        z=2*a*b;
    }
    cout<<"YES"<<endl;
    cout<<x<<" "<<y<<" "<<z<<endl;

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