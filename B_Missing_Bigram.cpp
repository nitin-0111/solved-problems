#include<bits/stdc++.h>

using namespace std;
 //#include<E:\Coding_and_Web\debug.cpp> 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
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

    int n;cin>>n;
    vector<string> v;
    int t=n-2;
    while(t--)
    {
        string a;
        cin>>a;
        v.pb(a);
    }
    string s=v[0];
    for(int i=1;i<v.size();i++)
    {
        int k=s.size()-1;
        if(s[k]==v[i][0])
        {
            s+=v[i][1];
        }
        else
        {
            string tmp=v[i];
            s+=tmp;
        }
    }
    if(s.size()!=n)
    {
        s+="a";
    }
    cout<<s<<endl;

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