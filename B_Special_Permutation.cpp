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

void solve()
{

    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n);
    v[0] = a, v[n - 1] = b;
    int k = n;
    for (int i = 1; i < n - 1; i++)
    {
        if (k == a || k == b)
        {
            k--;
            i--;
            continue;
        }
        v[i] = k;
        k--;
    }

    for (int i = 0; i < n; i++)
    {
        if (i < n / 2 and v[i] < a)
        {
            cout << -1 << endl;
            return;
        }
        else if (i >= n / 2 and v[i] > b)
        {
            cout << -1 << endl;
            return;
        }
    }
    fori(n) cout << v[i] << " ";
    cout << endl;
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