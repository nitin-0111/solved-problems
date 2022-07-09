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
// #define rrep(i,n) for(int i=n-1;i>=0;i--)

// #define pb push_back
// #define vi vector<int>

// #define int int64_t





 
// void solve()
// {

//     string s,t;
//     cin>>s>>t;

//     string dp[s.size()+1][t.size()+1];

//     rep(i,0,s.size()+1)
//     {
//         rep(j,0,t.size()+1)
//         {
//             dp[i][j]="";
//         }
//     }
//     dp[0][0]="";
//     int m=s.size(),n=t.size();
//     for(int i=1;i<=s.size();i++)
//     {
//         for(int j=1;j<=t.size();j++)
//         {
//             if(s[m-i]==t[n-j])
//             {
//                 dp[i][j]=s[m-i]+dp[i-1][j-1];
//             }
//             else
//             {
//                 if(dp[i][j-1].size()>dp[i-1][j].size())
//                 {
//                     dp[i][j]=dp[i][j-1];
//                 }
//                 else
//                 dp[i][j]=dp[i-1][j];
//             }
//         }
//     }
//     // reverse(all(dp[m][n]));
//     cout<<dp[m][n]<<endl;
    

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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define rrep(i,n) for(int i=n-1;i>=0;i--)

#define pb push_back
#define vi vector<int>

// #define int int64_t
int dp[3005][3005];
string getlcs(string &s,string &t,int len)
{

    string ans;
    int i=0,j=0;
    while(len>0)
    {
        if(s[i]==t[j])
        {
            ans.pb(s[i]);
            i++;
            j++;
            len--;
        }
        else
        {
            if(dp[i][j+1]>=dp[i+1][j])
            {
                j++;
            }
            else
            i++;
        }
    }
    return ans;
}

int lcslen(string s,string t,int i,int j)
{
    if(i>=s.size()||j>=t.size())
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    return dp[i][j];

    if(s[i]==t[j])
    return dp[i][j]=1+lcslen(s,t,i+1,j+1);
    else
    return dp[i][j]=max(lcslen(s,t,i,j+1),lcslen(s,t,i+1,j));
}


 
void solve()
{

    string s,t;
    mem1(dp);
    cin>>s>>t;
    int l=lcslen(s,t,0,0);
    cout<<getlcs(s,t,l)<<endl;


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