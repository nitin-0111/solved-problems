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
    int a[n];
    fori(n) cin >> a[i];
   int ans=-1;
    for (int i = 0; i < n; i++)
    {
        int rem = 0;
        int m = 0;
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            int r = a[j];
            while (r % 2 == 0)
            {
                m++;
                r /= 2;
            }
            rem += r;
        }
        int t=a[i]*pow(2,m) +rem;
        ans=max(ans,t);

    }
    cout<<ans<<endl;
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