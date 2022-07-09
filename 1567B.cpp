// #include<bits/stdc++.h>

// using namespace std;
//  //#include<E:\Coding_and_Web\debug.cpp>

// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

//  #define ll long long
//  #define eps 1e-6
// #define mod 1000000007
// #define ull uint64_t

// #define cmp [] (const auto &l, const auto &r) {return l > r;}
// #define all(v) v.begin(),v.end()
// #define fi first
// #define se second

// #define pb push_back
// #define vi vector<int>
// #define fori(n) for(int i=0;i<n;i++)

// //#define int int64_t

// void solve()
// {

//     int m,x;
//     cin>>m>>x;
//     if(m==x and m==1)
//     {
//         cout<<m+2<<endl;
//         return;
//     }
//     // xor m-1
//     int k=(m-1)%4;
//     if(k==0)k=m-1;
//     else if(k==1)k=1;
//     else if(k==2)k=m;
//     else if(k==3)k=0;

//     if(k==x)
//     {
//         cout<<m<<endl;
//     }
//     else
//      cout<<m+1<<endl;

// }

// int32_t main ()
// {
//  IOS
//  uint32_t tt;
// cin>>tt;
//  while(tt--){
//  solve();
// }
// return 0;
// }
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

int fun(int n)
{
    int ans ;
    if (n % 3 == 1)
    {
        ans = n / 2;
    }
    else
    {
        if (n % 3 == 2)
        {
            ans = n / 3 + 1;
        }
        else
            ans = n / 3;
    }
    if (ans == 0)
        return 100000;
    else
        return ans;
}

void solve()
{

    int n, m;
    cin >> n >> m;
    int ans ;
    int op1, op2;
    op1 = fun(n) * m;
    // cout<<op1<<endl;
    op2 = fun(m) * n;
    ans = min(op1, op2);

    cout << ans << endl;
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