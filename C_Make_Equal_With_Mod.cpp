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
//     vector<int> v(n);
//     bool flag=false;
//     int x=INT_MAX;
//     rep(i,n)
//     {
//         cin>>v[i];
//         if(v[i]==1)flag=true;
//         if(v[i]>=3)x=min(v[i],x);
//     }
//     // debug(x);
//     vector<int> a(n,v[0]);
//     if(a==v)
//     {
//         cout<<"yes"<<endl;
//         return;
//     }
//    bool check=true;
//    if(x!=INT_MAX)
//     for(int i=0;i<n;i++)
//     {
//         int y=v[i]%(x-1);
//         // debug(y);
//         if(y!=1)
//         {
//             check=false;
//             break;
//         }

//     }


//     if(flag and !check)
//     {
//         cout<<"NO"<<endl;
//         return;

//     }
//     else
//     cout<<"yes"<<endl;


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

#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(v) v.begin(),v.end()
#define uniq(v) v.erase(unique(all(v)),v.end()) 
#define sz(x) (int)((x).size())
 #define ll long long
 #define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t 
#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define fi first
#define se second
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define rrep(i,n) for(int i=n-1;i>=0;i--)

#define pb push_back
#define vi vector<int>

//#define int int64_t





 
void solve()
{

    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,0,n)cin>>a[i];
    sort(all(a));
    bool check=false;
    bool zero=false;
    bool one=false;
    if(a[0]==0)
    zero=true;
    else if(a[0]==1)one=true;
    // debug(a);
    for(int i=1;i<n;i++)
    {
        if(a[i]==0)continue;
        if(a[i]==1 and !one )one=true;
        if(a[i-1]+1==a[i])
        {
            check=true;
        }

    }
    // cout<<one<<" "<<zero<<endl;
    if(zero and one|| one and check )cout<<"NO"<<endl;
    else 
    cout<<"yes"<<endl;


}



signed  main ()

{
 IOS
 uint32_t test_case;
#ifndef ONLINE_JUDGE
freopen( "input.txt"  , "r"  , stdin);
freopen("output.txt","w",stdout);
#endif

cin>>test_case;
 while(test_case --){
 
solve();
}  
return 0;
}