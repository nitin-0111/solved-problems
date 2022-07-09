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

    int a[3];
    int sum = 0;
    int j;
    vector<int> odd, even;
    fori(3)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] & 1)
        {
            odd.pb(a[i]);
        }
        else
            even.pb(a[i]);
    }
    if (sum & 1)
    {
        cout << "NO" << endl;
        return;
    }
    sort(a, a + 3);
    bool check = false;
    if (a[0] + a[1] == a[2])
        check = true;
    else if (a[0] == a[1] && a[2] % 2 == 0)
        check = true;

    else if (a[1] == a[2] && a[0] % 2 == 0)
        check = true;
    else
        check = false;

    if (check)
    {
        cout << "YES" << endl;
        return;
    }
    else
        cout << "NO" << endl;
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