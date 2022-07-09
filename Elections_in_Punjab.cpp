#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define eps 1e-6

#define mod 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int>
#define int ll

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.fi + a.se - 2 * b.fi == b.fi + b.se - 2 * a.fi)
    {

        return a.fi > b.fi;
    }
    return a.fi + a.se -  b.fi > b.fi + b.se - a.fi;
}
bool comp1(pair<int, int> a, pair<int, int> b)
{
    return a.fi > b.fi;
}

int32_t main()
{
    IOS

        int n;
    cin >> n;
    pair<int, int> a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].fi >> a[i].se;
        sum += a[i].fi;
    }
    // sort(a,a+n,comp1);
    sort(a, a + n, comp);
    int csum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum < csum)
        {
            break;
        }
        csum += (a[i].fi + a[i].se);
        sum -= (a[i].fi);
        ++cnt;
    }
    cout << cnt << endl;

    return 0;
}