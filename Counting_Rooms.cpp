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

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};

/*  In this flod fill we have given a coorinte of 2-d box 
   like  a pic of apple and we have to fill the some color or 
   some value its in its boundry 
 */
 
int ans=0;
 int R,C;
void flodfill(char mat[][1001],int i,int j,char ch)
{
    // Base case Matrix Bounds

    if(i<0||j<0||i>=R||j>=C)
    {
        return;
    }
    // Figure boundary condition
    if(mat[i][j]!=ch)
    {
        ans++;
        return;
    }
    // mat[i][j]=color;
    for(int k=0;i<4;i++)
    {
        flodfill(mat,i+dx[k],j+dy[k],ch);
    }


}



 
void solve()
{
 int n,m;
 cin>>n>>m;
 R=n,C=m;
 char mat[n][1001];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<1001;j++)
      {
          mat[i][j]='#';
          cin>>mat[i][j];
      }
  }
  ans=0;
  flodfill(mat,0,0,'.');
  cout<<ans<<endl;
    

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