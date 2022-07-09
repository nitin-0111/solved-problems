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
const string yes = "YES", no = "NO";
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>

#define int int64_t

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n) cin >> v[i];
    vector<int> ans;
    // debug(v);
    sort(all(v));
    if (n & 1 == 0)
    {
        int i = 0, j = n - 1;
        while (i < j)
        {
            ans.pb(v[i]);
            ans.pb(v[j]);
            i++, j--;
        }
        rep(i, 0, n) cout << ans[i] << " ";
        cout << endl;

        return;
    }
    ans.assign(n,0);
    int k = 0;
    int mn = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        if (mn < abs(v[i] - v[i + 1]))
        {
            k = i;
            mn = abs(v[i] - v[i + 1]);
        }
    }
    // debug(k,v[k],v[k+1]);
    ans[0] = v[k];
    ans[n - 1] = v[k + 1];
    int i = 0, j = n - 1;

    int l=1;
    
     while(i<=j)
     {
        if(i==k)
        {
            i+=2;
            continue;
        }
         if(j==k+1)
        {
            j-=2;
            continue;
        }
        // debug(i,j,l,ans[l]);
         ans[l++]=v[i++];
         ans[l++]=v[j--];
     }
     ans[n-1]=v[k+1];
      rep(i, 0, n) cout << ans[i] << " ";
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