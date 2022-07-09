#include<bits/stdc++.h>

using namespace std;

 #ifndef ONLINE_JUDGE 
#include<D:\Coding_and_Web\debug.cpp>
 
#else// online submission 

#endif 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(v) v.begin(),v.end()
#define uniq(v) v.erase(unique(all(v)),v.end()) 
#define sz(x) (int)((x).size())
 #define ll long long
 #define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t 
#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define fi first
#define se second
#define prDouble(x) cout<<fixed<<setprecision(10)<<x
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define rrep(i,n) for(int i=n-1;i>=0;i--)

#define pb push_back
#define vi vector<int>

#define int int64_t





 
void solve()
{

    int n;
    cin>>n;
    vector<int> v={0,1,0,1,2,3,0,1,2,3,4,5,6,7};
    vector<int> a={4,7,44,47,74,444,447,474,477,744,747,774,777};
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>n)
        break;
        else if(n%a[i]==0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    int d=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)
        d++;

        int num=0;
        rep(j,0,d)
        {
            int k;
            if(v[i]&(1<<d)==0)
            {
                k=4;
            }
            else
            k=7;



        }
    }


}



signed  main ()

{
 IOS
 uint32_t test_case=1;
#ifndef ONLINE_JUDGE
 //freopen( "input.txt"  , "r"  , stdin);
 //freopen("output.txt","w",stdout);
#endif

 while(test_case --){
 
solve();
}  
return 0;
}