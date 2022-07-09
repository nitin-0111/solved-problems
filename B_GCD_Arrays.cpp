#include<bits/stdc++.h>

using namespace std;
//  #include<E:\Coding_and_Web\debug.cpp> 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
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

    int l,r,k;
    cin>>l>>r>>k;
    if(l==r and l!=1)
    {
        cout<<"YES"<<endl;
        return;
    }
    int n=r-l+1;
    int odd=n/2 ,even=n/2;
    if(l&1 and r&1)
    {
        odd++;
    }
    else if(l%2==0 and r%2==0)
    {
        even++;
    }
//    debug(even,odd,k);

    if(odd>k)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }


}



int32_t main ()
{
 IOS
 int tt;
 cin>>tt;
 while(tt--){
 solve();
}  
return 0;
}