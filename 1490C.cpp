#include<bits/stdc++.h>

using namespace std;

 #ifndef ONLINE_JUDGE 

#include<D:\Coding_and_Web\debug.cpp>
 
#else// online submission 

#endif 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
 #define eps 1e-6

#define mod 1000000007

#define pi (3.141592653589)

#define ull uint64_t 

#define cmp [] (const auto &l, const auto &r) {return l > r;}

#define all(v) v.begin(),v.end()
#define fi first
#define se second
#define rep(i,n) for(int i=0;i<n;i++)

#define rrep(i,n) for(int i=n-1;i>=0;i--)


#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)


#define int int64_t
map<int,int > m;
const int N=(int )1e12;
void fun()
{
    int i=1;
    int x=1;
    while(x<=N)
    {
        x=i*i*i;
        m[x]=1;
        i++;
    }

}



 
void solve()
{

    int x;
    cin>>x;
    for(auto l:m)
    {
        if(l.fi>=x)
        {
            cout<<"NO"<<endl;
            return;
        }

       int   y=x-l.fi;

         if(m.count(y)>0)
         {
            //  cout<<y<<endl;
             cout<<"Yes"<<endl;
             return;
         }
    }



}



int32_t main ()

{
 IOS
 uint32_t tt;
fun();
cin>>tt;
 while(tt--){
 
solve();
}  
return 0;
}