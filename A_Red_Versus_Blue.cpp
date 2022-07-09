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

    int n, r, b;


    // not working
    cin >> n >> r >> b;
    int k = (r + b) / (b + 1);
    string s = "";
    int i = 0, j = 0;
    int cntr = 0, cntb = 0;
    for (int i = 0; i < n; i++)
    {
        int k=(n-i)/(b-cntb+1);
        if(k<=0)
        k=1;
        
        for (int j = 0; cntr < r and j < k and i < n; j++, i++)
        {
            if (cntr > r)
                break;
            s += "R";
            cntr++;
        }
        if (i < n and cntb < b)
        {
            s += "B";
            cntb++;
        }
    }
    // if (cntb < b)
    // {
    //     int l = b - cntb;
    //     while (l--)
    //     {
    //         /* code */
    //         s += "B";
    //     }
    // }
  
    cout << s << endl;
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