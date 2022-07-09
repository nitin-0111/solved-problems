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
bool cmp1(pair<int, int> a, pair<int, int> b)
{
    return (a.se - a.fi) < (b.se - b.fi);
}

void solve()
{
    vector<pair<int, int>> v(3);

    int ma = 0;

    int k = -1;
    int sum = 0;
    fori(3)
    {
        cin >> v[i].fi;
        sum += v[i].fi;
    }

   

    int total = 0;
    fori(3)
    {
        cin >> v[i].se;
        total += v[i].se;
    }
   
    sort(all(v), cmp1);
    sum -= v[2].fi;
    sum += v[2].se;
    sum *= 2;
    if (sum > total)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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