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

vector<int> v;

void solve()
{
    int k;
    cin>>k;
    cout<<v[k]<<endl;
}

int32_t main()

{
    IOS
        uint32_t tt;
    v.resize(1002);
    int cnt = 1;
    int j=1;
   for(int i=1;;i++)
   {
       if(j>=1001)break;
       if(i%3==0 ||i%10==3)
       {
           cnt++;
           continue;
       }
       v[j]=cnt; 
       j++;
       cnt++;
       
   }

    cin >> tt;
    while (tt--)
    {

        solve();
    }
    return 0;
}
