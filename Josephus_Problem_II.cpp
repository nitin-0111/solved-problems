// // #include<bits/stdc++.h>

// // using namespace std;

// //  #ifndef ONLINE_JUDGE 
// // #include<D:\Coding_and_Web\debug.cpp>
 
// // #else// online submission 

// // #endif 


// // #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

// // #define ppb pop_back
// // #define pf push_front
// // #define ppf pop_front
// // #define all(v) v.begin(),v.end()
// // #define uniq(v) v.erase(unique(all(v)),v.end()) 
// // #define sz(x) (int)((x).size())
// //  #define ll long long
// //  #define eps 1e-6
// // #define mod 1000000007
// // #define pi (3.141592653589)
// // #define ull uint64_t 
// // #define cmp [] (const auto &l, const auto &r) {return l > r;}
// // #define fi first
// // #define se second
// // #define prDouble(x) cout<<fixed<<setprecision(10)<<x
// // #define rep(i,a,b) for(int i=a;i<b;i++)
// // #define mem1(a) memset(a,-1,sizeof(a) )
// // #define mem0(a) memset(a,0,sizeof(a) ) 
// // #define rrep(i,n) for(int i=n-1;i>=0;i--)

// // #define pb push_back
// // #define vi vector<int>

// // #define int int64_t





 
// // void solve()
// // {

// //     int n;cin>>n;
// //     set<int> s;
// //     int i=1;
// //     int k;
// //     cin>>k;
// //     while(s.size()!=n)
// //     {
// //         while(s.find(i)!=s.end() || i==0)
// //         {
// //             i++;
// //             i%=(n+1);
// //         }
// //         i=(i+k)%(n+1);
// //          while(s.find(i)!=s.end() || i==0)
// //         {
// //             i++;
// //             i%=(n+1);
// //         }
// //         cout<<i<<" ";
// //         // debug(i);
// //         s.insert(i);
// //         i=(i+k)%(n+1);
       
// //     }
// //     s.clear();


// // }



// // signed  main ()

// // {
// //  IOS
// //  uint32_t test_case=1;
// // #ifndef ONLINE_JUDGE
// //  //freopen( "input.txt"  , "r"  , stdin);
// //  //freopen("output.txt","w",stdout);
// // #endif

// //  while(test_case --){
 
// // solve();
// // }  
// // return 0;
// // }

#include<bits/stdc++.h>

using namespace std;


 #ifndef ONLINE_JUDGE 
#include<D:\Coding_and_Web\debug.cpp>
 
#else// online submission 

#endif 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;




template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

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

void fun(ordered_set<int>  a,int k,int i,vector<int> &ans)
{
    if(a.size()==1)
    {
        ans.pb(*a.find_by_order(0));
        return;
    }

    i=(i+k)%(a.size());
    ans.pb(*a.find_by_order(i));
    a.erase(a.find_by_order(i));
    fun(a,k,i,ans);
}


 
void solve()
{

   int n,k;
   cin>>n>>k;
 ordered_set<int> a;
 for(int i=0;i<n;i++)
 a.insert(i+1);

//    k--;
vector<int> ans;
 int i=0;
  
   while(n--)
   {
	  
    i=(i+k)%(a.size());
    ans.pb(*a.find_by_order(i));
    a.erase(a.find_by_order(i));
    
   }
   for(auto x: ans)
   {
       cout<<x<<" ";
   }
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


