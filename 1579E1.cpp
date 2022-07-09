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
    fori(n)cin>>v[i];
    deque<int> q;
    q.pb(v[0]);
    for(int i=1;i<n;i++)
    {
        int x=q.front();
        if(v[i]<x)
        {
            q.push_front(v[i]);
        }
        else 
        q.pb(v[i]);
    }
    for(auto x: q)
    {
        cout<<x<<" ";
    }
    cout<<endl;

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