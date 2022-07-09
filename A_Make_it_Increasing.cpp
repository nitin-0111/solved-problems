
// #include <bits/stdc++.h>

// using namespace std;

// #ifndef ONLINE_JUDGE
// #include <D:\Coding_and_Web\debug.cpp>

// #else // online submission

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
// #define mem1(a) memset(a, -1, sizeof(a))
// #define mem0(a) memset(a, 0, sizeof(a))
// #define rrep(i, n) for (int i = n - 1; i >= 0; i--)

// #define pb push_back
// #define vi vector<int>

// #define int int64_t

// void solve()
// {

//     int n;
//     cin >> n;
//     vector<int> v(n), t(n);
//     rep(i, 0, n)
//     {
//         cin >> v[i];
//         t[i] = v[i];
//     }
//     sort(all(t));
//     if (t == v)
//     {
//         cout << n - 1 << endl;
//         return;
//     }
//     vector<int> diff(n);
//     diff[0] = abs(v[1] - v[0]);
//     diff[n - 1] = abs(v[n - 1] - v[n - 2]);
//     int mx = max(diff[0], diff[n - 1]);
//     // int k = mx == diff[0] ? 0 : n - 1;
//     for (int i = 1; i < n - 1; i++)
//     {
//         diff[i] = abs(v[i] - v[i - 1]) + abs(v[i] - v[i + 1]);

//         mx = max(mx, diff[i]);
//     }
//     int i = n / 2, j;
//     if (n & 1)
//         j = i;
//     else
//     {
//         j = i;
//         i -= 1;
//     }
//     // int k;
//     // for (; i>=0&&j<n;i--,j++)
//     // {
//     //     if(diff[i]==mx)
//     //     {
//     //         k=i;
//     //         break;
//     //     }
//     //     else if(diff[j]==mx)
//     //     {
//     //         k=j;
//     //         break;
//     //     }

//     // }
//     int ans = 1e13;
//     for (int k = 0; k < n; k++)
//     {
//         int cnt = 0;

//         if (k >= 1)
//         {
//             cnt++;
//             v[k - 1] = -v[k - 1];
//             if (k - 2 >= 0)
//                 for (int i = k - 2; i >= 0; i--)
//                 {

//                     int l = (v[i] + abs(v[i + 1])) / v[i];
//                     v[i] = -1 * l * v[i];
//                     cnt += l;
//                 }
//         }
//         if (k <= n - 2)
//         {
//             cnt++;
//             v[k + 1] = v[k + 1];
//             if (k + 2 < n)
//                 for (int i = k + 2; i < n; i++)
//                 {
//                     int l = (v[i] + v[i - 1]) / v[i];
//                     v[i] = l * v[i];
//                     cnt += l;
//                 }
//         }
//         //   debug(v);
//         ans = min(ans, cnt);
//     }
//     cout << ans << endl;
// }

// signed main()

// {
//     IOS
//         uint32_t test_case = 1;
// #ifndef ONLINE_JUDGE
//     // freopen( "input.txt"  , "r"  , stdin);
//     // freopen("output.txt","w",stdout);
// #endif

//     while (test_case--)
//     {

//         solve();
//     }
//     return 0;
// }

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
    vector<int> v(n),b(n,0);
    rep(i,0,n)cin>>v[i];
  
   int ans=1e18;
    for(int k=0;k<n;k++)
    { 
        b[k]=0;
        int sum=0;
        for(int i=k-1;i>=0;i--)
        {
            int m=(-b[i+1])/v[i]+1;
            b[i]=-m*v[i];
            sum+=m;
        }
        for(int i=k+1;i<n;i++)
        {
            int m=b[i-1]/v[i]+1;
            b[i]=m*v[i];;
            sum+=m;
        }
        ans=min(ans,sum);


    }
    cout<<ans<<endl;

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