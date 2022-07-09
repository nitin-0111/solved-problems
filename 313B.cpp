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

    string s;
    cin>>s;
    int n=s.size();
    int q;
    vector<int> a(n+1);
    for(int i=2;i<=n;i++)
    {
            a[i]+=a[i-1];
        if(s[i-1]==s[i-2])
        {
           a[i]++;
        }
    }
    //  for(int i=0;i<=n;i++)cout<<a[i]<<" ";
    //  cout<<endl;
    cin>>q;
    while(q--)
    {
        int l,r;

        cin>>l>>r;
        cout<<(a[r]-a[l])<<endl;
    }
     

}



int32_t main ()

{
 IOS
 uint32_t tt=1;

 while(tt--){
 
solve();
}  
return 0;
}