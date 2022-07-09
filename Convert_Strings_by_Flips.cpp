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

int32_t main()
{
    IOS

        int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        const int M = 1e3;
        string x, y;
        cin >> x >> y;

        bitset<M> a(x), b(y), c;
        vector<pair<int, int>> points;
        bool check = true;
        // int cnt=0;
        if (x == y)
        {
            check = false;
            // cout << "y" << endl;
            cout << 0 << endl;
            continue;
        }
        while ((a ^ b) != 0)
        {
            c = a ^ b;
            int e = 0;
            int s = 0;
            int k = n;
            while (c.any())
            {
                if (!e && (c[0]))
                {
                    e = k;
                }
                c = c >> 1;
                if (!c.any())
                {
                    s = k;
                }
                k--;
            }
            if (e - s + 1 == n)
            {
                check = false;
                cout << -1 << endl;
                break;
            }
            points.pb({s, e});
            for (int i = n - e; i <= n - s; i++)
            {
                a[i] = a[i] == 0 ? 1 : 0;
            }
        }
        if (check)
        {
            int m = points.size();
            if (m >= n)
            {
                cout << -1 << endl;
                continue;
            }
            else
            {
                cout << points.size() << endl;
                for (int i = 0; i < points.size(); i++)
                {
                    cout << points[i].fi << " " << points[i].se << endl;
                }
            }
        }
    }
    return 0;
}