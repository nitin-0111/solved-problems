#include<bits/stdc++.h>

using namespace std;


 #define ll long long
#define MOD 1000000007


 
int main ()
{
  ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int *a=new int[n];
uint64_t sum=0; 
for(int i=0;i<n;i++)
{
    cin>>a[i];
    
}
sort(a,a+n,greater<int>);
for(int i=0;i<n;i++)
{
    if(a[i]>i)
    {
        sum+=a[i]-i;
    }
}
cout<<sum<<endl;
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
// cout<<sum<<endl;
delete []a;
return 0;}
 /*INPUT: 



OUTPUT:

*/