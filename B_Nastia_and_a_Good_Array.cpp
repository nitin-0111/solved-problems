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

#define int int64_t

const int M = 1e7 + 5;
bitset<M> a;
vector<int> prime;
void primeSieve()
{

    prime.push_back(2);

    for (int i = 3; i <= M; i += 2)
    {
        a[i] = 1;
    }

    for (int i = 3; i * i <= M; i += 2)
    {
        if (a[i])
        {
            prime.push_back(i);

            for (int j = i * i; j <= M; j += 2 * i)
            {
                a[j] = 0;
            }
        }
    }
}

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);
    int mx = INT_MAX;
    int pos = 0;
    rep(i, 0, n)
    {
        cin >> v[i];
        if (mx > v[i])
        {
            mx = v[i];
            pos = i;
        }
        mx = min(v[i], mx);
    }
    for (int i = 0; i < n; i++)
    {
        if(i>0 and __gcd(v[i],v[i+1])==1)
        
        v[i] = mx + abs(i-pos);

    }

    // debug(v);
    cout << ans.size() << endl;
    if (ans.size() > 0)
        for (int i = 0; i < ans.size(); i++)
        {
            for (auto a : ans[i])
            {
                cout << a << " ";
            }
            cout << endl;
        }
}

signed main()

{
    IOS
        uint32_t test_case;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif
    // primeSieve();
    cin >> test_case;

    while (test_case--)
    {

        solve();
    }
    return 0;
}