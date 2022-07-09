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
vector<int> a;

bool fun(int i, int j, int x)
{
    if (i >= j)
        return true;
    // cout << i << " " << a[i] << " " << j << " " << a[j] << endl;

    while (i <= j)
    {
        if (a[i] == a[j])
        {
            i++, j--;
            continue;
        }
        if (x != 0)
        {

            if (a[i] == x and (a[i + 1] == a[j] || a[i + 1] == x))
            {
                i++;
                continue;
            }
            else if (a[j] == x and (a[j - 1] == a[i] || a[j - 1] == x))
            {
                j--;
                continue;
            }
            else
            {
                return false;
            }
        }
        else if (x == 0)
        {
            bool ch1 = fun(i + 1, j, a[i]), ch2=true;
            if (!ch1)
            {
                ch2 = fun(i, j - 1, a[j]);
            }
            if (!ch1 and !ch2)
                return false;
            else
                return true;
        }
    }
    return true;
}

void solve()
{

    int n;
    cin >> n;
    a.assign(n, 0);
    fori(n) cin >> a[i];
    if (fun(0, n - 1, 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    a.clear();
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