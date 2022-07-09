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

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> ans(n);
    // int i=n-1;
    int k=n;
    int i=n-1;
    while(k!=0)
    {
        int cnt=0;
        while(a[i]!=k)
        {
            if(a[i]<k)
            cnt++;
            i--;
            if(i<0)i+=n;
        }
        // debug(k,cnt,i);
        i--;
        if(i<0)i+=n;

        if(cnt!=0)
        ans[k-1]=k-cnt;
        else
        ans[k-1]=cnt;
        k--;
    }
    for( i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
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