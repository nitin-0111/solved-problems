#include<bits/stdc++.h>

using namespace std;


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
#define mod 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)


 
int32_t main ()
{
 IOS
  
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
       if(k&(k-1)!=0||k==1)
       {
           cout<<0<<endl;
       }
       else
       {
          int cnt=0;
          k=k>>1;
          while(k)
          {
              k=k>>1;
              cnt++;
          }
          cout<<cnt<<endl;
       }
    }
return 0;
}