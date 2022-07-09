// #include <bits/stdc++.h>

// using namespace std;
// //#include<E:\Coding_and_Web\debug.cpp>

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ll long long
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

// const int M = 1e8;
// bitset<M> a;
// vector<int> prime;
// void primeSieve()
// {

//     // let us mark all odd numbers as prime (initialisations)
//     prime.push_back(2);

//     for (int i = 3; i <= M; i += 2)
//     {
//         a[i] = 1;
//     }

//     // sieve login to mark non prime numbers as 0
//     // 1. optimization : Iterate onle over odd number
//     for (int i = 3; i * i <= M; i += 2)
//     {
//         if (a[i])
//         {
//             prime.push_back(i);
//             if (prime.size() == 1000)
//             {
//                 break;
//             }
//             //mark all the multiple of that number as ont prime
//             // 2. optimisation take a jump of 2i starting from i*i
//             // 2*i bcz sum of two odd no. is even and that are already rejected

//             for (int j = i * i; j <= M; j += 2 * i)
//             {
//                 a[j] = 0;
//             }
//         }
//     }
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     if (n == 1)
//     {
//         cout << 1 << endl;
//         return;
//     }
//     fori(n)
//     {
//         cout << prime[i] << " ";
//     }
//     cout << endl;
// }

// int32_t main()
// {
//     IOS int tt;
//     primeSieve();
//     // cout<<prime.size()<<endl;
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
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    fori(n)
    {
        cout<<i+2<<" ";
    }
    cout<<endl;

}



int32_t main ()
{
 IOS
 int tt;
 cin>>tt;
 while(tt--){
 solve();
}  
return 0;
}