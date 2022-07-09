#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE

#include <D:\Coding_and_Web\debug.cpp>

#else // online submission

#endif

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define eps 1e-6

#define mod 1000000007

#define pi (3.141592653589)

#define ull uint64_t

#define cmp [](const auto &l, const auto &r) { return l > r; }

#define all(v) v.begin(), v.end()
#define fi first
#define se second
#define rep(i, n) for (int i = 0; i < n; i++)

#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

//#define int int64_t

void fun(int zeros, int &a, int &b)
{
    a = 0, b = 0;
    int k = 0;
    while (zeros)
    {
        if (!k)
        {
            if (zeros >= 2)
            {
                a += 2;
                zeros -= 2;
            }
            else{
                a+=zeros;
                zeros=0;
            }
            k = 1 - k;
        }
        else
        {
            b+=1;
            zeros-=1;
            k=1-k;
        }
    }
}

void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    int zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zeros++;
    }
    int a = 0, b = 0;
    // int k = 0;
    // if (zeros & 1)
    // {
    //     a = 1;
    //     k = 1 - k;
    //     zeros--;
    // }
    // while (zeros)
    // {
    //     if (!k)
    //     {
    //         a += 2;
    //         k = 1 - k;
    //     }
    //     else
    //     {
    //         b += 2;
    //         k = 1 - k;
    //     }
    //     zeros -= 2;
    // }
    if(zeros&1)
    {
        fun(zeros-1,b,a);
        a+=1;

    }
    else
    {
        fun(zeros,a,b);
    }
    if (a < b)
    {
        cout << "ALICE" << endl;
    }
    else if (a > b)
        cout << "BOB" << endl;
    else
        cout << "DRAW" << endl;
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
