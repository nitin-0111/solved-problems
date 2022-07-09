// #include <bits/stdc++.h>

// using namespace std;
// #ifndef ONLINE_JUDGE

// #include <D:\Coding_and_Web\debug.cpp>
// #else // online submission
// #endif

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ll long long
// #define eps 1e-6
// #define mod 1000000007
// #define ull uint64_t

// #define cmp [](const auto &l, const auto &r) { return l > r; }
// #define all(v) v.begin(), v.end()
// #define fi first
// #define se second

// #define pb push_back
// #define vi vector<int>
// #define fori(n) for (int i = 0; i < n; i++)

// //#define int int64_t

// void solve()
// {

//     string s, t;
//     cin >> s >> t;
//     if (t.size() > s.size())
//         swap(s, t);
//     int n = s.size(), m = t.size();
//     if (n % m == 0)
//     {
//         //   string l(t,n/m);
//         string l;
//         int x = n / m;
//         while (x--)
//         {
//             l += t;
//         }
//         if (l == s)
//         {
//             cout << s << endl;
//             return;
//         }
//         else
//         {
//             string r;
//             l="";
//             int u=__gcd(n,m);
//             x = m;
//             x/=u;
//             while (x--)
//             {
//                 r += s;
//             }
//             int y = n;
//             // string l;
//             y/=u;
//             while (y--)
//             {
//                 l += t;
//             }
//             if (r == l)
//             {
//                 cout << r << endl;
//                 return;
//             }
//             else
//                 cout << -1 << endl;
//             return;
//         }
//     }
//     if (n % m != 0)
//     {
//         string r;
//         int x = m;
//         int u=__gcd(n,m);
//         x/=u;
//         while (x--)
//         {
//             r += s;
//         }
//         int y = n;
//         y/=u;
//         string l;
//         while (y--)
//         {
//             l += t;
//         }
//         if (r == l)
//         {
//             cout << r << endl;
//             return;
//         }
//         else
//             cout << -1 << endl;
//         return;
//     }
// }

// int32_t main()
// {
//     IOS
//         uint32_t tt;
//     cin >> tt;
//     while (tt--)
//     {
//         solve();
//     }
//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;
 //#include<E:\Coding_and_Web\debug.cpp> 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
 #define eps 1e-6
#define mod 1000000007
#define ull uint64_t 

#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define all(v) v.begin(),v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)

//#define int int64_t





 
void solve()
{

    string s((6/2),"a");
    cout<<s<<endl;
    string l="abc";
    string r(3,l);
    cout<<r<<endl;

}



int32_t main ()
{
 IOS
 uint32_t tt=1;
 while(tt--){
 solve();
}  
return 0;
}