#include<bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

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
template <class T> using ordered_set = tree<T, null_type, less<T>, 
rb_tree_tag,tree_order_statistics_node_update>;

#define int int64_t




int largest_subarray(vector<int> a, int n)
{
    // Stores index of array elements
    unordered_map<int, int> index;
    int ans = 0;
    for (int i = 0, j = 0; i < n; i++) {
  
        // Update j based on previous
        // occurrence of a[i]
        j = max(index[a[i]], j);
  
        // Update ans to store maximum
        // length of subarray
        ans = max(ans, i - j + 1);
  
        // Store the index of current
        // occurrence of a[i]
        index[a[i]] = i + 1;
    }
  
    // Return final ans
    return ans;
}
 
void solve()
{

    int n;
    cin>>n;
   unordered_map<int,int> mp,tmp;
   vector<int> a(n);
   rep(i,0,n)cin>>a[i];
   cout<<largest_subarray(a,n)<<endl;
//    int j=-1,i=0;
//    int mx=1;
//    for( i=0;i<n;i++)
//    {
//        if(mp.count(a[i])>0)
//        {
           
//            mx=max(mx,i-j-1);
//         //    mp.clear();
//         mp=tmp;
//            mp[a[i]]=1;
//            j=i-1;
//            continue;
//        }
//        mp[a[i]]=1;

//    }
//    if(i!=j+1)
//    {
//        mx=max(mx,i-j-1);
//    }
//    cout<<mx<<endl;

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