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

bool sq(int k)
{
    if(ceil((double)sqrt(k))==floor((double)sqrt(k)))
    {
        return true;
    }
    return false;
}
void solve()
{

    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (n % 2 == 0 || n % 4 == 0)
    {
        int k = n / 2;

        if (sq(k))
        {
            cout << "YES" << endl;
        }
        else if (k % 2 == 0)
        {
            if (sq(k / 2))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
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