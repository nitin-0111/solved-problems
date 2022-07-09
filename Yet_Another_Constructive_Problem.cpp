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

#define int int64_t


int ind(int x)
{
    int ans=0;
    while(x)
    {
        ans++;
        x=x>>1;
    }
    return ans;
}

void solve()
{

    int x;
    cin >> x;
    int a=0, b=0, c=0;
    
    int k=ind(x);
    // cout<<k<<endl;
    for(int i=0;i<31;i++)
    {
        if(i<=9 )
        {
           if(i<=k)
           {
               a|=(x&i);
           }
           else
           {
               a|=(1<<i);
           }
           b=a;
           c=a;
        }
        else if(i>9 and i<20)
        {
            if(i<=k)
            b|=(x&i);
            else
            b|=(1<<i);
            c=b;
        }
        else if(i>19)
        {
            if(i<=k)
            {
                c|=(x&i);
            }
            else
            c|=(1<<i);
        }
    }
     cout<<a<<" "<<b<<" "<<c<<endl;

     cout<<((a|b)&(b|c)&(c|a))<<endl;


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