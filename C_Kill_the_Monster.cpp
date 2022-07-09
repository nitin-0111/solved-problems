#include <bits/stdc++.h>

using namespace std;
// #include <E:\Coding_and_Web\debug.cpp>

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

    int hc, dc, hm, dm, c, a, w;
    cin >> hc >> dc >> hm >> dm;
    cin >> c >> w >> a;

  

    for (int i = 0; i <= c; i++)
    {

        int p = (dc + i * w);
        int r=hc;
        hc+=(c-i)*a;
        int k;
        k = ceil ((1.0)*hm / p);
        int l=ceil((1.0)*hc/dm);
        // cout<<k<<l<<endl;
        if(k<=l)
        {
            cout<<"YES"<<endl;
            return;
        }
        hc=r;
       
        // if ( hc > dm * (k - 1) || (hc + (c - i) * a) > dm * (k - 1))
        // {
        //     debug(k, i, c - i,p);
        //     cout << "YES" << endl;
        //     return;
        // }
        // int j = c - i;

        // if ((hc + j * a) > dm * (k - 1))
        // {

        //     cout << "YES" << endl;
        //     return;
        // }

        // cout<<i<<endl;
    }
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