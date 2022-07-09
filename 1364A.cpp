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

//#define int int64_t

void solve()
{

    int n, x;
    cin >> n >> x;
    vector<int> a(n + 1);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int i = 1, j = n;
    int cnt = n;
    while (i <= j)
    {
        debug(i,j);
        if (sum % x != 0)
        {
            break;
        }
        if (a[i] % x != 0)
        {
            sum -= a[i];
            i++;
            cnt--;
        }
        else if (a[j] % x != 0)
        {
            sum -= a[j];
            j--;
            cnt--;
        }
        else

        {
            sum -= (a[i] + a[j]);
            i++;
            j--;
            cnt -= 2;
        }
    }
    if(cnt==0)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<cnt<<endl;
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