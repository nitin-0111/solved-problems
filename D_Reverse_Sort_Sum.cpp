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
#define prDouble(x) cout << fixed << setprecision(10) << x
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>

#define int int64_t

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n + 1), a(n + 1, 0);
    rep(i, 1, n + 1) cin >> v[i];

    int mx = n;
    int k = n;
    bool flag = false;
    for (int i = n, j = 1; i >= 1; i--, j++)
    {
        if (v[i] == 0)
        {
            flag = true;
            break;
        }
        if (v[i] > j )
        {
            a[i] = 1;
        }
        else if (v[i] == j)
        {
            a[i] = 0;
        }
        else if (v[i] < j)
        {
            k = i;
            mx = v[i + 1];
            a[i] = 0;
            break;
        }
    }
    if (!flag)
    {
        for (int i = k - 1, j = n + 1 - k; i >= 1; i--, j++)
        {
            if (v[i] >= mx || v[i] >= j)
                a[i] = 1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i])break;
        else if(v[i+1]>0){
            a[i+1]=1;
            break;
        }
    }
    if (v[1] >= 1)
        a[1] = 1;
    rep(i, 1, n + 1) cout << a[i] << " ";
    cout << endl;
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