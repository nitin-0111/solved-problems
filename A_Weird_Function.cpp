#include<bits/stdc++.h>

using namespace std;


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
// #define MD 2*1e9

#define fi first
#define se second
#define pb push_back
#define vi vector<int> 
ll MD=2*1e9;

ll f(int x)
{
     ll ans=((x*x)%MD+(2*x)%MD+3);
     if(ans>MD)
     {
         ans%=MD;
     }
    return ans; 
}

 
int32_t main ()
{	 IOS
  
    int n;
    cin>>n;
   cout<<f(f(f(n)+n)+f(f(n)));

return 0;
}