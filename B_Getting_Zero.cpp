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
// #define rep(i, a, b) for (int i = a; i < b; i++)

// #define mem1(a) memset(a, -1, sizeof(a))

// #define mem0(a) memset(a, 0, sizeof(a))

// #define rrep(i, n) for (int i = n - 1; i >= 0; i--)

// #define pb push_back
// #define vi vector<int>

// #define int int64_t

// int fun(int n)
// {
//     int cnt = 0;
//     while (n % 2 == 0)
//     {
//         cnt++;
//         n /= 2;
//     }
//     return cnt;
// }

// void solve()
// {

//     int n;
//     int m = 32768;
//     cin >> n;
//     vector<int> v(n);
//     rep(i, 0, n) cin >> v[i];

//     for (int i = 0; i < n; i++)
//     {

//         if (v[i] % m == 0)
//         {
//             cout << 0 << endl;
//             continue;
//         }
//         int ans = 0;
//         int r=v[i]&1?1:0;
//         if (v[i] & 1)
//         {
//             ans++;
//             v[i]++;
//         }

//         int k = fun(v[i]);
//         if (15 > k)
//         {
//             ans += 15 - k;
//         }
//         for (int j = 1; j < 16; j++)
//         {
//             if ((v[i] + j) & 1)
//                 j++;
//             k = fun(v[i] + j);
//             // debug(j, ans, k);
//             if (15 > k)
//             {
//                 ans = min(ans, (15 - k + j+r));
//             }
//             else
//                 break;
//         }
//         ans = min(ans, m - v[i]);
//         cout << ans << endl;

//         // if (v[i] & 1)
//         // {
//         //     ans++;

//         //     int k = fun(v[i] + 1);
//         //     if (k < 15)
//         //     {
//         //         ans += 15 - k;
//         //     }
//         //     if (v[i] < m)
//         //     {
//         //         // ans = min(m - v[i], ans-1);
//         //         if (m - v[i] <= ans - 1)
//         //         {
//         //             ans = m - v[i];
//         //         }
//         //     }

//         //     cout << ans << endl;
//         // }
//         // else
//         // {
//         //     int k = fun(v[i]);
//         //     int l=fun(v[i]+2);
//         //     if (k < 15)
//         //     {
//         //         ans += 15 - k;
//         //     }
//         //     if (v[i] < m)
//         //     {
//         //         ans = min(m - v[i], ans);
//         //     }
//         //     if(l<15 and 15-l+2<ans)ans=15-l+2;
//         //     cout << ans << endl;
//         // }
//     }
// }

// signed main()

// {
//     IOS
//         uint32_t tt = 1;

//     while (tt--)
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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define rrep(i,n) for(int i=n-1;i>=0;i--)
//__builtin_ctz(x)  __builtin_popcountll(x)
#define pb push_back
#define vi vector<int>

//#define int int64_t





 
void solve()
{

    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,0,n)
    {
        cin>>a[i];
    }
    int m=32768;
    for(int i=0;i<n;i++)
    {
        if(a[i]%m==0)
        {
            cout<<0<<endl;
            continue;
        }
        int ans=15;
        for(int j=0;j<=15;j++)
        {
            ans=min(ans,15-__builtin_ctz(a[i]+j)+j);
        }
        cout<<ans<<endl;
        
       

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
