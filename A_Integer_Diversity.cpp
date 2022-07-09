#include <bits/stdc++.h>

using namespace std;
// #include<E:\Coding_and_Web\debug.cpp>

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

    int n;
    cin >> n;
  map<int, int> m;
    vector<int> v(n, 0);
    fori(n)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    if (n == m.size())
    {
        cout << n << endl;
        return;
    }
    int a=m.size();
    // for(x)
    for(auto x:m)
    {
        // debug(x);
        // cout<<x.fi<<" "<<x.se<<endl;
        if(x.se>=2 and x.fi!=0 and m[-x.fi]==0)
        {
            a++;
        }
    }
    cout<<a<<endl;
    m.clear();
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