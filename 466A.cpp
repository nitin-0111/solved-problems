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

    int n,m,a,b;
    cin>>n>>m>>a>>b;
    float k=b/m;
    if(abs(k-a)<eps)
    {
        cout<< a*n<<endl;
    }
    else if(k<a)
    {
        int l=n/m;
        // cout<<"ues"<<endl;
        int x=(ceil(1.0*n/m))*b,y=(l*b +(n-l*m)*a),z=(l*b +(n-l*m)*b);
        cout<<min(x,min(y,z))<<endl;
        // if(((n-l*m)*a)<b)
        // cout<<(l*b +(n-l*m)*a)<<endl;
        // else
        // cout<< (l*b +(n-l*m)*b) <<endl;
    }
    else
     cout<< a*n<<endl;

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