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


//#define int int64_t





 
void solve()
{

    string s;
    cin>>s;
    unordered_map<char,int> map;
    for(int i=0;i<s.size();i++)
    {
        map[s[i]]++;
    }
    
    int cnt=0,even=0;
    for(auto x: map)
    {
        if(x.se&1)
        {
            cnt++;
        }
    }
    int n=s.size();
   if(n&1 ){
       cout<<"First"<<endl ;

   }
   else if(!(n&1)  and cnt==0)
   {
       cout<<"First"<<endl;
   }
   else if(!(n&1) and cnt%2==0)
   {
       cout<<"Second"<<endl;
   }
  
    
}



int32_t main ()

{
 IOS
 uint32_t tt=1;

 while(tt--){
 
solve();
}  
return 0;
}