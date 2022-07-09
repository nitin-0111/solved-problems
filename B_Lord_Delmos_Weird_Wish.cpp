#include <bits/stdc++.h>

using namespace std;
//#include<E:\Coding_and_Web\debug.cpp>

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define eps 1e-6
#define mod 1000000007

#define cmp [](const auto &l, const auto &r) { return l > r; }
#define all(v) v.begin(), v.end()
#define ull uint64_t
#define fi first
#define se second

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

#define int int64_t

int32_t main()
{
    IOS

        int n;
    cin >> n;
    int a[2 * n];

    fori(2 * n)
    {
        cin >> a[i];
    }
    sort(a,a+2*n);
    int x = accumulate(a, a + n, 0);
    int y = accumulate(a + n, a + 2 * n, 0);
    int i = 0, j = 2 * n - 1;
    while (x == y and i < j)
    {
        if (a[i] != a[j])
        {
            swap(a[i], a[j]);
            x += a[j] - a[i];
            y += a[i] - a[j];
            if (x != y)
            {

                for (int k = 0; k < 2 * n; k++)
                {
                    cout << a[k] << " ";
                }
                cout << endl;
                return 0;
            }
        }
        i++;
        j--;
    }
    if (x == y)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int k = 0; k < 2 * n; k++)
        {
            cout << a[k] << " ";
        }
        cout << endl;
    }
    return 0;
}