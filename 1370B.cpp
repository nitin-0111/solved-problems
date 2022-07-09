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

#define int int64_t

const int M = 1e4;
bitset<M> a;
vector<int> prime;
void seive()
{

    prime.push_back(2);
    a[2] = 1;
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

bool is_prime(int n)
{
    if (n == 1)
        return false;

    if (n == 2)
        return true;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{

    int n;
    cin >> n;
    vector<int> v(2 * n);
    rep(i, 2 * n)
            cin >>
        v[i];
    //   set<pair<int,int> > s;
    // int b[n-1][2];
    vector<pair<int, int>> b;
    unordered_map<int, int> map;
    int cnt = n - 1;
    rep(i, 2 * n)
    {
        for (int j = i + 1; j < 2 * n; j++)
        {
            int x = v[i] + v[j];

            if (!cnt)
            {
               for(auto  u: b)
               {
                   cout<<u.fi<<" "<<u.se<<endl;
               }
               return;
            }
            if (map[j]||map[i])
                continue;
            if (!is_prime(x))
            {
                b.pb({i+1, j+1});
                map[j] = 1;
                map[i]=1;
                cnt--;
                continue;
            }
        }
    }
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

