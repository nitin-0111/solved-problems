#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include <D:\Coding_and_Web\debug.cpp>

#else // online submission

#endif

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(v) v.begin(), v.end()
#define uniq(v) v.erase(unique(all(v)), v.end())
#define sz(x) (int)((x).size())
#define ll long long
#define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t
#define cmp [](const auto &l, const auto &r) { return l > r; }
#define fi first
#define se second
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

#define pb push_back
#define vi vector<int>

#define int int64_t

void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    sort(all(a));
    int cnt = 1;
    int mx = 0;
    rep(i, 1, n)
    {
        if (a[i] == a[i - 1])
            cnt++;
        else
        {
            mx = max(mx, cnt);
            cnt = 1;
        }
    }
    if(cnt)mx=max(cnt,mx);
    // debug(mx);

    int k=n-mx;
    int ans=0;
    while(k>0 && mx<n)
    {
        ans++;
        if(k<mx)
        {
            ans+=k;
            break;
        }
        k-=mx;
        ans+=mx;
        mx*=2;
    }
    cout<<ans<<endl;
}

signed main()

{
    IOS
        uint32_t test_case;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif

    cin >> test_case;
    while (test_case--)
    {

        solve();
    }
    return 0;
}