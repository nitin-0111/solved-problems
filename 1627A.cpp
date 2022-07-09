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

void solve()
{

    int n, m, r, c;
    cin >> n >> m >> r >> c;
    char a[n][m];
    unordered_map<int  ,int> mx,my,mz;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(a[i][j]=='B')
            {
            //    mx[{i,j}]=1;
               mz[i]=1;
               my[j]=1;
            }
        }
    }
    if(mz.size()==0)
    {
        cout<<-1<<endl;
        return;
    }
    if(a[r][c]=='B')
    {
        cout<<0<<endl;
        return;
    }
    
   if(my[r] ||mz[c])
   {cout<<1<<endl;}
    else 
    {
        cout<<2<<endl;
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