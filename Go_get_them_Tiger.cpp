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
#define int long long 


 
int32_t main ()
{	 IOS
  int n,k;
  cin>>n>>k;
   map<int, int> a;
   for(int i=0;i<n;i++)
   {
	   int x,y;
	   cin>>x>>y;
	  a[x]+=y;
   }
   
   int ans=0;
   int last=0;
   for(auto p:a)
   {
    //    cout<<p.fi<<" "<<p.se<<endl;
	int req=p.fi-last;
    // cout<<req<<endl;
    if(k>=req)
    {
        k-=req;
        k+=p.se;
        ans=p.fi;
        last=p.fi;
    }
    else{
        ans+=k;
		k=0;
		break;
    }
     
   }
   if(k!=0)
   {
       ans+=k;
   }
   cout<<ans<<endl;
    
return 0;
}