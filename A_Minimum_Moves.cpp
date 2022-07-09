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

#define int int64_t

void solve()
{

    int n;
    cin >> n;
    int even = 0, odd = 0;
   
    fori(n)
    {
        int t;
        cin >> t;
        if (t & 1)
        {
            odd++;
        }
        else
            even++;
    }
     if(n&1 )cout<<-1<<endl;
    else
    cout << (abs(odd - even)>>1) << endl;
}
// int n;
// cin>>n;
// if(n&1)
// {
//     cout<<-1<<endl;
// }


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