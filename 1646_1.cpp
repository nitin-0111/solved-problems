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
#define ull uint64_t

#define cmp [](const auto &l, const auto &r) { return l > r; }
#define all(v) v.begin(), v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

#define int int64_t

const ll N = (int)1e12;
vector<int> fac(100);
int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;

    if (fac[n] != 0)
    {
        return fac[n];
    }
    return fac[n] = n * fact(n - 1);
}

unordered_map<int, int> m;
void fun()
{
    // set<int> s;
    int k = 2;
    for (int i = 1; i <= N;)
    {
        m[i] = 1;
        i = fact(k);
        k++;
    }
}

void solve()
{
    int n;
    cin >> n;
    if ((n & (n - 1)) == 0)
    {
        cout << 1 << endl;
        return;
    }
    else if (m.count(n) > 0)
    {
        cout << 1 << endl;
        return;
    }
    int ans = __builtin_popcountll(n);
    bitset<64> a(n);
    cout << a << endl;
    int k = n;

    for (int i = 0; i < 64; i++)
    {
        int r = 0, l = 0;
        for (int j = i; j < 64; j++)
        {
            if (!r and k & (1LL << j))
            {
                r = j;
            }
            if (k & (1LL << j))
            {
                l += (1LL << j);
                if (m[l] == 1)
                {
                    ans = min(ans, ans - (j - r));
                }
            }
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    IOS
        uint32_t tt;
    fun();
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}