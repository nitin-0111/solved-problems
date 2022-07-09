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
    vector<int> v(n);
     vector<int> a(3);
    rep(i,n)
    {
        cin>>v[i];
        int k=v[i]%3;
        a[k]++;
    }
    int k=n/3;
    int ans=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]<k)
        {
            int req=k-a[i];
            int l=((i-1)+3)%3;
            int extra ;
            if(a[l]>k)
            {
               extra=a[l]-k; 
               if(req<extra)
               {
                   ans+=req;
                   a[l]-=req;
                   continue;
               }
               else
               {
                   ans+=extra;
                   a[l]-=extra;
                   int r=(i+1)%3;
                   ans+=(2*(req-extra));
                   a[r]-=req-extra;
               }
            } 
            else
            {
                int r=(i+1)%3;
                extra=a[r]-k;
                ans+=(2*(req));
                a[r]-=req;
            }

        }
    }
    cout<<ans<<endl;


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