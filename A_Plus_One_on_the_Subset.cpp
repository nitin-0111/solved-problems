#include<bits/stdc++.h>

using namespace std;


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
#define mod 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int> 



 
int32_t main ()
{	 IOS
  
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a;
        ll mi=INT_MAX,ma=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            a.pb(x);
            if(x>ma)ma=x;
            if(x<mi)mi=x;
        }
        cout<<ma-mi<<endl;
    }
return 0;
}