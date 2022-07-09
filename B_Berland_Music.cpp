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

    int n;
    cin>>n;
    vector<int> v(n);
    fori(n)
    {
        cin>>v[i];
    }
    string s;
    cin>>s;
    map<int, int> m0,m1;
    fori(n)
    {
        if(s[i]=='1')
        {
            m1[v[i]]=0;
        }
        else
        {
            m0[v[i]]=0;
        }
    }
    int k=1;
    for(auto& x:m0 )
    {
        x.se=k;
        k++;
    }
    for(auto &x: m1)
    {
        x.se=k;
        k++;
    }
     
    fori(n)
    {
      if(s[i]=='0')
      {
          v[i]=m0[v[i]];
      }
      else
      v[i]=m1[v[i]];

    }
    m0.clear();
    m1.clear();
    fori(n)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}



int32_t main ()
{
 IOS
 int tt;
 cin>>tt;
 while(tt--){
 solve();
}  
return 0;
}