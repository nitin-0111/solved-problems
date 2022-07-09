#include<bits/stdc++.h>

using namespace std;


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
#define MOD 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int> 

 ll pw(int a)
 {
     return (ll) pow(a,2);
 }
ll fun(pair<int, int> a,pair<int, int> b)
{
    ll ans= pw(a.fi-b.fi )+pw(a.se-b.se);
    return ans;
}
 
int32_t main ()
{	 IOS
  
    int n;
    cin>>n;
    vector<pair<int, int> > co;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        co.pb({x,y});
    }
    double ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ans=max((ll)ans,fun(co[i],co[j]));
        }
    }
    // cout<<ans<<endl;

    double res=sqrtl((double)ans);
    // res*res=ans;
    // cout<<res<<endl;
    printf("%.10f",res);

return 0;
}