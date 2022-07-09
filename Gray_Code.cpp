// #include<bits/stdc++.h>

// using namespace std;

//  #ifndef ONLINE_JUDGE

// #include<D:\Coding_and_Web\debug.cpp>

// #else// online submission

// #endif

// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

//  #define ll long long
//  #define eps 1e-6

// #define mod 1000000007

// #define pi (3.141592653589)

// #define ull uint64_t

// #define cmp [] (const auto &l, const auto &r) {return l > r;}

// #define all(v) v.begin(),v.end()
// #define fi first
// #define se second
// #define rep(i,n) for(int i=0;i<n;i++)

// #define rrep(i,n) for(int i=n-1;i>=0;i--)

// #define pb push_back
// #define vi vector<int>
// #define fori(n) for(int i=0;i<n;i++)

// //#define int int64_t

// void solve()
// {

//     int n;
//     cin>>n;
//     vector<string > v;
//     int m=(1<<n);
//     for(int i=0;i<m;i++)
//     {
//         string s;
//           bool k=(i&(1<<(n-1)));
//           s=to_string(k);
//         for(int j=n-1;j>=1;j--)
//         {
//             bool b1=(i&(1<<j)),b0=(i&(1<<(j-1)));
//             // debug(b1,b0,i,j);
//             s+=to_string(b1^b0);

//         }
//         v.pb(s);
//     }
//     for(auto x: v)
//     cout<<x<<"\n";

// }

// int32_t main ()

// {
//  IOS
//  uint32_t tt=1;

//  while(tt--){

// solve();
// }
// return 0;
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

    int n = 5;
    for (int i = 2; i >= 0; i--)
    {
        if (n & (1 << i))
        {
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }
}

int32_t main()

{
    IOS
        uint32_t tt = 1;

    while (tt--)
    {

        solve();
    }
    return 0;
}