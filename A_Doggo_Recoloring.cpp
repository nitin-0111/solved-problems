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
    string s;
    cin >> s;
    vector<int> v(26, 0);
    if(n==1){cout<<"yes"<<endl;
    return;}
    for (int i = 0; i < n; i++)
    {
        int j = s[i] - 'a';
        v[j] ++;
    }
    
    int a = 0, b = 0;
    for (auto x : v)
    {
        if (x == 0)
            continue;
        if (x >= 2)
            a++;
      
    }
    // cout<<a<<" "<<b<<endl;
    if(a>=1)cout<<"yes"<<endl;
    else cout<<"NO"<<endl;

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