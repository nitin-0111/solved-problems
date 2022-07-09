// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// #include <bits/stdc++.h>

// using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #ifndef ONLINE_JUDGE
// #include <D:\Coding_and_Web\debug.cpp>
// #else
// #define debug(x...)
// #endif
// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ppb pop_back
// #define pf push_front
// #define ppf pop_front
// #define all(v) v.begin(), v.end()
// #define uniq(v) v.erase(unique(all(v)), v.end())
// #define sz(x) (int)((x).size())
// #define ll long long
// #define eps 1e-6
// #define mod 1000000007
// #define pi (3.141592653589)
// #define ull uint64_t
// #define cmp [](const auto &l, const auto &r) { return l > r; }
// #define fi first
// #define se second
// #define prDouble(x) cout << fixed << setprecision(10) << x
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define fr(a, b) for (int i = a; i < b; i++)
// #define mem1(a) memset(a, -1, sizeof(a))
// #define mem0(a) memset(a, 0, sizeof(a))
// #define rrep(i, n) for (int i = n - 1; i >= 0; i--)

// #define pb push_back
// #define vi vector<int>
// template <class T>
// using ordered_set = tree<T, null_type, less<T>,
//                          rb_tree_tag, tree_order_statistics_node_update>;

// #define int int64_t

// void solve(int _t)
// {
//     int n;
//     int x;
//     cin >> n >> x;
//     unordered_map<int, vector<int>> mp;
//     vi a(n + 1);
//     fr(0, n)
//     {
//         cin >> a[i + 1];
//         mp[a[i + 1]].pb(i + 1);
//     }
//     // debug(a,mp);
//     for (int i = 1; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if ((a[i] + a[j]) > x)
//                 continue;

//             int k = x - (a[i] + a[j]);
//             if (mp.count(k) and mp[k][mp[k].size() - 1] > j)
//             {
//                 cout << i << " " << j << " " << mp[k][mp[k].size() - 1] << endl;
//                 mp.clear();
//                 return;
//             }
//         }
//     }
//     cout << "IMPOSSIBLE" << endl;
//     mp.clear();
// }

// signed main()

// {
//     IOS
//         uint32_t test_case = 1;
// #ifndef ONLINE_JUDGE
//     // freopen( "input.txt"  , "r"  , stdin);
//     // freopen("output.txt","w",stdout);
// #endif
//     int __t = test_case;

//     while (test_case--)
//     {

//         solve(__t - test_case);
//     }
//     return 0;



// }



#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 #ifndef ONLINE_JUDGE 
 #include<D:\Coding_and_Web\debug.cpp>
 #else
 #define debug(x...)
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
#define fr(a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define rrep(i,n) for(int i=n-1;i>=0;i--)

#define pb push_back
#define vi vector<int>
template <class T> using ordered_set = tree<T, null_type, less<T>, 
rb_tree_tag,tree_order_statistics_node_update>;

#define int int64_t





 
void solve(int _t)
{

    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<pair<int,int> > a;
     for(int i=1;i<=n;i++)
     {
         int x;
         cin>>x;
         a.pb({x,i});
     }

    sort(all(a));
    
    for(int i=0;i<n;i++)
    {
        int l=0,r=n-1;
        while(l<r)
        {
            int target=x-a[i].fi;
            if(l!=i and r!=i and a[l].fi+a[r].fi==target)
            {
                cout<<a[i].se<<" "<<a[l].se<<" "<<a[r].se<<endl;
                return;
            }

            if(a[l].fi+a[r].fi <target)
            {
               
                l++;
            }
            else{
                r--;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;

}



signed  main ()

{
 IOS
 uint32_t test_case=1;
#ifndef ONLINE_JUDGE
 //freopen( "input.txt"  , "r"  , stdin);
 //freopen("output.txt","w",stdout);
#endif
int __t=test_case;

 while(test_case --){
 
solve(__t-test_case);
}  
return 0;
}