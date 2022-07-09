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
// #define prDouble(x) cout << fixed << setprecision(10) << x
// #define rrep(i, n) for (int i = n - 1; i >= 0; i--)
// //__builtin_ctz(x)  __builtin_popcountll(x)

// #define pb push_back
// #define vi vector<int>

// #define int int64_t

// void solve()
// {

//     int n;
//     cin >> n;
//     vector<int> v(n);
//     rep(i, 0, n) cin >> v[i];
//     int l=0,r=0;
//     int ans=0;
//     for(int i=0,j=n-1;i<=j; )
//     {
//         if(l>=r)
//           r+=v[j--];
//         else 
//         l+=v[i++];

//         if(l==r)
//            ans=max(ans,i+n-1-j);

//     }
//     cout<<ans<<endl;
// }

// signed main()

// {
//     IOS
//         uint32_t test_case;
// #ifndef ONLINE_JUDGE
//     // freopen( "input.txt"  , "r"  , stdin);
//     // freopen("output.txt","w",stdout);
// #endif

//     cin >> test_case;
//     while (test_case--)
//     {

//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include <D:\Coding_and_Web\debug.cpp>

#else // online submission

#endif

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(v) v.begin(), v.end()
#define uniq(v) v.erase(unique(all(v)), v.end())
#define sz(x) (int)((x).size())
#define ll long long
#define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t
#define cmp [](const auto &l, const auto &r) { return l > r; }
#define fi first
#define se second
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define prDouble(x) cout << fixed << setprecision(10) << x
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>

#define int int64_t

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n) cin >> v[i];

    int ans = 0;
    int i = 0, j = n - 1;
    // int left=0,right=0;
    int l = 0, r = 0;
    do
    {
        if(l<r)
        {
            l+=v[i];
            i++;
        }
        else if(r<l)
        {
            r+=v[j];
            j--;

        }
         if(l==r)
        {
            l+=v[i];
            r+=v[j];
            ans=i+n-1-j;
            i++;
            j--;
        }

       
    }while(i<=j);
//    debug(l,r,i,j);

    // if (l == r )
    // {
    //     ans = i + n - 1 - j;
    // }
    // if(n&1 and ans>n)
    // ans-=2;
    cout << ans << endl;
}

signed main()

{
    IOS
        uint32_t test_case;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif

    cin >> test_case;
    while (test_case--)
    {

        solve();
    }
    return 0;
}