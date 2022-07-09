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
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    vector<int> v[3];
    for(int i=0;i<n;i++)
    {
        int l=i,r=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[r])
            {
                r=j;
                // break;
            }
        }
        if(r==-1)
        {
            continue;
        }

        int d=r-l;
        int t=a[r];
        int k=r;
        while(k>l)
        {
            a[k]=a[k-1];
            k--;

        }
        a[k]=t;
        if(r==l)
        continue;
        v[0].pb(l+1),v[1].pb(r+1),v[2].pb(d);
        


    }

    // debug(a);
    cout<<v[0].size()<<endl;
    for(int i=0;i<v[0].size();i++)
    {
        cout<<v[0][i]<<" "<<v[1][i]<<" "<<v[2][i]<<endl;
    }


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