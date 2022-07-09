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

//     vector<int> a(n);
//     rep(i,n)cin>>a[i];

//     int cnt=0;
//     for(int i=1;i<n;i++)
//     {
//         if(a[i]<=a[i-1])
//         {
//             if(i+1<n and a[i+1]>a[i])
//             {
//                 cnt=i+1;
//             }
//         }
//     }
//     cout<<cnt<<endl;

// }

// int32_t main ()

// {
//  IOS
//  uint32_t tt;

// cin>>tt;
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

    string a;
    cin >> a;
    int n = a.size();
    int len = INT_MAX;
    int i = 0, j = i + 1;

    while (j < n-1)
    {
        // debug(i,j,len);
        if (a[i] == a[j])
        {
            i = j;
            j++;
        }
        else if (j + 1 < n and a[j] == a[j + 1]  )
        {
            j++;
            continue;
        }
        else
        {
            if(j+1 <n  && a[i]==a[j+1]  )
            {
                i=j;
                j=j+1;
            }
            else if(j+1<n)
            {
                int ans=(j+1)-i+1;
                len=min(ans,len);
                 i=j;
                j=j+1;
            }
        }
    }
    if(len==INT_MAX)
    {
        cout<<0<<endl;
        return;
    }
    cout<<len<<endl;
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