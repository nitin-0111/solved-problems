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

int n, k;
vector<int> diff;

bool ispossible(int mid)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (mid <= diff[i])
        {
            ans += mid;
        }
        else
        {
            ans += diff[i];
        }
    }
    if (k <= ans)
        return true;
    else
        return false;
}

void solve()
{
    cin >> n >> k;
    int a[n];
    diff.assign(n, 0);
    fori(n)
    {
        cin >> a[i];
    }
    fori(n - 1)
    {
        int t  = a[i + 1] - a[i];
        if(t>k)
        diff[i]=k;
        else
        {
            diff[i]=t;
        }
    }
    diff[n - 1] = k;
    int s = 1, e = k;
    int ans = s;
    while (s <= e)
    {
        int mid=(s+e)>>1;
        if(ispossible(mid))
        {
            ans=mid;
            e=mid-1;

        }
        else
        s=mid+1;
    }
    cout<<ans<<endl;
    diff.clear();
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