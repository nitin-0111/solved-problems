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

int fun(int a,int b)
{
    if(a==0 || b==0)
    {
        return 0;
    }

    if(a==b)
    {

        int ans=2*(a/3);
        if(a%3==2)
        {
           ans++;
        }
        return ans;
        
    }

    if(b>a) swap(a,b);


    int k=a-b;  
    int ans;
    if(k>=b)
    {
        ans=b; 
        return ans;

    }
    else{
        a-=2*k;
        b-=k;
        ans=k;
    }
    return ans+fun(a,b);
}



 
void solve()
{

    int a,b;
    cin>>a>>b;
    cout<<fun(a,b)<<endl;
    // if(a==0  ||b==0)
    // {
    //     cout<<0<<endl;
    //     return;
    // }
    // else if(a==b)
    // {

    //     cout<<(a/3)<<endl;
    // }



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