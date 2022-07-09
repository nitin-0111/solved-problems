#include<bits/stdc++.h>

using namespace std;


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
#define mod 1000000007

#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define all(v) v.begin(),v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)

//#define int ll





 
void solve()
{
 int n,m,cnt=0,cur,x,y,sum=0,k;
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    fori(s.size())
    {
        mp[s[i]]++;
    }
    string ans;
    for(auto c:mp)
    {
        while(c.se--)
        {
            ans+=c.fi;
        }
    }
    cout<<ans<<endl;


}



int32_t main ()
{
 IOS
 int tt;
 cin>>tt;
 while(tt--){
 solve();}  
return 0;
}