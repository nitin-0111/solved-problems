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


//#define int int64_t





 
void solve()
{

    int n,x,y;

    cin>>n>>x>>y;
    int diff=y-x;
    int k=n-1;
   int t=k;
   while(diff%t!=0 and t>0)
   {
      t--;
   }

   int l=diff/t;
   vector<int> v;
    for(int i=x;i<=y;i+=l)
    {
        v.pb(i);
    }
    int cnt=k-t;
    int ma=y;
    while(cnt)
    {
        if(x-l>0)
        {
            v.pb(x-l);
            x-=l;
            cnt--;
        }
        else
        {
            v.pb(y+l);
            y+=l;
            ma=y;
            cnt--;
        }
    }
    // sort(all(v));
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

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