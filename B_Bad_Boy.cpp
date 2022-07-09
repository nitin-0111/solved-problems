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



// void fun(int a,int b, int c,int d)
// {
//     cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
// }

 
// void solve()
// {

//     int n,m,ax,ay;
//     cin>>n>>m>>ax>>ay;
//     if(ax==1 and (ay==1||ay==m) ||(ax==n  and (ay==1 ||ay==m)))
//     {
//         cout<<ax<<" "<<ay<<" "<<(n+1)-ax<<" "<<(m+1)-ay<<endl;
//         return;
//     }
//     else if(ax==1)
//     {
//        fun(n,1,n,m);
//        return;
//     }
//     else if(ax==n)
//     {
//         fun(1,1,1,m);
//         return;
//     }
//     else if(ay==1)
//     {
//         fun(1,m,n,m);
//         return;
//     }
//     else if(ay==m)
//     {
//         fun(1,1,n,1);
//     }

//     else{
//         int k=1;
//         if(abs(ax-1)>abs(ax-n))
//         {
//             fun(1,1,n,m);

//         }
//         else{
//             fun(n,1,1,m);
//         }

//     }


// }



// int32_t main ()

// {
//  IOS
//  uint32_t tt;

// cin>>tt;
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

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<1<<" "<<1<<" "<<a<<" "<<b<<endl;

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