#include <bits/stdc++.h>

using namespace std;
// #include <E:\Coding_and_Web\debug.cpp>

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
    string a, b;
    cin >> a >> b;
    // cout<<a<<" "<<b<<endl;
    // cout<<a.size()<<endl;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        // debug(ans,i);
        // cout<<ans<<" "<<i<<endl;
         int x=a[i]-'0',y=b[i]-'0';
        //  debug(x,y);
        //  cout<<(((x & y) == 0) )<<endl;
        //  cout<<x<<" "<<y<<" "<<"Nitin"<<endl;
        //  cout<< (x & y)<<" "<<(x | y)<<endl;
        if (((x & y) == 0) && ((x | y) == 1))
        {
            ans += 2;
            // cout<<"yes"<<endl;
            continue;
        }
        else if ((x &y) == 1)
        {

            if (i == n - 1)
                continue;
            else if (((a[i + 1]-'0') &( b[i + 1]-'0')) == 1 and ((a[i + 1]-'0') | (b[i + 1]-'0')) == 1)
                continue;
            else if (((a[i + 1]-'0') & (b[i + 1]-'0')) == 0)
            {
                ans += 2;
                i++;
                continue;
            }
        }
        else if (((a[i]-'0') | (b[i]-'0')) == 0)
        {
            // cout<<"1"<<endl;
            if(i==n-1)
            {
                ans++;
                continue;
            }
            if (((a[i+1]-'0') & (b[i+1]-'0')) == 1)
            {
                ans += 2;
                // cout<<"2"<<endl;
                i++;
                continue;
            }
            ans++;
        }
    }
   cout<<ans<<endl;
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
