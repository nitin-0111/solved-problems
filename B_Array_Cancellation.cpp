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
//     map<int,int> mp;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//         if(v[i]<0)
//         {
//             mp[i]=v[i];
//         }
//     }

//     for(int i=0;i<n;i++)
//     {
//         if(mp.count(i)>0)
//         {
//             mp.erase(i);
//         }
//         if(v[i]>0)
//         {
//             while(v[i]>0)
//             {
//                 if(mp.size()==0)break;
//                v[i]+=mp.begin()->se;
//                int j=mp.begin()->fi;
//                v[j]=0;
//                mp.erase(mp.begin()->fi);

//             }
//         }
//     }
//     int ans=0;
//     debug(v);
//     for(int i=0;i<n;i++)
//     {
//       if(v[i]<0)ans+=v[i];
//     }
//     cout<<abs(ans)<<endl;
    

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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define prDouble(x) cout<<fixed<<setprecision(10)<<x
#define rrep(i,n) for(int i=n-1;i>=0;i--)
const string yes="YES" ,no="NO" ;
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>

#define int int64_t





 
void solve()
{

    int n;
    cin>>n;
    vector<int> v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }
    int cur=0;

    for(int i=n-1;i>=0;i--)
    {
        // debug(cur);
        if(cur<0 and v[i]>0)
        {
            cur+=v[i];
            if(cur>0)
            {
                cur=0;
            }
        }
         if(v[i]<0)
        {
            cur+=v[i];

        }
    }
    cout<<abs(cur)<<endl;

}



signed  main ()

{
 IOS
 uint32_t test_case;
#ifndef ONLINE_JUDGE
 //freopen( "input.txt"  , "r"  , stdin);
 //freopen("output.txt","w",stdout);
#endif

cin>>test_case;
 while(test_case --){
 
solve();
}  
return 0;
}