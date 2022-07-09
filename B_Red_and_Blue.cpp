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

int fun(vector<int> a,int n)
{
    int k=a[0];
    int sum=k;
   for(int i=1;i<n;i++)
   {
       k+=a[i];
       sum=max(k,sum);
    //    cout<<sum<<" ";
       
   }
   if(sum<0)sum=0;
    return sum;
}



 
void solve()
{

    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    int m;
    cin>>m;
    vector<int> b(m);
    rep(i,m)cin>>b[i];

   int k=fun(a,n)+fun(b,m);
   if(k<0)k=0;
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