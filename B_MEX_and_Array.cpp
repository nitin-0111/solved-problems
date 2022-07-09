// #include <bits/stdc++.h>

// using namespace std;
// #include <E:\Coding_and_Web\debug.cpp>

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ll long long
// #define eps 1e-6
// #define mod 1000000007
// #define ull uint64_t

// #define cmp [](const auto &l, const auto &r) { return l > r; }
// #define all(v) v.begin(), v.end()
// #define fi first
// #define se second

// #define pb push_back
// #define vi vector<int>
// #define fori(n) for (int i = 0; i < n; i++)

// //#define int int64_t

// vector<int> a;

// int mex(int i, int j)
// {
//     vector<int> b;
//     if (i == j)
//     {
//         return a[i] == 0 ? 1 : 0;
//     }
//     for (int k = i; k <= j; k++)
//     {
//         b.pb(a[k]);
//     }
//     sort(all(b));
//     b.resize(unique(b.begin(), b.end()) - b.begin());
//     for (int k = 0; k < b.size(); k++)
//     {
//         if (b[k] != k)
//         {
//             return k;
//         }
//     }
//     return b.size();
// }

// void solve()
// {

//     int n;
//     cin >> n;
//     a.resize(n);
//     fori(n) cin >> a[i];

//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (i == j)
//             {
//                 ans += 1;
//                 ans += (a[i] == 0 ? 1 : 0);

//                 // debug(i,j,ans);
//             }
//             else
//             {
//                 int m = -1;
//                 for (int k = i; k < j; k++)
//                 {
//                     int x = mex(i, k) + mex(k + 1, j);
//                     m = max(x, m);
//                 }
//                 if (m != -1)
//                 {
//                     ans += 2;

//                     ans += (m);
//                 }
//                 // debug(i,j,ans,m);
//             }
//         }
//     }
//     cout << ans << endl;
//     a.clear();
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
//#include<E:\Coding_and_Web\debug.cpp>

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define eps 1e-6
#define mod 1000000007
#define ull uint64_t

#define cmp [](const auto &l, const auto &r) { return l > r; }
#define all(v) v.begin(), v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

//#define int int64_t

void solve()
{

    int n;
    cin >> n;
    int a[n];
    fori(n) cin >> a[i];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            ans += (j - i + 1);
            for(int k=i;k<=j;k++)
            if(a[k]==0)ans++;
        }
    }
    cout << ans << endl;
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