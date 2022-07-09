// #include <bits/stdc++.h>

// using namespace std;

// #ifndef ONLINE_JUDGE

// #include <D:\Coding_and_Web\debug.cpp>

// #else // online submission

// #endif

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ll long long
// #define eps 1e-6

// #define mod 1000000007

// #define pi (3.141592653589)

// #define ull uint64_t

// #define cmp [](const auto &l, const auto &r) { return l > r; }

// #define all(v) v.begin(), v.end()
// #define fi first
// #define se second
// #define rep(i, n) for (int i = 0; i < n; i++)

// #define rrep(i, n) for (int i = n - 1; i >= 0; i--)

// #define pb push_back
// #define vi vector<int>
// #define fori(n) for (int i = 0; i < n; i++)

// //#define int int64_t

// void solve()
// {

//     int n, d;
//     cin >> n >> d;

//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     vector<int> diff(n + 1);
//     int mi = d; // min
//     int k;
//     for (int i = 0; i < n; i++)
//     {
//         if (i == 0)
//         {
//             diff[i] = a[i] - 1;
//             if (diff[i] != 0)
//                 diff[i] -= 1;
//             if (diff[i] < mi)
//             {
//                 mi = diff[i];
//                 k = i;
//             }
//             continue;
//         }

//         diff[i] = a[i] - a[i - 1] - 1;
//         if (diff[i] < mi)
//         {
//             mi = diff[i];
//             k = i;
//         }
//     }
//     diff[n] = d - a[n - 1];
//     if (diff[n] != 0)
//         diff[n] -= 1;
//     int l;
//     int ma = 0;
//     debug(mi, diff);

//     for (int i = 1; i < n; i++)
//     {
//         if (diff[i] > ma)
//         {
//             ma = diff[i];
//             l = i;
//         }
//     }
//     int ans = ma / 2;
//     if (diff[0] != 0 || diff[n] != 0)
//     {
//         ans = max(ans, max(diff[0], diff[n]));
//     }
//     ans = max(mi, ans);
//     cout << ans << endl;
// }

// int32_t main()

// {
//     IOS
//         uint32_t tt;

//     cin >> tt;
//     while (tt--)
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

#define ll long long
#define eps 1e-6

#define mod 1000000007

#define pi (3.141592653589)

#define ull uint64_t

#define cmp [](const auto &l, const auto &r) { return l > r; }

#define all(v) v.begin(), v.end()
#define fi first
#define se second
#define rep(i, n) for (int i = 0; i < n; i++)

#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

//#define int int64_t

void solve()
{

    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<int> diff(n + 1);
    int mi = a[0] - 1;

    diff[0] = mi;
    int k = 0;

    for (int i = 1; i < n; i++)
    {
        diff[i] = a[i] - a[i - 1]-1;
        if (diff[i] < mi)
        {
            mi = diff[i];
            k = i;
        }
    }
    diff[n]=d-a[n-1];
    int ma=0;
    int l;
    for(int i=0;i<n;i++)
    {
        int r=diff[i]-1;
        r/=2;
       
      if(r>ma)
      {
         ma=r;
         l=i;
      }
    }
    int cnt =diff[n]-1;
    if(cnt>ma)
    {
        ma=cnt; 
        l=n;
    }

    




}

int32_t main()

{
    IOS
        uint32_t tt;

    cin >> tt;
    while (tt--)
    {

        solve();
    }
    return 0;
}