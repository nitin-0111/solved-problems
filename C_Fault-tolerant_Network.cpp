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


#define int int64_t





 
void solve()
{

  int n;
  cin>>n;
  vector<int> a(n),b(n);
  rep(i,n)cin>>a[i];
  rep(i,n)cin>>b[i];
  int la,lb,ra,rb;
  la=lb=ra=rb=INT_MAX;

  for(int i=0;i<n;i++)
  {
    la=min(la,abs(b[i]-a[0]));
    lb=min(lb,abs(a[i]-b[0]));
    ra=min(ra,abs(b[i]-a[n-1]));
    rb=min(rb,abs(a[i]-b[n-1]));
  }

  cout<<min(min(la+lb,abs(a[0]-b[0]))+min(ra+rb,abs(a[n-1]-b[n-1])),
  min(la+rb,abs(a[0]-b[n-1]))+min(ra+lb,abs(a[n-1]-b[0])))<<endl;

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