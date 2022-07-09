#include <bits/stdc++.h>

using namespace std;
//#include<E:\Coding_and_Web\debug.cpp>

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

    string a, b;
    cin >> a >> b;
    int n = b.size(), m = a.size();
    string ans;
    for (int i = n - 1, j = m - 1; i >= 0; i--, j--)
    {
        if (i < j)
        {
            cout << -1 << endl;
            return;
        }
        if (j < 0 and i >= 0)
        {
            ans = a.substr(0, i + 1) + ans;
            // cout<<ans<<endl;
            break;
        }
        if (b[i] >= a[j])
        {
            int k = (b[i] - '0') - (a[j] - '0');
            // cout<<k<<endl;
            ans = to_string(k) + ans;
            continue;
        }
        else
        {
            if (i > 0)
            {
                int l = 10 * (b[i - 1] - '0') + (b[i] - '0');
                if (l > 19)
                {
                    cout << -1 << endl;
                    return;
                }
                int k = l - (a[j] - '0');
                if (k < 0)
                {
                    cout << -1 << endl;
                    return;
                }
                ans = to_string(k) + ans;
                i--;
                continue;
            }
        }
    }
    int j = 0;
    fori(ans.size())
    {
        if (ans[i] == '0')
        {
            j++;
        }
        else
            break;
    }
    ans = ans.substr(j);
    cout << ans << endl;
}

int32_t main()
{
    IOS 
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
