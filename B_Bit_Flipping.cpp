// #include <bits/stdc++.h>

// using namespace std;

// #ifndef ONLINE_JUDGE
// #include <D:\Coding_and_Web\debug.cpp>

// #else // online submission

// #endif

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ppb pop_back
// #define pf push_front
// #define ppf pop_front
// #define all(v) v.begin(), v.end()
// #define uniq(v) v.erase(unique(all(v)), v.end())
// #define sz(x) (int)((x).size())
// #define ll long long
// #define eps 1e-6
// #define mod 1000000007
// #define pi (3.141592653589)
// #define ull uint64_t
// #define cmp [](const auto &l, const auto &r) { return l > r; }
// #define fi first
// #define se second
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define mem1(a) memset(a, -1, sizeof(a))
// #define mem0(a) memset(a, 0, sizeof(a))
// #define prDouble(x) cout << fixed << setprecision(10) << x
// #define rrep(i, n) for (int i = n - 1; i >= 0; i--)
// //__builtin_ctz(x)  __builtin_popcountll(x)

// #define pb push_back
// #define vi vector<int>

// #define int int64_t

// void solve()
// {

//     int n, k;
//     cin >> n >> k;
//     string s;
//     cin >> s;
//     int a[n];
//     mem0(a);
//     if (k & 1)
//     {
//         // cout<<"yes"<<endl;
//         if (s[0] == '1')
//         {
//             // cout<<"yes"<<endl;
//             a[0] = 1;
//             k--;

//             rep(i, 1, n)
//             {
//                 int j = (int)(s[i] - '0');
//                 if (j)
//                 {
//                     s[i] = '0';
//                 }
//                 else
//                     s[i] = '1';
//             }
//         }
//         else
//         {
//             a[n - 1] = 1;
//             k--;
//             rep(i, 0, n - 1)
//             {
//                 int j = (int)(s[i] - '0');
//                 if (j)
//                 {
//                     s[i] = '0';
//                 }
//                 else
//                     s[i] = '1';
//             }
//         }
//     }

//     int z = count(all(s), '0');
//     debug(z,k,s);
//     if (z >= k)
//     {
//         z = k;
//         k = 0;
//     }
//     else if(z>=2)
//         k -= z;
//     else
//      {
//          z=0;
//      }

//     //  rep(i, 0, n)
//     // {
//     //     cout << a[i] << " ";
//     // }
//     // cout<<endl;
//     if (k & 1)
//     {
//         a[n - 1] = 1;
//         s[n - 1] = s[n - 1] == '1' ? '0' : '1';
//         k--;
//     }
//     for (int i = n - 1; i >= 1; i--)
//     {
//         if (!a[i] and s[i] == '0')
//         {
//             a[i] = k;
//             break;
//         }
//     }

//     rep(i, 1, n - 1)
//     {
//         if (z <= 0)
//             break;
//         if (s[i] == '0')
//         {
//             debug("yes");
//             s[i] = '1';
//             a[i] += 1;
//             z--;
//         }
//     }
//     cout << s << endl;
//     rep(i, 0, n)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }

// signed main()

// {
//     IOS
//         uint32_t test_case;
// #ifndef ONLINE_JUDGE
//     // freopen( "input.txt"  , "r"  , stdin);
//     // freopen("output.txt","w",stdout);
// #endif

//     cin >> test_case;
//     while (test_case--)
//     {

//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include <D:\Coding_and_Web\debug.cpp>

#else // online submission

#endif

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(v) v.begin(), v.end()
#define uniq(v) v.erase(unique(all(v)), v.end())
#define sz(x) (int)((x).size())
#define ll long long
#define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t
#define cmp [](const auto &l, const auto &r) { return l > r; }
#define fi first
#define se second
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define prDouble(x) cout << fixed << setprecision(10) << x
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>

#define int int64_t

int fun(int y, int l, int na)
{
    if(y<=0)return 0;
    // debug(y,l,na);
    if(l==1)return y;
    if (y > l)
    {
        int k = (y - l) & 1;
        if (na ^ k)
        {
            return y-l-1;
        }
        else
            return y-l;
    }

    if (na)
    {
        return 1;
    }
    else
        return 0;
}
void solve()
{

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int a[n];
    int x = 0, y = k;
    rep(i, 0, n)
    {
        int c = ((x & 1)) ^ ((int)(s[i] - '0'));
        // c shows currert state of s[i];
        if (c)
        {
            if (y & 1)
            {
                a[i] = fun(y, n - i , 1); // odd
            }
            else
                a[i] = fun(y, n - i , 0); // even;

                // debug(a[i]);

            y -= a[i];
            x += a[i];
        }
        else
        {
            if (y & 1)
            {
                a[i] = fun(y, n - i , 0); // even
            }
            else
                a[i] = fun(y, n - i , 1); // odd;


                // debug(a[i]);
            y -= a[i];
            x += a[i];
        }
    }
    x=0,y=k;
    rep(i,0,n)
    {
       if(i-1>=0)x+=a[i-1];

       int l=a[i];
       y=k-(l+x);
        //    debug(i,x,y); 
       if( (y&1)^(x&1))
       {
           s[i]=s[i]=='1'?'0':'1';
       }

    }
    cout<<s<<endl;

    rep(i,0,n)cout<<a[i]<<" ";
    cout<<endl;
}

signed main()

{
    IOS
        uint32_t test_case;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif

    cin >> test_case;
    while (test_case--)
    {

        solve();
    }
    return 0;
}