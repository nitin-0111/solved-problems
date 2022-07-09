#include<bits/stdc++.h>

using namespace std;


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
#define MOD 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int> 



 
int32_t main ()
{	 IOS
  
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            a.pb(t);sum+=t;
        }
        if(sum==n)
        {
            cout<<0<<endl;
        }
        else if(sum>n)
        {
            cout<<sum-n<<endl;
        }
        else if(sum<n)
        {
            cout<<1<<endl;
        }
    }
return 0;
}