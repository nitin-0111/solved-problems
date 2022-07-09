#include<bits/stdc++.h>

using namespace std;


 #define ll long long
#define loop(i,a,n) for(int i=a;i<n;i++)

int slope(pair<float,float>a,pair<float,float>b)
{
    if(b.first==a.first)
    {
        return INT_MIN;
    }
   int m= (b.second-a.second)/(b.first-a.first);
   return m;
}
 
int main ()
{
  ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    pair<float,float> a,b,c;
    cin>>a.first>>a.second;
    cin>>b.first>>b.second;
    cin>>c.first>>c.second;
    int x=slope(b,c);
    int y=slope(a,b);
    if((x!=INT_MIN&&x!=0)||(y!=INT_MIN&&y!=0))
    {
        if(x*y==-1||x==y)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    else
    cout<<"YES"<<endl;


}
return 0;}
 /*INPUT: 



OUTPUT:

*/