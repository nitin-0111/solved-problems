// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// #include <bits/stdc++.h>

// using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #ifndef ONLINE_JUDGE
// #include <D:\Coding_and_Web\debug.cpp>
// #else
// #define debug(x...)
// #endif
// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define all(v) v.begin(), v.end()
// #define uniq(v) v.resize(unique(all(v)) - v.begin())
// #define ll long long
// #define eps 1e-6
// #define mod 1000000007
// #define pi (3.141592653589)
// #define ull uint64_t
// #define fi first
// #define se second
// #define prDouble(x) cout << fixed << setprecision(10) << x
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define fr(a, b) for (int i = a; i < b; ++i)
// #define mem1(a) memset(a, -1, sizeof(a))
// #define mem0(a) memset(a, 0, sizeof(a))

// #define pb push_back
// #define vi vector<int>
// string yes = "YES", no = "NO";
// template <class T>
// using ordered_set = tree<T, null_type, less<T>,
//                          rb_tree_tag, tree_order_statistics_node_update>;

// #define int int64_t

// void solve(int _t)
// {

//     int n;
//     cin >> n;
//     unordered_map<int, int> mp;
//     unordered_map<int, int> ma, mb;
//     vi a(n), b(n), c(n);
//     fr(0, n)
//     {
//         cin >> a[i];
//         ma[a[i]] = i;
//     }
//     fr(0, n)
//     {
//         cin >> b[i];
//         mb[b[i]] = i;
//     }
//     fr(0, n)
//     {
//         cin >> c[i];
       
//     }
//     int ans = 1;

//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (!c[i])
//     //     {
//     //         if (a[i] == b[i])
//     //         {
//     //             mp[a[i]] = 1;
//     //             c[i] = a[i];
//     //         }
//     //         else
//     //         {

//     //             if (mp[a[i]])
//     //             {
//     //                 c[i] = b[i];
//     //                 mp[b[i]] = 1;
//     //             }
//     //             else if (mp[b[i]])
//     //             {
//     //                 c[i] = a[i];
//     //                 mp[a[i]] = 1;
//     //             }
//     //         }
//     //     }
//     // }
//     // debug(c);
//     // debug(mp);
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == b[i])
//         {
//             mp[a[i]] = 1;
//         }
//         else
//         {

//             if (c[i])
//             {
//                 if(c[i]==a[i])
//                 {
//                     int x=mb[c[i]];
//                     mp[a[x]]=1;
//                 }
//                else  if(c[i]==b[i])
//                 {
//                     int x=ma[c[i]];
//                     mp[b[x]]=1;
//                 }
              
//             }
//             else
//             {

//                 if(!mp[a[i]] and !mp[b[i]])
//                 {
//                     int x=mb[a[i]];
//                     int y=ma[b[i]];
//                     mp[a[x]]=1;
//                     mp[b[y]]=1;
//                    ( ans*=2)%=mod;
//                 }
//                 else{
//                     if(mp[a[i]])
//                     {
//                         mp[b[i]]=1;
//                     }
//                     else
//                     mp[a[i]]=1;
//                 }
//             }
//         }
//     }
//     // int ans = 1;

//     cout << ans << endl;
// }

// signed main()

// {
//     IOS
//         uint32_t test_case = 1;
//     cin >> test_case;
//     int __t = test_case;

//     while (test_case--)
//     {

//         solve(__t - test_case);
//     }
//     return 0;
// }

#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 #ifndef ONLINE_JUDGE 
 #include<D:\Coding_and_Web\debug.cpp>
 #else
 #define debug(x...)
 #endif 
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

#define all(v) v.begin(),v.end()
#define uniq(v) v.resize(unique(all(v))-v.begin()) 
 #define ll long long
 #define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t 
#define fi first
#define se second
#define prDouble(x) cout<<fixed<<setprecision(10)<<x
#define rep(i,a,b) for(int i=a;i<b;i++)
#define fr(a,b) for(int i=a;i<b;++i)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 

#define pb push_back
#define vi vector<int>
string yes="YES" , no="NO" ; 
template <class T> using ordered_set = tree<T, null_type, less<T>, 
rb_tree_tag,tree_order_statistics_node_update>;

#define int int64_t





 
void solve(int _t)
{

    vector<int> b={1,2,3};
    string s(all(b));
    cout<<s<<endl;
    

}



signed  main ()

{
 IOS
 uint32_t test_case=1;
 // cin>>test_case;
int __t=test_case;

 while(test_case --){
 
solve(__t-test_case);
}  
return 0;
}
