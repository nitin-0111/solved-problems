#include<bits/stdc++.h>

using namespace std;


 #define ll long long
#define MOD 1000000007


 
int main ()
{
  ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int *a=new int [n];
    int temp,ans;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        temp=a[0];
        if(i>=1&&a[i]!=temp)
        {
           ans=i+1;
        }
    }
    if(a[0]!=a[1]&&a[1]==a[2])
    {
        ans=1;
    }
    cout<<ans<<endl;
}
return 0;}
 /*INPUT: 



OUTPUT:

*/