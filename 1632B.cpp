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

//#define int int64_t





 
void solve()
{

    int n;
    cin>>n;
    int k=n-1;
    int cnt=log2(k);
    int l=pow(2,cnt);
     deque<int> q;
     q.push_front(0);
     q.push_back(l);
     for(int i=1;i<n;i++)
     {
         if(i==l)continue;

         if(i<l)q.push_front(i);
         else if(i>l)q.pb(i);
     }
     for(auto x: q)
     {
         cout<<x<<" ";

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