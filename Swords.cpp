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
    string s;
    cin>>s;
    int i=0,j=n-1;
    int cnt=0;
   
    while(i<=j)
    {
        if(s[i]=='W'&&s[j]=='R')
        {
            swap(s[i],s[j]);
            i++;
            j--;
            cnt++;
        }
        if(s[i]=='R')
        {
           i++;
        }
        if(s[j]=='W')
        {
            j--;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='W'&&s[i+1]=='R')
        {
            cnt++;
        }
    }
    // cout<<s<<endl;
    cout<<cnt<<endl;

return 0;
}