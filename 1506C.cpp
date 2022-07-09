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
int dp[20][20];
int fun(string a, string b,int i,int j)
{
    int k = a.find(b);
    if (b.size()==0)
    {
        return a.size();
    }
    if (k != -1)
    {
        return a.size() - b.size();
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    int l=fun(a,b.substr(0,b.size()-1),i,j-1),
      r=fun(a,b.substr(1,b.size()-1),i+1,j);
    

    return  dp[i][j]= min(l,r)+1;
}

void solve()
{

    string a, b;
    cin >> a >> b;
    if (a.size() < b.size())
    {
        swap(a, b);
    }
    int i = 0, j = b.size() - 1;
    int ans = 0;
    memset(dp,-1,sizeof(dp));
    cout<<fun(a,b,0,b.size()-1)<<endl;

    // while (i <= j)
    // {
    //     int k = a.find(b);
    //     if (k != -1)
    //     {
    //         ans += a.size() - b.size();
    //     }
    // }
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