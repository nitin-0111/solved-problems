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

    int a, b;
    cin>>a>>b;
    int diff=abs(a-b);
    if(!diff)
    {
        cout<<diff<<" 0\n";
        return;
    }
    int k=min(a,b);
    int l=k/diff;
    int ans=min(k-l*diff,(l+1)*diff-k);
    // int y=INT_MAX;
    // if(diff<k)
    // {
    //     y=k-diff;
    // }
    // int m=(k+diff-1)/diff;
    // int ans=m*diff-k;
    
    // if(y!=INT_MAX)
    // ans=min(ans,y);
    cout<<diff<<" "<<ans<<endl;


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
