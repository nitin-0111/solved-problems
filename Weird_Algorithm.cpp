#include<bits/stdc++.h>

using namespace std;


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
#define MOD 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int> 

void fun(int n)
{
    if(n==1)
    {
        cout<<n<<endl;
        return;
    }

    cout<<n<<" ";
    if(n%2==0)
    {
        fun(n/2);
    }
    else
    {
        fun(3*n+1);
    }
}

 
int32_t main ()
{	 IOS
  
    ll n;
    cin>>n;
    while(n>1)
    {
        cout<<n<<" ";
        if(n%2==0)n/=2;
        else n=3*n+1;
    }
    cout<<1<<endl;

return 0;
}