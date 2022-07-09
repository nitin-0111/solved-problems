#include <bits/stdc++.h>

using namespace std;
// #include <E:\Coding_and_Web\debug.cpp>

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

void solve()
{

    int n;

    cin >> n;
    if (n % 25 == 0)
    {
        cout << 0 << endl;
        
        return;
    }
    int t = n;
    vector<int> b;
    while (t)
    {
        int i = t % 10;

        b.pb(i);
        t /= 10;
    }
    reverse(all(b));
    int k = 2;
    int ans = 32;
    while (k--)
    {
        bool check = false;
        // debug(k,5*k);
        vector<int> a=b;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            
            if (a[i] == (5 * k) and !check)
            {
                // t = a[i];
                // debug(a[i],k);
                check = true;
                continue;
            }
            else if (!check)
            {
                a[i] = -1;
                continue;
            }
            else if (check)
            {
                if (k == 1 and (a[i] == 2 || a[i] == 7))
                {
                    break;
                }
                else if (k == 0 and (a[i] == 0 || a[i] == 5))
                {
                    break;
                }
                else
                    a[i] = -1;
            }
        }

        int cnt = 0;
        fori(a.size())
        {
            // cout<<a[i]<<" ";
            if (a[i] == -1)
                cnt++;
        }
        // cout<<endl;
        ans = min(cnt, ans);
    }
    cout << ans << endl;
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