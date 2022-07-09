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
    return a.fi > b.fi;
}

void solve()
{

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    fori(n)
    {
        cin >> v[i].fi;
        v[i].se = i;
    }
    sort(all(v), cmp1);
    vector<int> a(n + 1);
    a[0] = 0;
    int ans = 0;
    int k = 1;
    fori(n)
    {
        ans += 2 * (abs(k) * v[i].fi);
        if (k < 0)
        {
            a[v[i].se + 1] = k;
            k = -k+1;
            
        }
        else
        {
            a[v[i].se + 1] = k;
            k = -k;
        }

    }
    

    cout << ans << endl;
    fori(n + 1) cout << a[i] << " ";
    cout << endl;
    v.clear();
    a.clear();
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