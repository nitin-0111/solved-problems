// #include <bits/stdc++.h>

// using namespace std;
// //#include<E:\Coding_and_Web\debug.cpp>

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ll long long
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

// void solve()
// {

//     int u, v;
//     cin >> u >> v;

//     int x = -pow(u, 2), y = pow(v, 2);
//     cout << x << " " << y << endl;
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
#define mod 1000000007

#define cmp [](const auto &l, const auto &r) { return l > r; }
#define all(v) v.begin(), v.end()
#define ull uint64_t
#define fi first
#define se second

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

//#define int  int64_t

bool isPalindrome(string s)
{
    string a;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int c = s[i] - '\0';
        // cout<<c<<endl;
        if (c < 65 || c > 90 and c < 97 || c > 122)
        {
            continue;
        }
        else if (c > 96 and c < 123)
        {
            a += s[i];
        }
        else
        {
            c -= 65;
            c += 97;
            a += (char)c;
        }
    }
    n = a.size();
    cout << a << endl;
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int32_t main()
{
    IOS
            cout
        << isPalindrome("A man, a plan, a canal: Panama");

    return 0;
}