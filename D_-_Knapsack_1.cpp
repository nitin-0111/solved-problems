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

#define int int64_t







 
void solve()
{

    int n;

    int w;
    cin>>n>>w;
    int Maxweight=w;
    int value[n],weight[n];
    for(int i=0;i<n;i++)
    {
        cin>>weight[i]>>value[i];
    }
   int **ans = new int *[n + 1];
    for (int i = 0; i <= n; i++)
    {
        ans[i]=new int [Maxweight+1];
    }

    for (int i = 0; i <= n; i++)
    {
        for(int j=0;j<=Maxweight;j++) 
        {
            if(i==0||j==0)
            {
                ans[i][j]=0;
            }
            else if(weight[i-1]<=j)
            {
                ans[i][j]=max(value[i-1]+ans[i-1][j-weight[i-1]],ans[i-1][j]);
            }
            else
            ans[i][j]=ans[i-1][j];
        }
    }
    cout<< ans[n][Maxweight]<<endl;
  




}



signed main ()

{
 IOS
 uint32_t tt=1;

 while(tt--){
 
solve();
}  
return 0;
}