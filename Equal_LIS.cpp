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
        int n;
        cin>>n;
        if(n%2==0)
        {
            if(n==2)
            {

            cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=1;i<=n/2;i++)
            {
                cout<<i<<" ";
            }
            cout<<n<<" ";
            for(int i=n/2+1;i<n;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
return 0;
}