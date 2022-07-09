#include<bits/stdc++.h>

using namespace std;


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
#define mod 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int> 
#define int ll


 
int32_t main ()
{	 IOS
  
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d1=b-a,d2=c-b;
        int x,y;
        x=(a+c);
        if(x==2*b)cout<<"yes"<<endl;
        else if(x%(2*b)==0)cout<<"yes"<<endl;
        else if((b+d1)%c==0&&(b+d1)>=1)cout<<"yes"<<endl;
        else if((b-d2)%a==0&&(b-d2)>=1)cout<<"yes"<<endl;
        else
        cout<<"No"<<endl;

    }
return 0;
}