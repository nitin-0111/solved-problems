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
    vector<int> a(n);
    fori(n)cin>>a[i];

    vector<int> ans(n);
    int j=n-1;
    for(int i=n-1;i>=0;i--)
    {
        int k=a[i];
        j=i;
        while(k and j>=0  and i>=0)
        {
           ans[j]=1;
           k--;
           j--;
           i--;
           if(a[i]>k)
           {
               k=a[i];
           }
        }
    }
    fori(n)cout<<ans[i]<<" ";
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