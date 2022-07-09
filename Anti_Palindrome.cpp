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

// template <typename T1, typename T2>
// struct less_second
// {
//     typedef pair<T1, T2> type;
//     bool operator()(type const &a, type const &b) const
//     {
//         return a.se < b.se;
//     }
// };

// void solve()
// {

//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     vector<int> a;
//     map<string, int> mp;
//     if (n & 1)
//     {
//         cout << "NO" << endl;
//         return;
//     }

//     fori(n)
//     {
//         mp[s[i]]++;
//     }
//     string ans;
//     sort(mp.begin(), mp.end(), less_second<string, int>());
//     for (auto x : mp)
//     {
//         while (x.se--)
//         {
//             ans += x.fi;
//         }
//     }
//     int i = 0, j = n - 1;
//     while (i < j)
//     {
//         if (s[i] != s[j])
//         {
//             i++;
//             j--;
//             continue;
//         }
//         cout << "NO" << endl;
//         return;
//     }
//     cout << "YES" << endl;
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

bool cmp1(pair<int, int> a, pair<int, int> b)
{
    return a.fi < b.fi;
}

void solve()
{

    int n;
    string s;
    cin >> n;
    cin >> s;
    if (n & 1)
    {
        cout << "NO" << endl;
        return;
    }
    vector<pair<int, int>> a(26, {0, 0});
    fori(n)
    {
        int j = s[i] - 'a';
        a[j] = {a[j].fi + 1, j};
    }
    sort(all(a), cmp1);
    string ans;
    if (2 * a[25].fi > n)
    {
        cout << "NO" << endl;
        return;
    }
    fori(26)
    {
        if (a[i].fi == 0)
            continue;
        while (a[i].fi--)
        {
            char c = (char)(a[i].se + 'a');
            ans += c;
        }
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (ans[i] != ans[j])
        {
            i++;
            j--;
            continue;
        }
        if (ans[i] == ans[j])
        {
            if (i > 0 and ans[i - 1] != ans[i])
            {
                swap(ans[i], ans[i - 1]);
            }
            else if (j < n - 1 and ans[j - 1] != ans[j])
            {
                swap(ans[j], ans[j + 1]);
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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