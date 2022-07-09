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

//#define int int64_t

void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, j = 1;
    string ans;
    if (n == 1)
    {
        ans = s;
        ans += ans;
        cout << ans << endl;
        return;
    }
    while (j < n)
    {
        if (s[0] <= s[j] || s[j - 1] < s[j])
        {
            string t = s.substr(0, j);
            ans = t;
            reverse(all(t));
            ans = ans + t;
            cout << ans << endl;
            return;
        }
        if (s[0] > s[j] and (j == 1 || s[j - 1] >= s[j]))
        {
            j++;
        }
    }
    string t = s.substr(0, j);
    ans = t;
    reverse(all(t));
    ans = ans + t;
    cout << ans << endl;
    return;
}

int32_t main()
{
    IOS int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}