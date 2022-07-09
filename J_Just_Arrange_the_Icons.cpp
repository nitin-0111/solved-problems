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
    map<int, int> m;
bool is_possible(int mid)
{
    for(auto x:m)
    {
        if(x.se%mid==0 ||(x.se+1)%mid==0)
        {
            continue;
        }
        else
        return false;
    }
    return true;
}

void solve()
{

    int n;
    cin >> n;

    rep(i, n)
    {
        int x;
        cin>>x;
        m[x]++;
    }
    int mn = INT_MAX;
    int mx = INT_MIN;
    for (auto x : m)
    {

        mn = min(x.se, mn);
        mx = max(x.se, mx);
    }
  int i=mn,j=mx;
  int ans=2;
//   debug(mx,mn);
 for(int i=mx;i>=2;i--)
 {
     if(is_possible(i))
     {
         ans=i;
         break;
     }
 }
 int res=0;
 for(auto x:m)
 {
    res+=(x.se+ans-1)/ans;
   
 }
 cout<<res<<endl;
 m.clear();

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