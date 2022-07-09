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





 
void solve()
{

    int n;
    cin>>n;
    int ma=INT_MIN;
    vector<int> a(n);
    rep(i,n)
    {
        cin>>a[i];
        ma=max(ma,a[i]);
    }
    sort(all(a));
    // debug(a);
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(x>=ma)
        {
            cout<<n<<endl;
            continue;
        }
    //    auto it=lower_bound(all(a),x);
        //  cout<<*it<<endl;
        int k=distance(a.begin(),upper_bound(all(a),x));
        cout<<k<<endl;
        // if(binary_search(all(a), x))
        // cout<<k+1<<endl;
        // else
        // cout<<k<<endl;
    }

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