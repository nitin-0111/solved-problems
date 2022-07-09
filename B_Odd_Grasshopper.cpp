// #include<bits/stdc++.h>

// using namespace std;
//  //#include<E:\Coding_and_Web\debug.cpp> 


// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

//  #define ll long long
//  #define eps 1e-6
// #define mod 1000000007
// #define ull uint64_t 

// #define cmp [] (const auto &l, const auto &r) {return l > r;}
// #define all(v) v.begin(),v.end()
// #define fi first
// #define se second

// #define pb push_back
// #define vi vector<int> 
// #define fori(n) for(int i=0;i<n;i++)

// #define int int64_t





 
// void solve()
// {

//     int x,n;
//     cin>>x>>n;
//     int d=1;
//     while(n--)
//     {
//         if(x%2==0)aA
//         {
//             x-=d;
//         }
//         else
//         {
//             x+=d;
//         }
//         d++;
//     }
//     cout<<x<<endl;

// }



// int32_t main ()
// {
//  IOS
//  uint32_t tt;
// cin>>tt;
//  while(tt--){
//  solve();
// }  
// return 0;
// }
#include<bits/stdc++.h>

using namespace std;
 //#include<E:\Coding_and_Web\debug.cpp> 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
 #define eps 1e-6
#define mod 1000000007
#define ull uint64_t 

#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define all(v) v.begin(),v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)

#define int int64_t





 
void solve()
{

    int x,n;
    cin>>x>>n;
    int d;
    if(n%4==1)d=-n;
    else if(n%4==2)d=1;
    else if(n%4==3)d=n+1;
    else if(n%4==0)d=0;

    if(x%2==0)cout<<x+d<<endl;
    else cout<<x-d<<endl;

}



int32_t main ()
{
 IOS
 uint32_t tt;
cin>>tt;
 while(tt--){
 solve();
}  
return 0;
}