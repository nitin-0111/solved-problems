// // #include<bits/stdc++.h>

// // using namespace std;
// //  //#include<E:\Coding_and_Web\debug.cpp>

// // #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

// //  #define ll long long
// //  #define eps 1e-6
// // #define mod 1000000007
// // #define ull uint64_t

// // #define cmp [] (const auto &l, const auto &r) {return l > r;}
// // #define all(v) v.begin(),v.end()
// // #define fi first
// // #define se second

// // #define pb push_back
// // #define vi vector<int>
// // #define fori(n) for(int i=0;i<n;i++)

// // //#define int int64_t

// // const int M = 1e7 + 5;
// // bitset<M> a;
// // vector<int> prime;
// // void primeSieve()
// // {

// //     prime.push_back(2);

// //     for (int i = 3; i <= n; i += 2)
// //     {
// //         a[i] = 1;
// //     }

// //     for (int i = 3; i * i <= n; i += 2)
// //     {
// //         if (a[i])
// //         {
// //             prime.push_back(i);

// //             for (int j = i * i; j <= n; j += 2 * i)
// //             {
// //                 a[j] = 0;
// //             }
// //         }
// //     }
// // }

// // void solve()
// // {

// //     int n;
// //     cin>>n;

// // }

// // int32_t main ()
// // {
// //  IOS
// //  uint32_t tt;
// // cin>>tt;
// //  while(tt--){
// //  solve();
// // }
// // return 0;
// // }
// #include <bits/stdc++.h>

// using namespace std;
// //#include<E:\Coding_and_Web\debug.cpp>

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

//     int n;
//     cin >> n;
//     set<int> s;
//     s.insert(1);

//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             s.insert(i);
//             s.insert(n / i);
//         }
//     }
//     int a, b, c;
//     vector<int> v;
//     for (auto x : s)
//     {
//         int k = n / x - 1;
//         if (k > 4)
//         {
//             v.pb(k);
//         }
//     }
//     sort(all(v));
//     reverse(all(v));
//     for (auto k : v)
//     {
//         for (int i = 2; i < k - 2; i++)
//         {
//             int t = k - i;
//             if (t < 3)
//                 break;
//             else if (i == t || __gcd(i, t) != 1)
//             {
//                 continue;
//             }
//             else
//             {
//                 c = n / (k + 1), a = i * c, b = t * c;
//                 if (a + b + c == n)
//                 {
//                     cout << a << " " << b << " " << c << endl;
//                     return;
//                 }
//                 else
//                     continue;
//             }
//         }
//     }
//     // for (auto it=s.rbegin();it!=s.rend();it++)
//     // {
//     //     int x=*it;
//     //     int k =( n / x) - 1;
//     //     for (int i = 2; i < k; i++)
//     //     {
//     //         int t = k - i; // i=
//     //         if (t <= 1)
//     //             break;
//     //         else if (i == t || __gcd(i,t)!=1)
//     //             continue;
//     //         else
//     //         {
//     //             a = i * x, b = t * x, c = x;
//     //             if (a + b + c == n)
//     //             {
//     //                 cout << a << " " << b << " " << c << endl;
//     //                 return;
//     //             }
//     //             else
//     //                 continue;
//     //         }
//     //     }
//     // }
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

    int n;
    cin>>n;
    int k=n-1;
    for(int i=2;i<k-2;i++)
    {
        int t=k-i;
        if(i==t ||__gcd(i,t)!=1)
        {
            continue;
        }
        cout<<i<<" "<<t<<" "<<1<<endl;
        return;
    }


}



int32_t main ()
{
 IOS
 uint32_t tt;
cin>>tt;
 while(tt--){
 solve();
}  
return 0;
}