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
   bool check=(s[0]<='z' &&s[0]>='a')?true:false;
    
    bool flag=true;
    for(int i=1;i<s.size();i++)
    {
      if(s[i]<='z' &&s[i]>='a')
        flag=false;
    }
    if( check &&flag)
    {
        s[0]=(char)(s[0]-'a'+'A');
        for(int i=1;i<s.size();i++)
        {
            s[i]=(char)(s[i]-'A'+'a');
        }
    }
    else if(!check and flag)
    {
        for(int i=0;i<s.size();i++)
        {
             s[i]=(char)(s[i]-'A'+'a');
        }
    }
    cout<<s<<endl;

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