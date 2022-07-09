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

int dp[(int)(1e6+1)];
int fun(int *c,int val,int n)

{
    if(n<0)
    {
        return 0;
    }
    if(val==0)
    {
        // cout<<"val=0"<<endl;
        return 1;
    }
    if(val<0)
    {
        return 0;
    }
   
    if(dp[val]!=-1)
    {
        return dp[val];
    }
   int a,b;
   static int res=0;
    for(int i=0;i<=n;i++)
    {
        if(c[i]<=val)
        {
            // cout<<1<<endl;
            a=fun(c,val-c[i],n);
        }
        b=fun(c+1+i,val,n-1);
        // cout<<res<<endl;
        res=res+a+b;
        res%=mod;
    }
    return dp[val]=res;
}

 
int32_t main ()
{	 IOS
  
  int n,x;
  cin>>n>>x;
  int c[n];
  for(int i=0;i<n;i++)
  {
      cin>>c[i];
  }
  dp[0]=0;
  for(int i=1;i<=x;i++)
  {
      dp[i]=-1;
  }
  cout<<fun(c,x,n-1)<<endl;
    
return 0;
}