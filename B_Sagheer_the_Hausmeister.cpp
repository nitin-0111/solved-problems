// #include<bits/stdc++.h>

// using namespace std;

//  #ifndef ONLINE_JUDGE 
// #include<D:\Coding_and_Web\debug.cpp>
 
// #else// online submission 

// #endif 


// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

// #define ppb pop_back
// #define pf push_front
// #define ppf pop_front
// #define all(v) v.begin(),v.end()
// #define uniq(v) v.erase(unique(all(v)),v.end()) 
// #define sz(x) (int)((x).size())
//  #define ll long long
//  #define eps 1e-6
// #define mod 1000000007
// #define pi (3.141592653589)
// #define ull uint64_t 
// #define cmp [] (const auto &l, const auto &r) {return l > r;}
// #define fi first
// #define se second
// #define prDouble(x) cout<<fixed<<setprecision(10)<<x
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define mem1(a) memset(a,-1,sizeof(a) )
// #define mem0(a) memset(a,0,sizeof(a) ) 
// #define rrep(i,n) for(int i=n-1;i>=0;i--)

// #define pb push_back
// #define vi vector<int>

// #define int int64_t


//     int stair[16][2];
//     int n,m;
//     int x;
//    int fun(int curdir,int level)
//    {
//        if(level>=x-1)
//        {
//            return stair[level][curdir];
//        }
//         int k=fun(curdir,level+1);
//        int b=m+1+fun(1-curdir,level+1);
//         if(k)
//       { int a=2*(stair[level][curdir])+k; b=min(b,a);}

//     //   debug(curdir,level,k,b,b+1);
//        return b+1;
//    }


 
// void solve()
// {

//     cin>>n>>m;
//     // int arr[n][m+2];
//         x=n;
//     for(int i=0;i<n;i++)
//     {
//         int left=0,right=0;
//         string s;
//         cin>>s;
//         for(int j=0;j<m+2;j++)
//         {
//             if(s[j]=='1')
//             left=j;

//             if(!right and s[j]=='1')
//             {
//                 right=m+1-j;
//             }
//         }

//         stair[n-1-i][0]=left;
//         stair[n-1-i][1]=right;
//         if(left==0 and right==0 and x==n)
//         {
//             x=n-1-i;
//         }

//     }
  
//     cout<<fun(0,0)<<endl;


// }



// signed  main ()

// {
//  IOS
//  uint32_t test_case=1;
// #ifndef ONLINE_JUDGE
//  //freopen( "input.txt"  , "r"  , stdin);
//  //freopen("output.txt","w",stdout);
// #endif

//  while(test_case --){
 
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
#define prDouble(x) cout<<fixed<<setprecision(10)<<x
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define rrep(i,n) for(int i=n-1;i>=0;i--)

#define pb push_back
#define vi vector<int>

#define int int64_t





 
void solve()
{

    vector<int> a;
    int xa=0;
    for(int i=0;i<6;i++)
    {
        int x;
        cin>>x;
        a.pb(x);
        xa^=x;
   cout<<xa<<endl;
    }

}



signed  main ()

{
 IOS
 uint32_t test_case=1;
#ifndef ONLINE_JUDGE
 //freopen( "input.txt"  , "r"  , stdin);
 //freopen("output.txt","w",stdout);
#endif

 while(test_case --){
 
solve();
}  
return 0;
}