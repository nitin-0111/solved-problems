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

    int w, h;
    cin >> w >> h;
    int a[4];

    for (int j = 0; j < 4; j++)
    {
        int k;
        cin >> k;
        int t;
        for (int i = 0; i < k; i++)
        {
            int tmp;
            cin >> tmp;
            if (!i)
                t = tmp;
            if (i == k - 1)
            {
                a[j] = tmp - t;
            }
        }
    }

    int ans = max(h * max(a[1], a[0]), w * max(a[3], a[2]));
    cout << ans << endl;
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