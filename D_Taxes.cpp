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

#define int int64_t

bool is_prime(int n)
{
    if(n==1)return false;

    if(n==2)return true;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
void solve()
{

    int n;
    cin >> n;
    
    if(is_prime(n))
    {
        cout<<1<<endl;
        return;
    }

   
    if (n % 2)
    {
        if(is_prime(n-2))
        {
            cout<<2<<endl;
        }
        else
        cout << 3 << endl;
        return;
    }
    cout << 2 << endl;
}

int32_t main()

{
    IOS
        uint32_t tt = 1;

    while (tt--)
    {

        solve();
    }
    return 0;
}