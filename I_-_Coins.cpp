// #include <bits/stdc++.h>

// using namespace std;

// #ifndef ONLINE_JUDGE
// #include <D:\Coding_and_Web\debug.cpp>

// #else // online submission

// #endif

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ppb pop_back
// #define pf push_front
// #define ppf pop_front
// #define all(v) v.begin(), v.end()
// #define uniq(v) v.erase(unique(all(v)), v.end())
// #define sz(x) (int)((x).size())
// #define ll long long
// #define eps 1e-6
// #define mod 1000000007
// #define pi (3.141592653589)
// #define ull uint64_t
// #define cmp [](const auto &l, const auto &r) { return l > r; }
// #define fi first
// #define se second
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define mem1(a) memset(a, -1, sizeof(a))
// #define mem0(a) memset(a, 0, sizeof(a))
// #define rrep(i, n) for (int i = n - 1; i >= 0; i--)
// #define prDouble(x) cout<<fixed<<setprecision(10)<<x
// #define pb push_back
// #define vi vector<int>

// // #define int int64_t

// void solve()
// {

//     int n;
//     cin >> n;
//     vector<double> a(n + 1), b(n + 1);
//     rep(i, 1, n)
//     {
//         cin >> a[i];
//         b[i] = 1 - a[i];
//     }
//     double dp[n + 1][n + 1];
//     dp[0][0] = 1;

//     // dp[i][x]  on tossing 1st i
//     //           coins the prob. of getting >=x heads
//      mem1(dp);
//     rep(i, 0, n + 1)
//     {
//         rep(j, 0, (n + 1) )
//         {
//             // if(i==0|| j==0)continue;

//               if(j==0){
//                   dp[i][j]=1;
//                   continue;
//               }
//               if(i==0)
//               {
//                   dp[i][j]=0;
//                   continue;
//               }
//             dp[i][j] = a[i] * dp[i - 1][j - 1] + b[i] * dp[i - 1][j];
//         }
//     }
//     // cout << dp[n][(n + 1) / 2] << endl;
//     prDouble(dp[n][(n+1)/2]);
//     cout<<endl;
// }

// signed main()

// {
//     IOS
//         uint32_t test_case = 1;
// #ifndef ONLINE_JUDGE
//     // freopen( "input.txt"  , "r"  , stdin);
//     // freopen("output.txt","w",stdout);
// #endif

//     while (test_case--)
//     {

//         solve();
//     }
//     return 0;
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

double dp[3001][3001];
double fun(vector<double> & ar,int i,int x)
{
    if(x==0)return 1;
    if(i==0)return 0;
    if(dp[i][x]>-0.9)
    return dp[i][x];
    return dp[i][x]=ar[i]*fun(ar,i-1,x-1)+(1-ar[i])*fun(ar,i-1,x);

}



 
void solve()
{
   int n;
   cin>>n;
   vector<double> ar(n+1);
   mem1(dp);
   rep(i,1,n+1)
   cin>>ar[i];

   prDouble(fun(ar,n,(n+1)/2));
   cout<<endl;

    

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