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

// #define int int64_t

// void factor(set<int> &s, int a)
// {
//     for (int i = 2; i * i <= a; i++)
//     {
//         if (a % i != 0)
//             continue;

//         s.insert(i);
//         s.insert(a / i);
//     }
//     return;
// }

// void solve()
// {

//     int n;
//     cin >> n;
//     vector<int> v(n), a(n);
//     fori(n)
//     {
//         cin >> v[i];
//     }
//     a = v;
//     set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         s.insert(a[i]);
//         // debug(v[i]);
//         factor(s, v[i]);
//         for (int j = i + 1; j < n; j++)
//         {
//             if (v[j] % v[i] != 0)
//                 continue;

//             v[j] /= v[i];
//         }
//     }

//     vector<int> vis(n, 0);

//     for (auto x : s)
//     {
//         int ans = x;
//         if (a[0] % x == 0)
//             vis[0] = 1;
//         else
//             vis[0] = 0;
//         for (int j = 1; j < n; j++)
//         {
//             if (a[j] % x == 0)
//                 vis[j] = 1;
//             else
//                 vis[j] = 0;

//             if (vis[j - 1] == vis[j])
//             {
//                 ans = -1;
//                 break;
//             }
//         }
//         if (ans != -1)
//         {
//             cout << ans << endl;
//             s.clear();
//             return;
//         }
//         else
//         {
//             vis.assign(n, 0);
//         }
//     }
//     cout << 0 << endl;
//     s.clear();
// }

// int32_t main()
// {
//     IOS int tt;
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

#define int int64_t

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n + 1);
    int a = 0, b = 0; //a= odd b=e
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if ((i)&1)
        {
            a = __gcd(a, v[i]);
        }
        else
        {
            b = __gcd(b, v[i]);
        }
    }
    
    bool ch1 = true, ch2 = true;
    for (int i = 1; i <= n; i++)
    {
        if (!ch1 and !ch2)
        {
            cout << 0 << endl;
            return;
        }
         
        if(i&1  and v[i]%b==0)
        {
            ch2=false;
        }
        if(i%2==0 and v[i]%a==0)
        {
            ch1=false;
        }
    }
    
    if(ch1)
    {
        cout<<a<<endl;
        return;
    }
    if(ch2)
    {
        cout<<b<<endl;
        return;
    }
    if(!ch1 and !ch2)
    {
        cout<<0<<endl;
    }
}

int32_t main()
{
    IOS int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}