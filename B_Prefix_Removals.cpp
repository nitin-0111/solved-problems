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
// //__builtin_ctz(x)  __builtin_popcountll(x)

// #define pb push_back
// #define vi vector<int>

// #define int int64_t


// void buildz(int *z, string str)
// {
//     int l = 0, r = 0, n = str.size();
//     for (int i = 1; i < n; i++)
//     {

//         if (i > r)
//         {
//             // i does not lies b/w l and r
//             // we have to cal. z

//             l = i;
//             r = i;
//             while (r < n and str[r - l] == str[r])
//             {
//                 r++;
//             }
//             z[i] = r - l;
//             r--;
//         }
//         else
//         {
//             int k = i - l;

//             if (z[k] <= r - i)
//             {
//                 // i lies b/w l and r
//                 // which is pre computated
//                 z[i] = z[k];
//             }
//             else
//             {
//                 // some part of z is already cal.
//                 // but have to check that is it further mathing
//                 // or not
//                 l = i;
//                 while (r < n && str[r - l] == str[r])
//                 {
//                     r++;
//                 }
//                 z[i] = r - l;
//                 r--;
//             }
//         }
//     }
// }


 
// void solve()
// {

//     string s;
//     cin>>s;
    
//     // int z[s.size()]={0};
//     unordered_map<char,int>m;
//     rep(i,0,s.size())
//     {
//        m[s[i]]++;
//     }
//     int k=0;

//     rep(i,0,s.size())
//     {
//         // cout<<s[i]<<endl;
//         // cout<<m.count(s[i])<<endl;
//         if(m[s[i]]>1)
//         {
//             // cout<<"yes"<<endl;
//             k=i;
//             m[s[i]]-=2;
//         }
//     }
//     // debug(m);
//     // cout<<k<<endl;
//     if(!k)
//     cout<<s<<endl;
//     else
//     cout<<s.substr(k+1)<<endl;

    




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
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>

#define int int64_t





 
void solve()
{

    string s;
    cin>>s;
    int n=s.size();
     int m[26][n+1];
     mem0(m);
     rep(i,1,n+1)
     {
         int j=(int)s[i-1]-'a';
         m[j][i]=1;
         }
     rep(i,0,26)
     {
         rep(j,1,n+1)
         {
            m[i][j]+=m[i][j-1];
         }
     }
     rep(i,0,26)
     {
         rep(j,0,n+1)
         cout<<m[i][j]<<" ";
         cout<<endl;
     }
      int k=0;
      rep(i,0,n-1)
      {
          int j=s[i]-'a';

          if(m[j][i+2]<=0)break;
          m[j][i+1]=0;
          k=i;
      } 
      debug(k);
     cout<<s.substr(k)<<endl; 



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