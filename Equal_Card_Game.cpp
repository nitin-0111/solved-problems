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
        int n;
        int k=52;
        cin>>n;
        int cnt=0;
        while((k%n)!=0)
        {
            cnt++;
            k--;
        }
        cout<<cnt<<endl;
    }
return 0;
}