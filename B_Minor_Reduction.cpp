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

string comp(string a, string b)
{
    if (a.size() == b.size())
    {
        if (a >= b)
            return a;
        else
        {
            return b;
        }
    }
    if (a.size() > b.size())
    {
        return a;
    }
    else
    {
        return b;
    }
}
void solve()
{

    string s;
    cin >> s;

    string ans;
    for (int i = s.size() - 1; i >= 1; i--)
    {

        int k = s[i] - '0' + s[i - 1] - '0';
        // cout<<k<<endl;
        if (k >= 10)
        {
            ans = s.substr(0, i - 1) + to_string(k);
            if (i + 1 < s.length())
            {
                ans += s.substr(i + 1);
            }
            cout << ans << endl;
            ans = "";
            return;
        }

        

        // v.pb(ans);
       
    }
         
         int n=s.size();
        int k = s[0] - '0' + s[1] - '0';
    ans = to_string(k)+ s.substr(2, s.size()-2) ;
        

    // fori(v.size())cout<<v[i]<<endl;
    cout << ans << endl;
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
