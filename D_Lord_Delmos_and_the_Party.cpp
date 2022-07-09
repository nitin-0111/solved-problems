// #include<bits/stdc++.h>

// using namespace std;


//  #define ll long long
// #define MOD 1000000007


 
// int main ()
// {
//   ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int n;
// cin>>n;
// ll sum=0;
// vector<ll> a;
// for(int i=0;i<n;i++)
// {
//     ll temp;
//     cin>>temp;
//     a.push_back(temp);
    
// }
// sort(a.begin(),a.end());
// sum=accumulate(a.begin(),a.end(),0);

// cout<<ceil(sum/n)<<endl;



// return 0;}
//  /*INPUT: 



// OUTPUT:

// */
#include<bits/stdc++.h>

using namespace std;


 #define ll long long
#define MOD 1000000007


 
int main ()
{
  ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
ll *a=new ll [n];
int max=0;
for(int i=0;i<n;i++)
{
  cin>>a[i];
  if(a[i]>max)
  {
    max=a[i];

  }
}
int avg=(1.0*(max+1)/2);

sort(a,a+n);
int l,u;
int i=0,j=n-1;
while(a[i]<avg)
{
  i++;
}
i--;
l=abs(avg-a[i]);
while(a[j]>avg)
{
  j--;
}
j++;
u=abs(a[j]-avg);
if(l<u)
{
  cout<<a[i]<<endl;

}
else
cout<<a[j]<<endl;
delete[]a;
return 0;}
 /*INPUT: 



OUTPUT:

*/