#include <bits/stdc++.h>

using namespace std;
//#include<E:\Coding_and_Web\debug.cpp>

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define eps 1e-6
#define mod 1000000007

#define cmp [](const auto &l, const auto &r) { return l > r; }
#define all(v) v.begin(), v.end()
#define ull uint64_t
#define fi first
#define se second

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

#define int int64_t
#define _print(a)         \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl;

int32_t main()
{
    IOS

        int n,
        r;
    cin >> n >> r;
    vector<int> a(n);
    vector<int> v;
    fori(n)
    {
        cin >> a[i];
        if (r != 1 and a[i] == 1 || a[i] % r == 0)
        {
            v.pb(a[i]);
        }
    }

    int ans = 0;
    if (r == 1)
    {
        sort(all(a));
        int cnt = 1;

        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] == a[i])
            {
                cnt++;
            }
            else
            {
                if (cnt >= 3)
                {
                    ans ++;
                }
                cnt = 1;
            }
        }
        if (cnt >= 3)
        {
            ans ++;
        }
        
        cout << ans << endl;
    }
    else
    {
        sort(all(v));
        int cnt = 1;
        for (int i = 1; i < v.size(); i++)
        {
            if ((ll)(v[i - 1] * r) == v[i])
            {
                cnt++;
            }
            else
            {
                if (cnt >= 3)
                {
                    ans += (cnt - 3) + 1;
                }
                cnt = 1;
            }
        }
        if (cnt >= 3)
        {
            ans += (cnt - 3) + 1;
        }
        cout << ans << endl;
    }

    return 0;
}