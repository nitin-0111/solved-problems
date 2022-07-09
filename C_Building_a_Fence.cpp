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
    vector<int> v(n);
    rep(i, n)
    {
        cin >> v[i];
    }
    int l = k, r = 2 * k - 1;
    if (abs(v[0] + l - (v[1] + l)) >= k && abs(v[0] + l - (v[1] + r)) >= k)
    {
        cout << "NO" << endl;
        return;
    }
    if (abs(v[n - 1] + l - (v[n - 2] + l)) >= k and abs(v[n - 1] + l - (v[n - 2] + r)) >= k)
    {
        cout << "No" << endl;
        return;
    }
    for (int i = 2; i < n - 1; i++)
    {
        vector<int> a(2);
        a[0] = v[i - 1] + l;
        a[1] = v[i - 1] + r;
        int b[2] = {v[i] + l, v[i] + r};
        bool flag=true;
        for (int m = 0; m < 2; m++)
        {
            for (int j = 0; j < 2; j++)
            {
                if(abs(b[m]-a[j])<=k-1)
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
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