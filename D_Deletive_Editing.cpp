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

    string s, p;
    cin >> s >> p;
    int n = p.size(), m = s.size();
    int k = m - 1;
    int a[26];
    mem1(a);
    // debug(s,p);
    for(int j=n-1;j>=0;j--)
    {
        int i=(int)(p[j]-'A');
        if(a[i]==-1)a[i]=j;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int r = a[(int)(p[i] - 'A')];
        if (r != -1)
            k = (r - 1) > 0 ? r - 1 : 0;


            int j;
        for (j = k; j >= 0; j--)
        {
            if (p[i] == s[j])
            {
                k = j;
                a[(int)s[j] - 'a'] = j;
                break;
            }
        }
        // debug(k,i,j);
        if (k == 0 and i > 0|| j==0 and i>0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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