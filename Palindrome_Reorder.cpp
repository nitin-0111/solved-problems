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

// bool comp(pair<int, int> a, pair<int, int> b)
// {
//     return a.se > b.se;
// }

// void solve()
// {

//     string s;
//     cin >> s;
//     int n = s.size() - 1;
//     map<char, int> m;
//     vector<pair<int, int>> v(26, {0, 0});
//     for (int i = 0; i < n + 1; i++)
//     {
//         int j = s[i] - 'A';
//         int a = v[j].se;
//         a++;
//         v[j] = {j, a};
//     }
//     sort(all(v), comp);

//     int i = 0, j = n;
//     for (auto x : v)
//     {
//         char c = char(x.fi + 'A');
//         int a = x.se;
//         if (a == 0)
//         {
//             break;
//         }
//         while (a && (i <= n and j >= 0))
//         {
//             s[i] = c;
//             i++;
//             a--;
//             if (a > 0)
//             {
//                 s[j] = c;
//                 j--;
//                 a--;
//             }
//         }
//     }
//      i=0,j=n;
//     while(i<=j)
//     {
//         if(s[i]!=s[j])
//         {
//             cout<<"NO SOLUTION"<<endl;
//             return;
//         }
//         i++;
//         j--;
//     }
//     cout << s << endl;
// }

// int32_t main()
// {
//     IOS
//         uint32_t tt = 1;
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

#define int int64_t

void solve()
{

    string s;
    cin >> s;
    vector<int> m(26);
    int cnt = 0;
    rep(i, s.size())
    {
        m[s[i] - 'A']++;
    }
    int k=-1;
    rep(i, 26)
    {
        if (m[i] & 1)
        {
            cnt++;
            k = i;
        }
    }
    if (cnt > 1 || (s.size() & 1 == 0 and cnt > 0))
    {
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    // debug(s.size(),cnt,k);
    int r=0,l=s.size()-1;
    for(int i=0;i<26;i++)
    {
        if(i==k)
        continue;
        int t=m[i];
        char c=(char)(i+'A');

        while(t)
        {
            s[r]=c;
            s[l]=c;
            r++;
            l--;
            t-=2;

        }

    }
    // int 
        char c=(char)(k+'A');
    // debug(r,l,c);
    if(cnt==1 )
    {
        
        while(r!=l+1)
        {
            s[r++]=(char)(k+'A');
           
        }
    }
    cout<<s<<endl;
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