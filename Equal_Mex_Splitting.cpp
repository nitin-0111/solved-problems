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


// //#define int int64_t





 
// void solve()
// {

//     int n;
//     cin>>n;
//     vector<int> v(n);
//     // map<int,int> m;
//     int non=0,zero=0;
//     map<int,int> m;
//     rep(i,n)
//     {
//         cin>>v[i];
//         m[v[i]]++;
//         if(v[i]==0)
//         {
//             zero++;
//         }
//         else{
//             non++;
//         }
       
//     }
//     if(non>=zero)
//     {
//         cout<<non<<endl;
//         return;
//     }
//     int ma=INT_MIN;
//     for(auto x:m)
//     {
//         if(x.fi==0)
//         {
//             continue;
//         }
//         ma=max(ma,x.se);

//     }
//     cout<<ma<<endl;



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

int mex(int a,int b)
{
    if(a>b)swap(a,b);
    if(a>0 and b>0)
    return 0;
    else if(a==0 &&b!=1)
    {
        return 1;
    }
    else 
     return 2;

}



 
void solve()
{

    int n;
    cin>>n;
    vector<int> v(n);
    rep(i,n)
    {
        cin>>v[i];
    }
    map<int,int> m;
    for(int i=1;i<n;i++)
    {
        int a=v[i-1],b=v[i];
        int me=mex(a,b);
        m[me]++;

    }
    int x=INT_MIN;
    for(auto l: m)
    {
        x=max(l.se,x);

    }
    cout<<x<<endl;

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