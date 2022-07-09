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
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define mem1(a) memset(a,-1,sizeof(a) )
// #define mem0(a) memset(a,0,sizeof(a) ) 
// #define prDouble(x) cout<<fixed<<setprecision(10)<<x
// #define rrep(i,n) for(int i=n-1;i>=0;i--)
// const string yes="YES" ,no="NO" ;
// //__builtin_ctz(x)  __builtin_popcountll(x)

// #define pb push_back
// #define vi vector<int>

// #define int int64_t





 
// void solve()
// {

//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     string t=s;
//     int cnt=0,cnt1=0;
//     int ans=0;
//     for(int i=1;i<n;i+=2)
//     {
//       if(s[i-1]!=s[i])
//       {
//           s[i]=s[i-1];
//       }
//     }
//     for(int i=n-2;i>=0;i-=2)
//     {
//         if(t[i]!=t[i+1])
//         {
//             t[i]=t[i+1];
//         }
//     }
//     int cm=1;
//     for(int i=0;i<n-2;i+=2)
//     {
//         if(s[i]!=s[i+2])
//         {
//             cm++;
//         }
//     }
//     int cn=1;
//     for(int i=0;i<n-2;i+=2)
//     {
//         if(t[i]!=t[i+2])
//         {
//             cn++;
//         }
//     }
//     debug(s,cm);
//     debug(t,cn);
//     // debug(cm,cn);
//     // cout<<min(cm,cn)<<endl;
//     // cout<<s<<endl;
//     // cout<<ans<<endl;


// }



// signed  main ()

// {
//  IOS
//  uint32_t test_case;
// #ifndef ONLINE_JUDGE
//  //freopen( "input.txt"  , "r"  , stdin);
//  //freopen("output.txt","w",stdout);
// #endif

// cin>>test_case;
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


void fuc(stack<int> s)
{
    if(s.size()<=1)
    return;

    int a=s.top();
    s.pop();
    if(a<s.top())
    {
        int b=s.top();
        s.pop();
        s.push(a);
        s.push(b);
    }
    fuc(s);
    s.push(a);

}


 
void solve()
{
stack<int> s;
s.push(5);
s.push(4);
s.push(1);
s.push(2);
fuc(s);
while(s.size())
{
    cout<<s.top()<<endl;
    s.pop();
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