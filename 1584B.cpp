#include<bits/stdc++.h>

using namespace std;
 //#include<E:\Coding_and_Web\debug.cpp> 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
 #define eps 1e-6
#define mod 1000000007
#define ull uint64_t 

#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define all(v) v.begin(),v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)

#define int int64_t

int fun(int n)
{
    int ans;
    if(n==1)
    {
        return 10000;
    }
    if(n%3==0)
    {
        return n/3;
    }
    else 
    {
        int cnt=0;
        while(n%3!=0 and n>=0)
        {
             n-=2;
              cnt++;

        }
        ans=cnt+n/3;

    }
    return ans;
}



 
void solve()
{

    int n,m;
    cin>>n>>m;
    int op1=fun(n)*m,op2=fun(m)*n;
    cout<<min(op1,op2)<<endl;

}



int32_t main ()
{
 IOS
 uint32_t tt;
cin>>tt;
 while(tt--){
 solve();
}  
return 0;
}