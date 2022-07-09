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
    string s;
    // cin>>n;
    cin>>s;
    vector<string> a(n,string(n,'='));
    vector<int> id;
    for(int i=0;i<n;i++)
    {
        a[i][i]='X';
        if(s[i]=='2')id.pb(i);
    }
    int k=id.size();

    if(k==1 ||k==2)
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<k;i++)
    {
        int x=id[i],y=id[(i+1)%k];
        a[x][y]='+';
        a[y][x]='-';
    }
    cout<<"Yes"<<endl;
   for(int i=0;i<n;i++)
   {

       cout<<a[i]<<endl;
   }


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