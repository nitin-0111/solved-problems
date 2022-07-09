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

void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    fori(n) cin >> a[i];
    sort(all(a));
    int ans;
    int r = 1, l = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[0])
            r++;
        if (a[n - i - 1] == a[n - 1])
            l++;
    }
    //    cout<<r<<" "<<l<<endl;
    if (r + l > n)
    {
        r = n / 2;
        l = n - r;
    }
    //    cout<<r<<" "<<l<<endl;
    if (a[n - 1] == a[0])
    {
        int k = n - 1;
        ans = (k * (k + 1)) / 2;
    }
    else
        ans = l * r;
    cout << a[n - 1] - a[0] << " ";

    cout << ans << endl;
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