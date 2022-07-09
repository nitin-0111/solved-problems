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
  
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s;
        int n;
        cin>>n;
        cin>>t;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int k=s.find(t[i]);
            char c=s[25-k];
            ans+=c-'a'+1;
        }
        cout<<ans<<endl;
    }
return 0;
}