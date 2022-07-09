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

        int n,
        m;
    cin >> n >> m;
    int a[n][m];
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int ma = INT_MIN, k = -1;
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];

            if (ma < a[i][j])
            {
                ma = a[i][j];
                k = j;
            }
        }
        for (int l = 0; l < m; l++)
        {
            if (k != -1 and a[i][l] == a[i][k])
            {
                s.insert(l);
            }
        }
    }
    cout << s.size() << endl;
    return 0;
}