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

void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    fori(n) cin >> a[i];
    sort(all(a));
    unordered_map<int, int> m;
    fori(n)
    {
        m[a[i]]++;
    }
    int k = n / 2;
    for (int i = 1; i < n ; i++)
    {
       int x=a[i-1],y=a[i];
       int l=y%x;
       if(!k)return;
       if(m.count(l)==0)
       {
           cout<<y<<" "<<x<<endl;
           k--;
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