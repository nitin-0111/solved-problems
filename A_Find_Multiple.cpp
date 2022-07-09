#include<bits/stdc++.h>

using namespace std;


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
#define MOD 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int> 
bool ispossilbe(int mid,int c)
{
     float a=mid/c;
     if(a>1)
     {
         return true;
     }
     else
     {
         return false;
     }
}


 
int32_t main ()
{	 IOS
  
    int a,b,c;
    cin>>a>>b>>c;
    int ans=-1;
    while(a<=b)
    {
        int mid=(a+b)>>1;
        if(mid%c==0)
        {
            ans=mid;
        }
        if(ispossilbe(mid,c))
        {
            b=mid-1;
        }
        else{
            a=mid+1;
        }
    }
    cout<<ans<<endl;
return 0;
}