// // // #include <bits/stdc++.h>

// // // using namespace std;
// // // #include <ext/pb_ds/assoc_container.hpp>
// // // #include <ext/pb_ds/tree_policy.hpp>
// // // using namespace __gnu_pbds;

// // // #ifndef ONLINE_JUDGE
// // // #include <D:\Coding_and_Web\debug.cpp>

// // // #else // online submission

// // // #endif

// // // #define IOS                           \
// // //     ios_base::sync_with_stdio(false); \
// // //     cin.tie(NULL);

// // // #define ppb pop_back
// // // #define pf push_front
// // // #define ppf pop_front
// // // #define all(v) v.begin(), v.end()
// // // #define uniq(v) v.erase(unique(all(v)), v.end())
// // // #define sz(x) (int)((x).size())
// // // #define ll long long
// // // #define eps 1e-6
// // // #define mod 1000000007
// // // #define pi (3.141592653589)
// // // #define ull uint64_t
// // // #define cmp [](const auto &l, const auto &r) { return l > r; }
// // // #define fi first
// // // #define se second
// // // #define prDouble(x) cout << fixed << setprecision(10) << x
// // // #define rep(i, a, b) for (int i = a; i < b; i++)
// // // #define mem1(a) memset(a, -1, sizeof(a))
// // // #define mem0(a) memset(a, 0, sizeof(a))
// // // #define rrep(i, n) for (int i = n - 1; i >= 0; i--)

// // // #define pb push_back
// // // #define vi vector<int>
// // // template <class T>
// // // using ordered_set = tree<T, null_type, less<T>,
// // //                          rb_tree_tag, tree_order_statistics_node_update>;

// // // #define int int64_t

// // // void solve()
// // // {
// // //     int n;
// // //     cin >> n;
// // //     vector<int> v(n);
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cin >> v[i];
// // //     }
// // //     set<int> temp;
// // //     temp.insert(v[0]);
// // //     for (int i = 1; i < n; i++)
// // //     {
// // //         auto it = temp.lower_bound(v[i]);
// // //                     //   debug(temp);
      
// // //         if (it!=temp.end() and v[i] < *it and it == temp.begin())
// // //         {
// // //             temp.insert(v[i]);
// // //         }
// // //         else
// // //         {
// // //             --it;
// // //              temp.erase(it);
// // //              temp.insert(v[i]);
// // //         }
// // //     }
// // //     // debug(temp);
// // //     cout << temp.size() << endl;
// // // }

// // // signed main()

// // // {
// // //     IOS
// // //         uint32_t test_case = 1;
// // // #ifndef ONLINE_JUDGE
// // //     // freopen( "input.txt"  , "r"  , stdin);
// // //     // freopen("output.txt","w",stdout);
// // // #endif

// // //     while (test_case--)
// // //     {

// // //         solve();
// // //     }
// // //     return 0;
// // // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // #include<D:\Coding_and_Web\debug.cpp>

// // #define int long long
// // #define endl '\n'

// // signed main(){
// //     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
   
    
// //     int n; cin>>n;
// //     int l = 1;
// //     int ind[n+1] = {0};
// //     for (int i = 1; i <= n; i++) {
// //     	int x; cin>>x;
// //     	ind[x] = i;
// //     }
// //     int c = 1;
// //     for (int i = 1; i <= n; i++) {
// //         debug(l,ind[i],c);
// //     	if (l > ind[i]) 
// //     		c++;
// //     	l = ind[i];
// //     }
// //     cout<<c;
// // }



#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;


template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
signed main(){
  int n ;  cin >> n ;
  oset<ar<int,2>>b,c;
  vector<ar<int,3>>a(n) ;
  vector<int>A(n),B(n)  ;
  for(int i=0;i<n;i++)
    cin >> a[i][0] >> a[i][1],a[i][2]=i ;
    
  sort(a.begin(),a.end(),[&](const ar<int,3> i,const ar<int,3>j){
    return ((i[0]<j[0])||(i[0]==j[0]&&i[1]>j[1])) ;
  }) ;
//   debug(a);
  for(int i=0,j=n-1;i<n;i++,j--){
    A[a[i][2]]=b.size()-b.order_of_key({a[i][1],-1}) ;// it showing how many more that it ,  so that they can accquire it
    B[a[j][2]]=c.order_of_key({a[j][1]+1,-1}) ;// it showing how many less than it ,    so that they can fit in it
    b.insert({a[i][1],i}) ;c.insert({a[j][1],i}) ;
  }
  for(int i=0;i<n;i++)
    cout << B[i] <<' ' ;
  cout << '\n' ;
  for(int i=0;i<n;i++)
    cout <<  A[i]<< ' ' ;
}



