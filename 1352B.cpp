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

//#define int int64_t

void solve()
{

    int n, k;
    cin >> n >> k;
    if ((n & 1) and !(k & 1)) // n odd  k even
    {
        cout << "NO" << endl;
        return;
    }
    else if( n%2==0 and k&1 and n<2*k )
    {
        cout << "NO" << endl;
        return;
    }
    int r=2;
    int l=n;
    while(l%k!=0  and l>=0 )
    {
       l-=r;
       r+=2;

    }
    cout<<l<<" "<<r<<endl;

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