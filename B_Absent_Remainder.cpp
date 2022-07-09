// #include <bits/stdc++.h>

// using namespace std;
// //#include<E:\Coding_and_Web\debug.cpp>

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

//     int n;
//     cin >> n;
//     vector<int> a(n);
//     unordered_map<int, int> m;
//     fori(n)
//     {
//         cin >> a[i];
//         m[a[i]]++;
//     }
//     int k = n / 2;
//     int i = 0, j = 1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (k == 0)
//             {
//                 return;
//             }

//             int x = a[i] % a[j], y = a[j] % a[i];
//             if (a[i] == a[j] || (m[x] != 0 and m[y] != 0))
//             {
//                 continue;
//             }
//             else if (m[x] == 0)
//             {
//                 cout << a[i] << " " << a[j] << endl;
//                 k--;
//             }
//             else if (m[y] == 0)
//             {

//                 cout << a[j] << " " << a[i] << endl;
//                 k--;
//             }
//         }
//     }
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
    unordered_map<int, int> m;
    fori(n)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    sort(a, a + n);
  
    int k = n / 2;
    for(int j=n-1;j>=0;j--)
    {
        for(int i=0;i<n;i++)
        {
            if(!k)
            {
              return;
            }
            int x=a[j]%a[i];
            if(a[i]==a[j]||m[x]!=0)
            {
                continue;
            }
            cout<<a[j]<<" "<<a[i]<<endl;
            k--;
        }
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