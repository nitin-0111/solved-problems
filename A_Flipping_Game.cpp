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
    vector<int> sum(n+1);
    rep(i,n)
    {
        cin>>a[i];
        if(i==0)
        {
            sum[0]=a[0];
            continue;
        }
        sum[i]+=a[i];
        
    }
    if(n==1 )
    {
        if(a[0])
        {
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
        return;
    }
    int cnt=sum[n-1];
   
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int t=0;
            if(i-1>=0)
            {
                t+=sum[i-1];
            }
            if(j+1<n)
            {
                t+=sum[j+1];
            }
            for(int k=i;k<=j;k++)
            {
                if(a[k])
                continue;
                // t--;
                else
                t++;
            }
            cnt=max(t,cnt);
        }
    }
    cout<<cnt<<endl;
    

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