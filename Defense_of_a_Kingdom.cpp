#include<bits/stdc++.h>

using namespace std;


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
#define mod 1000000007

#define cmp [] (const auto &l, const auto &r) {return l < r;}
#define all(v) v.begin(),v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)

//#define int ll





 
void solve()
{
 int n,m,cnt=0,ans=0,cur,x,y,sum=0,k;
    cin>>n>>m>>k;
    vector<pair<int, int> > points;
    points.pb({0,0});
    fori(k)
    {
        cin>>x>>y;
        points.pb({x,y});
    }
    points.pb({n,m});
    sort(all(points));
    // int ans=0;
     for(int i=0;i<points.size()-1;i++)
     {
         int a=(points[i+1].fi-points[i].fi),b=abs({points[i+1].se-points[i].se});
         ans=max(ans,a*b);
     }
     cout<<ans<<endl;


}



int32_t main ()
{
 IOS
 int tt;
 cin>>tt;
 while(tt--){
 solve();}  
return 0;
}