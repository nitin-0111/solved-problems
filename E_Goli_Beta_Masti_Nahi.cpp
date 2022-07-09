#include<bits/stdc++.h>

using namespace std;
 //#include<E:\Coding_and_Web\debug.cpp>

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
 #define eps 1e-6
#define mod 1000000007

#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define all(v) v.begin(),v.end()
#define ull uint64_t 
#define fi first
#define se second

#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)

#define int  int64_t


 
int32_t main ()
{
 IOS
  
    int n,x;
    cin>>n>>x;
    priority_queue<int> q;
    fori(n)
    {
        int t;
        cin>>t;
        q.push(t);
    }
    int ans=0;
    while(x-- and q.top()!=0 )
    {
        int t=q.top();
        q.pop();
        t/=2;
        q.push(t);
    }
    if(q.top()==0)
    {
        cout<<0<<endl;
        return 0;
    }
    while(!q.empty())
    {
        ans+=q.top();
        q.pop();
    }
    cout<<ans<<endl;
return 0;
}