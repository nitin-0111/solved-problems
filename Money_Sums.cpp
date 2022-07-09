#include<bits/stdc++.h>

using namespace std;


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
#define mod 1000000007

#define cmp [] (const auto &l, const auto &r) {return l < r;}
#define all(v) v.begin(),v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)

//#define int ll


 
int32_t main ()
{
 IOS
  
    int n;
    cin>>n;
    int a[n];
    int sum[n];
    fori(n)
    {
        cin>>a[i];
        if(!i)sum[i]=a[i];
        else sum[i]=sum[i-1]+a[i];
    }
    // fori(n)cout<<sum[i];
    set<int> dp[][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                dp[i][j].insert(a[i]);
                continue;
            }

            for(int k1=i+1;k1<j-1;k1++)
            {
                for(int k2=j-1;k2>k1;k2--)
                {
                    int p1=sum[k1]-sum[i];
                    int p2=sum[j]-sum[k2];
                    dp[i][j].insert(p1);
                    dp[i][j].insert(p2);
                }
                dp[i][j].insert(all(dp[i][k1]));
                dp[i][j].insert(all(dp[k1+1][j]));
            }
        }
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(auto x:dp[i][j])
            {
                cout<<x<<" ";
            }
            // cout<<endl;
        }
        // cout<<endl;
    }
return 0;
}