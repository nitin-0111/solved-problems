// #include<bits/stdc++.h>

// using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
//  #ifndef ONLINE_JUDGE 
//  #include<D:\Coding_and_Web\debug.cpp>
//  #else
//  #define debug(x...)
//  #endif 
// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

// #define all(v) v.begin(),v.end()
// #define uniq(v) v.resize(unique(all(v))-v.begin()) 
//  #define ll long long
//  #define eps 1e-6
// #define mod 1000000007
// #define pi (3.141592653589)
// #define ull uint64_t 
// #define fi first
// #define se second
// #define prDouble(x) cout<<fixed<<setprecision(10)<<x
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define fr(a,b) for(int i=a;i<b;++i)
// #define mem1(a) memset(a,-1,sizeof(a) )
// #define mem0(a) memset(a,0,sizeof(a) ) 

// #define pb push_back
// #define vi vector<int>
// string yes="YES" , no="NO" ; 
// template <class T> using ordered_set = tree<T, null_type, less<T>, 
// rb_tree_tag,tree_order_statistics_node_update>;

// #define int int64_t





 
// void solve(int _t)
// {

//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     map<char,int> mp={{'a',1},{'e',1},{'i',1},{'o',1},{'u',1}};

//     vector<int> a(n,0);

//     for(int i=0;i<n;i++)
//     {
//         if(mp[s[i]] and i-1>=0)
//         {
//             a[i-1]=1;
//         }
//     }

//     for(int i=n-2;i>=0;i--)
//     {
//         a[i]+=a[i+1];
//     }
//     string ans;
//     // debug(a);
//     map<int,string> m;
//     string x;
//    for(int i=0;i<n;i++)
//    {
//         if(a[i]==0){
//             // ans+=s[i];
//             x=s.substr(i);
//             // continue;
//             break;
//         }
//         string t;
//        for(int j=i+1;j<n;j++)
//        {
//            if(a[i]==a[j])continue;
//            else
//            {
//                t=s.substr(i,j-i);
//             //    debug(i,j,t);
//                if(a[i]&1)
//                {
//                    reverse(all(t));
                 
//                }
//                m[a[i]]=t;
//                 //  ans=t+ans;
//                    i=j-1;
//                    break;
//            }

//        }
//    }
// //    debug(m);
  
//   for(int i=1;i<=a[0];i+=2)
//   {
//       ans=ans+m[i];
//   }
//    int i;
//   if(a[0]&1)
//   i=a[0]-1;
//   else
//   i=a[0];
  
//   for(; i>0 ;i-=2)
//   {
//       ans=ans+m[i];
//   }
//   ans+=x;
//    cout<<ans<<endl;
//     // debug(a);

    

// }



// signed  main ()

// {
//  IOS
//  uint32_t test_case=1;
// cin>>test_case;
// int __t=test_case;

//  while(test_case --){
 
// solve(__t-test_case);
// }  
// return 0;
// }
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

    

}



signed  main ()

{
 IOS
 uint32_t test_case=1;
cin>>test_case;
int __t=test_case;

 while(test_case --){
 
solve(__t-test_case);
}  
return 0;
}