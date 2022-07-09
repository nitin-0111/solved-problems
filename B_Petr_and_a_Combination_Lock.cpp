// #include<bits/stdc++.h>

// using namespace std;

//  #ifndef ONLINE_JUDGE 

// #include<D:\Coding_and_Web\debug.cpp>
 
// #else// online submission 

// #endif 


// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

//  #define ll long long
//  #define eps 1e-6

// #define mod 1000000007

// #define pi (3.141592653589)

// #define ull uint64_t 

// #define cmp [] (const auto &l, const auto &r) {return l > r;}

// #define all(v) v.begin(),v.end()
// #define fi first
// #define se second
// #define rep(i,n) for(int i=0;i<n;i++)

// #define rrep(i,n) for(int i=n-1;i>=0;i--)


// #define pb push_back
// #define vi vector<int> 
// #define fori(n) for(int i=0;i<n;i++)


// #define int int64_t





 
// void solve()
// {

//     int n;
//     cin>>n;
//     vector<int> a(n);
//     rep(i, n)
//     cin>>a[i];

//     int l=(1<<n);
//     for(int i=0;i<l;i++)
//     {
//     int k=0;
//         for(int j=0;j<n;j++)
//         {
//             if(i&(1<<j))
//             {
//                k+=a[j];
//             }
//             else
//             k-=a[j];
//         }
//         if(k%360==0 ||k==0)
//         {
//             cout<<"yes"<<endl;
//             return;
//         }
       
//     } 
//     cout<<"No"<<endl;

// }



// int32_t main ()

// {
//  IOS
//  uint32_t tt=1;

//  while(tt--){
 
// solve();
// }  
// return 0;
// }

#include<bits/stdc++.h>

using namespace std;

 #ifndef ONLINE_JUDGE 

#include<D:\Coding_and_Web\debug.cpp>
 
#else// online submission 

#endif 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
 #define eps 1e-6

#define mod 1000000007

#define pi (3.141592653589)

#define ull uint64_t 

#define cmp [] (const auto &l, const auto &r) {return l > r;}

#define all(v) v.begin(),v.end()
#define fi first
#define se second
#define rep(i,n) for(int i=0;i<n;i++)

#define rrep(i,n) for(int i=n-1;i>=0;i--)


#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)


//#define int int64_t





 
void solve()
{

 vector<int> a={1,2};
 vector<int> b={1,2};
 if(a==b)
 {
     cout<<"y"<<endl;
 }

}



int32_t main ()

{
 IOS
 uint32_t tt=1;

 while(tt--){
 
solve();
}  
return 0;
}