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
    int a[n];
    fori(n)cin>>a[i];
    int m=INT_MIN;

    fori(n)
    {
        if(a[i]>m )
        {
            m=a[i];

        }

    }
    int k=-2;
    fori(n)
    {
        if(a[i]==m and( (i-1>=0 and a[i-1]<a[i]) ||i+1<n and a[i+1]<a[i]))
        {
            k=i;
        }
    }
    cout<<k+1<<endl;


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