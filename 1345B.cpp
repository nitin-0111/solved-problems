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

int sum(int n)
{
    int k = n * (n + 1);
    return k / 2;
}

vector<int> p;
void fun()
{
    int n = (int)1e9;
    // p.pb(0);
    for(int h=1;(h*h)<=n;h++)
     {
        int k= 3*(h*h) +h;
        k/=2;
        if(k>n)
        {
            break;
        }
        p.pb(k);

     }
    // cout<<p.size()<<endl;
    // cout<<endl;
    
}

void solve()
{
    int n;
    cin >> n;
    int m = p.size();
    int cnt = 0;
    for (int i = m - 1; i >= 0; i--)
    {
        if (n < 2)
        {
            break;
        }
        if (n >= p[i])
        {
            cnt++;
            // cout<<p[i]<<endl;
            n -= p[i];
        }
    }
    cout << cnt << endl;
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