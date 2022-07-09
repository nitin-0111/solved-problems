#include <bits/stdc++.h>

using namespace std;
//#include<E:\Coding_and_Web\debug.cpp>

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
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

    string s;
    cin>>s;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    int n = s.size();
    
    if (m['N'] == 1 and m['E'] == n - 1)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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