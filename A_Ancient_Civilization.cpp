#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
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

    int n, m;
    cin >> n >> m;
    vector<vector<int>> cnt(n, vector<int>(m, 0));
    fori(n)
    {
        ll x;
        cin >> x;

        for (int j = m - 1; j >= 0; j--)
        {
            if (x & 1)
            {
                cnt[i][j]++;
            }
            if (i > 0)
            {
                cnt[i][j] += cnt[i - 1][j];
            }
            x = x >> 1;
        }
    }

    
   ll ans=0;
   int j=0;
   for(int i=m-1;i>=0;i--)
   {
    //    cout<<cnt[n-1][i]<<" ";
       if(cnt[n-1][i]>n/2)
       {
           ans+=1<<j;
       }
       j++;
   }
//    cout<<endl;
  cout<<ans<<endl;
}

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