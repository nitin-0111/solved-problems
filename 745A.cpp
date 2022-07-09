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

//#define int int64_t





 
void solve()
{

    string s;
    cin>>s;
    int n=s.size();
    set<string> v;
    int k=n;
    
    while(k--)
    {
        string a=s.substr(0,n-1);
        a=s[n-1]+a;
        s=a;
        v.insert(a);
     

    }
   
    cout<<v.size()<<endl;;

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