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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define prDouble(x) cout<<fixed<<setprecision(10)<<x
#define rrep(i,n) for(int i=n-1;i>=0;i--)
const string yes="YES" ,no="NO" ;
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>

#define int int64_t





 
void solve()
{

    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    int sum=0;
    rep(i,0,n)
    {
        cin>>v[i];
        sum+=v[i];


    }
    sort(all(v));
    // debug(v,sum);
    while(q--)
    {
        int x;
        cin>>x;
        if(x>sum)
        {
            cout<<-1<<endl;

        }
        else if(x==sum)
        {
            cout<<n<<endl;

        }
        else
        {
            auto it=upper_bound(all(v),x);
            if(it!=v.end() and *it==x)
            {
                cout<<1<<endl;
            }
            else
            {
                if(it==v.end())
                it--;
                int sum=0;
                // debug(*it,q);
            int k=0;
                
                while(sum<x and it>=v.begin())
                {
                    sum+=(*it);
                    k++;
                    it--;
                }
                // debug(sum,x);
                if(sum>=x)
                {
                    cout<<k<<endl;

                }
                else
                {
                    cout<<-1<<endl;
                }

            }
        }
    }

}



signed  main ()

{
 IOS
 uint32_t test_case;
#ifndef ONLINE_JUDGE
 //freopen( "input.txt"  , "r"  , stdin);
 //freopen("output.txt","w",stdout);
#endif

cin>>test_case;
 while(test_case --){
 
solve();
}  
return 0;
}