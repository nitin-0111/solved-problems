#include <bits/stdc++.h>

using namespace std;
#include <E:\Coding_and_Web\debug.cpp>

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
    vector<int>  a(n);
    fori(n) cin >> a[i];
    int k = 0;

    while (1)
    {
        int p = n - 1;
        int r = -1;
        int l = n - 2;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < a[p])
            {
                r++;
                swap(a[r], a[i]);
            }
        }

        if (r + 1 != p)
        {
           int j=r+1;
           int s=n-1;
           while(s!=j)
           {
                a[s]=a[s-1];
                s--;
           }
           debug(a,s);
           a[s]=a[n-1];
           k++;
        }
        else
        {
            cout << k << endl;
            return;
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