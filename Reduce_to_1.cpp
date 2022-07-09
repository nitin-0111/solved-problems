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
// const string yes = "YES", no = "NO";
// //__builtin_ctz(x)  __builtin_popcountll(x)

// #define pb push_back
// #define vi vector<int>

// // #define int int64_t
// const int M = 1e7 + 5;
// bitset<M> a;
// vector<int> prime;
// void seive()
// {

//     // prime.push_back(2);
//     a[2] = 1;
//     for (int i = 3; i <= M; i += 2)
//     {
//         a[i] = 1;
//     }

//     for (int i = 3; i * i <= M; i += 2)
//     {
//         if (a[i])
//         {
//             prime.push_back(i);

//             for (int j = i * i; j <= M; j += 2 * i)
//             {
//                 a[j] = 0;
//             }
//         }
//     }
// }
// void solve()
// {

//     ull n;
//     cin >> n;
//     unordered_map<ll, ll> mp;
//     if(n==1)
//     {
//         cout<<0<<endl;
//         return;
//     }
//     // debug(prime);
//     ll z = __builtin_ctzll(n);
//     if (n & 1)
//     {
//         cout << 1 << endl;
//         return;
//     }
//     if (z & 1)
//     {
//         cout << -1 << endl;
//         return;
//     }
//     bool ok = 1;
//     mp[2] = z;
//     ull x = (n>>z);


//     for (ll i = 0; prime[i] <= n; i++)
//     {
//         ll l = prime[i];
//         if (x == 0)
//         {
//             break;
//         }
//         while ((x % l) == 0)
//         {
//             mp[l]++;
//             x /= l;
//         }
//         if (x == 0)
//         {
//             break;
//         }
//     }
//     ll ans = 0;
//     // debug(mp);
//     for (auto x : mp)
//     {
//         if (x.fi == 2)
//         {
//             ans++;
//             continue;
//         }

//         if (x.se & 1)
//         {
//             ans++;
//         }
//         else
//         {
//             ans += 2;
//         }
//     }

//     cout << ans << endl;
// }

// signed main()

// {
//     IOS
//         uint32_t test_case;
// #ifndef ONLINE_JUDGE
//     // freopen( "input.txt"  , "r"  , stdin);
//     // freopen("output.txt","w",stdout);
// #endif
//     seive();
//     cin >> test_case;
//     while (test_case--)
//     {

//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

 #ifndef ONLINE_JUDGE 
#include<D:\Coding_and_Web\debug.cpp>
 
#else// online submission 

#endif 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(v) v.begin(),v.end()
#define uniq(v) v.erase(unique(all(v)),v.end()) 
#define sz(x) (int)((x).size())
 #define ll long long
 #define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t 
#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define fi first
#define se second
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define prDouble(x) cout<<fixed<<setprecision(10)<<x
#define rrep(i,n) for(int i=n-1;i>=0;i--)
const string yes="YES" ,no="NO" ;
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>

#define int int64_t





 
void solve()
{

    int n;
    cin>>n;
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    if(n&1)
    {
        cout<<1<<endl;
        return;

    }
    int z=__builtin_ctzll(n);
    if(z&1)
    {
        cout<<-1<<endl;
        return;
    }
    int x=sqrt(n);
    if(x*x==n and x&1==0)
    {
        cout<<1<<endl;

    }
    else
    cout<<2<<endl;

}



signed  main ()

{
 IOS
 uint32_t test_case;
#ifndef ONLINE_JUDGE
 //freopen( "input.txt"  , "r"  , stdin);
 //freopen("output.txt","w",stdout);
#endif

cin>>test_case;
 while(test_case --){
 
solve();
}  
return 0;
}