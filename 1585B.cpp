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
void fun(vector<int> &a)
{
    vector<int> left,right;
    int n=a.size();
    int p=a.size()-1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[p])
        {
            left.pb(a[i]);
        }
        else 
        {
            right.pb(a[i]);
        }
    }
    left.pb(a[p]);
   int i;
    for( i=0;i<left.size();i++)
    {
        a[i]=left[i];
    }
    for(int k=0;k<right.size();k++)
    {
        a[i]=right[k];
        i++;
    }
}
void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    int mx = INT_MIN;
    int k=-1;
    fori(n)
    {
        cin >> a[i];
        if(mx<=a[i])
        {
            mx=a[i];
            k=i;
        }
        mx = max(a[i], mx);
    }
    if(a[n-1]==mx)
    {
        cout<<0<<endl;
        return;
    }
    int cnt=0;
    int t=INT_MIN;
    for(int i=n-1;i>k;i--)
    {
        if(a[i]>t)
        {
            t=a[i];
            cnt++;
        }

    }
    cout<<cnt<<endl;
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