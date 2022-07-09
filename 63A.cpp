#include <bits/stdc++.h>

using namespace std;
// #include<E:\Coding_and_Web\debug.cpp>

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

string st(string s)
{
    // string a="";
   string t=s;
    int x=t.find(" ")+1;
    return s.substr(0,x);
    
    // return a;
}

void solve()
{

    int n;
    cin >> n;
    vector<string> v1, v2, v3;
    string cap;
    n++;
   while(n--)
    {
        string s;
        getline(cin,s);
        //  cout<<s<<endl;
        string t=s;
        // debug(s);
        if (t.find(" rat") != -1)
        {
           v1.pb(st(s));
            // debug("rat", st(s));
        }
        else if (t.find(" woman") != -1 || t.find(" child") != -1)
        {
           v2.pb(st(s));
            // debug("woman", st(s));
            // debug(v2);
           
        }
        else if (t.find(" man") != -1)
        {
           v3.pb(st(s));

        }
        else
        {
            cap = st(s);
        }
    }
    // cout<<v3.size()<<endl;
    for (auto x : v1)
        cout << x << endl;
    for (auto x : v2)
        cout << x << endl;
    for (auto x : v3)
        cout << x << endl;
    cout << cap << endl;
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
