#include <bits/stdc++.h>

using namespace std;
// #include<E:\Coding_and_Web\debug.cpp>

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define mod 1000000007
#define ull uint64_t

#define cmp [](const auto &l, const auto &r) { return l.fi < r.fi; }
#define all(v) v.begin(), v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

//#define int int64_t

bool cmp1(pair<int, int> a, pair<int, int> b)
{
    if (a.fi == b.fi)
        return a.se > b.se;

    return a.fi < b.fi;
}
vector<pair<int, int>> v;

int binary(int s, int e, int val)
{
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) >> 1;
       if(val<=v[mid].fi)
       {
           e=mid-1;
           ans=mid;
       }
       else
       {
           s=mid+1;
       }
    }
    return ans;
}

void solve()
{

    int n, k;
    cin >> n >> k;
    v.assign(n, {0, 0});
    fori(n)
    {
        cin >> v[i].fi;
    }
    fori(n)
            cin >>
        v[i].se;

    sort(v.begin(), v.end());
    // fori(n)cout<<v[i].fi<<" "<<v[i].se<<endl;


    // cout << binary(0, n - 1, k) << endl;
    int res=binary(0,n-1,k);
    fori(n)
    {
        if(k>=v[i].fi)
        {
            k+=v[i].se;
        }
        else{
            break;
        }
    }
    // while(k>=v[res].fi)
    // {
    //     k+=v[res].se;
    //     res=binary(0,n-1,k);
    //     debug(k,res);
    // }
    cout<<k<<endl;
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