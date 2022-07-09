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

//#define int int64_t

void print(deque<int> q)
{
    for (auto x : q)
    {
        cout << x << " ";
    }
    cout << endl;
}

void solve()
{

    int n;
    cin >> n;
    deque<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;

        a.pb(x);
    }
    deque<int> t = a;
    for (int i = 0; i < n; i++)
    {
        int x = a.front(), y = a.back();
        if (x == y)
        {
            b.pb(x);
        }
        else if (x < y)
        {
            b.push_front(x);
            a.pop_front();
        }
        else
        {
            b.push_back(y);
            a.pop_back();
        }
    }
    deque<int> c, u = b;
    for (int i = 0; i < n; i++)
    {
        int x = b.front(), y = b.back();
        if (x == y)
        {
            if(x==t.front())
            {
                c.push_front(x);
            }
            else 
              c.pb(x);
        }
        else if (x < y)
        {
            c.push_front(x);
            b.pop_front();
        }
        else
        {
            c.push_back(y);
            b.pop_back();
        }
    }
    // debug(c);
    // cout<<"c"<<endl;
    // print(c);
    // // cout << endl;
    // // debug(t);
    // cout<<"t"<<endl;
    // print(t);

    // cout<<"u"<<endl;
    // print(u);
    if (c != t)
    {
        cout << -1 << endl;
        return;
    }
    for (auto x : u)
    {
        cout << x << " ";
    }
    cout << endl;
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