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
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int n;
void fun(vector<vector<int>> &a, int i, int j, int v)
{
    if (i >= n || j >= n || i < 0 || j < 0)
    {
        return;
    }
    if (a[i][j] == 0)
        return;
    for (int k = 0; k < 4; k++)
    {
        int x = i + dx[k], y = j + dy[k];
        if (a[x][y] == 0)
        {
            continue;
        }
        else if (abs(v - a[x][y]) == 1)
        {
            fun(a, i, j, (v + 1) % (n * n));
        }
    }
    a[i][j] = v;
    fun(a, i + 1, j, (v + 2) % (n * n));
}

void solve()
{

    // int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));
    if (n == 1)
    {
        cout << n << endl;
        return;
    }
    else if (n == 2)
    {
        cout << -1 << endl;
        return;
    }
    // fun(a, 0, 0, 1);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int r = 1,l;
    if ((n * n) % 2 == 0)
    {
        l = (n * n) / 2 + 1;
    }
    else
        l = (n * n) / 2 + 2;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (k == 1)
            {
                a[i][j] = r;
                k = 1 - k;
                r++;
            }
            else
            {
                a[i][j] = l;
                l++;
                k = 1 - k;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
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