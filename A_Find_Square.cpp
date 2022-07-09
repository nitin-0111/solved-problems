#include<bits/stdc++.h>

using namespace std;
 //#include<E:\Coding_and_Web\debug.cpp>

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
 #define eps 1e-6
#define mod 1000000007

#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define all(v) v.begin(),v.end()
#define ull uint64_t 
#define fi first
#define se second

#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)

//#define int  int64_t


 
int32_t main ()
{
 IOS
  
    int n,m;
    cin>>n>>m;
    int x=0,y;
    int len=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            char c;
            cin>>c;
            if(  c=='B')
            {
                len=i;
            }
            if(!x and c=='B')
            {
                x=i,y=j;
            }
            

        }
    }
    // cout<<x<<" "<<y<<endl;
    // cout<<len<<endl;
    int k=x;
    x=(x+len)>>1;
    y+=x-k;
    cout<<x<<" "<<y<<endl;

return 0;
}