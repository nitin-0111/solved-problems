// #include <bits/stdc++.h>

// using namespace std;
// // #include<E:\Coding_and_Web\debug.cpp>

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

// void solve()
// {

//     int n, k;
//     cin >> n >> k;
//     int t = n * k;
//     int a[n][k]={0};
//     int m = 1;
//     if (n == 1 || k == 1)
//     {
//         cout << "YES" << endl;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < k; j++)
//             {
//                 cout << m << " ";
//                 m++;
//             }
//             cout << endl;
//         }
//         return;
//     }
//     int even = 0, odd = 0;
//     if (t & 1)
//     {
//         odd = t / 2 + 1;
//         even = t / 2;
//     }
//     else
//     {
//         odd=t/2;
//         even=t/2;
//     }
//     if(odd%k!=0 ||even%k!=0)
//     {
//         cout<<"NO"<<endl;
//         return;
//     }
//     int r=1,l=2;
//     for(int i=0;i<n ;i++)
//     {
//         for(int j=0;j<k;j++)
//         {
//             if(r>t+2 ||l>t+2)
//             {
//                 cout<<"NO"<<endl;
//                 return;
//                 // break;
//             }
//             if(i%2==0)
//             {
//                 a[i][j]=r;
//                 r+=2;
//             }
//             else
//             {
//                 a[i][j]=l;
//                 l+=2;
//             }
//             // debug(r,t,a[i][j]);
//         }
//     }
//     cout<<"YES"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<k;j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int32_t main()
// {
//     IOS
//     #ifndef ONLINE_JUDGE

//     // For getting input from input.txt file
//     freopen("input.txt", "r", stdin);

//     // Printing the Output to output.txt file
//     freopen("output.txt", "w", stdout);

// #endif
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

    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout<<"yes"<<endl;
        rep(i, n)
        {
            cout << i + 1 << endl;
        }
        return;
    }
    int a[n][k];
    int odd = 1, even = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (i % 2==0)
            {

                a[i][j] = odd;
                odd += 2;
            }
            else
            {
                a[i][j] = even;
                even += 2;
            }
        }
    }
    // debug(a);

    if((odd-2>(n*k))||even-2 >(n*k))
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"yes"<<endl;
    rep(i,n)
    {
        rep(j,k)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
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
