#include <bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#ifndef ONLINE_JUDGE
#include <D:\Coding_and_Web\debug.cpp>
#else
#define debug(x...)
#endif
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define all(v) v.begin(), v.end()
#define uniq(v) v.resize(unique(all(v)) - v.begin())
#define ll long long
#define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t
#define fi first
#define se second
#define prDouble(x) cout << fixed << setprecision(10) << x
#define rep(i, a, b) for (int i = a; i < b; i++)
#define fr(a, b) for (int i = a; i < b; ++i)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))

#define pb push_back
#define vi vector<int>
string yes = "YES", no = "NO";
template <class T>
using ordered_set = tree<T, null_type, less<T>,
                         rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t

// const int M = 1e7 + 5;
// bitset<M> bit;
// vector<int> prime;
// void seive()
// {

//     prime.push_back(2);
//     bit[2] = 1;
//     for (int i = 3; i <= M; i += 2)
//     {
//         bit[i] = 1;
//     }

//     for (int i = 3; i * i <= M; i += 2)
//     {
//         if (bit[i])
//         {
//             prime.push_back(i);

//             for (int j = i * i; j <= M; j += 2 * i)
//             {
//                 bit[j] = 0;
//             }
//         }
//     }
// }

// bool fun(int a)
// {
//     if (a < M)
//     {
//         return bit[a];
//     }
//     return 0;
// }
bool check(int n)
{
    // Assumes that n is a positive natural number
    // We know 1 is not a prime number

    // if (n < M)
    // {
    //     return bit[n];
    // }
    if (n <= 2)
    {
        return false;
    }

    int i = 2;
    // This will loop from 2 to int(sqrt(x))
    while (i * i <= n)
    {
        // Check if i divides x without leaving a remainder
        if (n % i == 0)
        {
            // This means that n has a factor in between 2 and sqrt(n)
            // So it is not a prime number
            return false;
        }
        i += 1;
    }
    // If we did not find any factor in the above loop,
    // then n is a prime number
    return true;
}

void solve(int _t)
{

    int x, y, z;
    cin >> x >> y;
    z = x ^ y;
    vector<int> ans;
    // set<int> ans;
    //   debug(x,y,z);

    ans.pb(2);
    int a = x ^ 2;
    int b = y ^ 2;
    int c = z ^ 2;

    if (a & 1 and c & 1 and a != c )
    {
        ans.pb(a);
        ans.pb(c);
    }
    else if (a & 1 and b & 1 and a != b )
    {
        ans.pb(a);
        ans.pb(b);
    }
    else
    {
        ans.pb(b);
        ans.pb(c);
    }
//    and check(a) and check(c)
// and check(a) and check(b)
    // if (check(x ^ 2) and check(z ^ 2) and (x ^ 2) != (z ^ 2))
    // {
    //     ans.pb(x ^ 2);
    //     ans.pb(z ^ 2);
    // }
    // else if (check(x ^ 2) and check(y ^ 2) and (x ^ 2) != (y ^ 2))
    // {
    //     ans.pb(x ^ 2);
    //     ans.pb(y ^ 2);
    // }
    // else
    // {
    //     ans.pb(y ^ 2);
    //     ans.pb(z ^ 2);
    // }
    // for (int i = 0; i < prime.size(); i++)
    // {
    //     int a = x ^ prime[i];
    //     int b = y ^ prime[i];
    //     int c = z ^ prime[i];

    //     // if (fun(a) and fun(c))
    //     // {
    //     //     set<int> s;
    //     //     s.insert(prime[i]);
    //     //     s.insert(a);
    //     //     s.insert(c);
    //     //     if (s.size() == 3)
    //     //     {
    //     //         for (auto y : s)
    //     //         {
    //     //             cout << y << " ";
    //     //         }
    //     //         cout << endl;
    //     //         break;
    //     //     }
    //     // }
    //     // else if (fun(a) and fun(b))
    //     // {
    //     //     set<int> s;
    //     //     s.insert(prime[i]);
    //     //     s.insert(a);
    //     //     s.insert(b);
    //     //     if (s.size() == 3)
    //     //     {
    //     //         for (auto y : s)
    //     //         {
    //     //             cout << y << " ";
    //     //         }
    //     //         cout << endl;
    //     //         break;
    //     //     }
    //     // }
    //     // else if (fun(b) and fun(c))
    //     // {
    //     //     set<int> s;
    //     //     s.insert(prime[i]);
    //     //     s.insert(c);
    //     //     s.insert(b);
    //     //     if (s.size() == 3)
    //     //     {
    //     //         for (auto y : s)
    //     //         {
    //     //             cout << y << " ";
    //     //         }
    //     //         cout << endl;
    //     //         break;
    //     //     }
    //     // }

    //     // if (a != prime[i] and check(a))
    //     // {
    //     //     int b = y ^ a;
    //     //     int c = z ^ a;
    //     //     if (check(b) and (prime[i] != b and a != b))
    //     //     {
    //     //         ans.pb(prime[i]);
    //     //         ans.pb(a);
    //     //         ans.pb(b);
    //     //         break;
    //     //     }
    //     //     else if (check(c) and prime[i] != c and c != a)
    //     //     {
    //     //         ans.pb(prime[i]);
    //     //         ans.pb(a);
    //     //         ans.pb(c);
    //     //         break;
    //     //     }
    //     // }
    // }

    sort(all(ans));

    for (auto y : ans)
        cout << y << " ";
    cout << endl;
}

signed main()

{
    IOS
        uint32_t test_case = 1;
    // seive();
    cin >> test_case;
    int __t = test_case;

    while (test_case--)
    {

        solve(__t - test_case);
    }
    return 0;
}