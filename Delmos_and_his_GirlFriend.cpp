#include<bits/stdc++.h>

using namespace std;


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
#define eps 1e-6

#define mod 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int> 



 
int32_t main ()
{	 IOS
  
    int n;
    cin>>n;
   map<int, int> mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;

    }
    int ans=mp.size();
    // cout<<ans<<endl;
    bool check=false;
    for(auto x: mp)
    {
        if(x.se>=2&&!check)
        {
           check=true;
        }
        if(mp.find(x.fi+1)==mp.end())
        {
            ans++;
            check =false;
        }
    }
    // if(check)
    // {
    //     ans++;
    // }
    // cout<<mp.size()<<endl;
    cout<<ans<<endl;
return 0;
}