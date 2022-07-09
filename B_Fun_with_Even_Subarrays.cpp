// // #include <bits/stdc++.h>

// // using namespace std;
// // // #include <E:\Coding_and_Web\debug.cpp>

// // #define IOS                           \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);

// // #define ll long long
// // #define eps 1e-6
// // #define mod 1000000007
// // #define ull uint64_t

// // #define cmp [](const auto &l, const auto &r) { return l > r; }
// // #define all(v) v.begin(), v.end()
// // #define fi first
// // #define se second

// // #define pb push_back
// // #define vi vector<int>
// // #define fori(n) for (int i = 0; i < n; i++)

// // //#define int int64_t

// // void solve()
// // {

// //     int n;
// //     cin >> n;
// //     int a[n];
// //     fori(n) cin >> a[i];
// //     int cnt = 0;

// //     fori(n)
// //     {
// //         if (a[i] != a[n - 1])
// //         {
// //             cnt++;
// //         }
// //     }
// //     if (cnt == 0)
// //     {
// //         cout << 0 << endl;
// //         return;
// //     }
// //     int k = 1;
// //     int ans = 0;
// //     for (int i = n - 1; i >= 1; i--)
// //     {
// //         if (a[i] == a[i - 1])
// //             k++;

// //         else
// //         {
// //             break;
// //         }
// //     }
// //     // debug(k, cnt);
// //     for (int i = n - 2 * k; i >= 0; i -= k)
// //     {
// //         int j = i;
// //         if (cnt == 0)
// //         {
// //             break;
// //         }
// //         while (j < n - k)
// //         {
// //             // debug(i, j, k, cnt);
// //             if (cnt == 0)
// //             {

// //                 break;
// //             }
// //             if (a[j] != a[n - 1])
// //             {
// //                 cnt--;
// //             }
// //             j++;
// //         }
// //         ans++;
// //         // debug(ans);
// //         k += k;
// //     }
// //     cout << ans << endl;
// // }

// // int32_t main()
// // {
// //     IOS int tt;
// //     cin >> tt;
// //     while (tt--)
// //     {
// //         solve();
// //     }
// //     return 0;
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
//     int a[n];
//     fori(n) cin >> a[i];

//     int cnt = 0, k = 1;
//     bool check = false;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (a[i] != a[n - 1])
//             cnt++;

//         if (i >= 1 and a[i] == a[i - 1] and !check)
//         {
//             k++;
//         }
//         else
//         {
//             check = true;
//         }
//     }
//     if (cnt == 0)
//     {
//         cout << cnt << endl;
//         return;
//     }

//     int i = n - 1 - k;
//     int ans = 0;
//     while (i >= 0)
//     {
//         int tmp = k;
//         while (tmp--)
//         {
//             if (cnt == 0)
//             {
//                 break;
//             }
//             if (a[i] != a[n - 1])
//             {
//                 cnt--;
//             }
//             i--;
//         }
//         ans++;
//         k += k;
//         if (cnt == 0)
//         {
//             break;
//         }
//     }
//     cout << ans << endl;
// }

// int32_t main()
// {
//     IOS int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;
//  #include<E:\Coding_and_Web\debug.cpp> 


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
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
  
    int x=n;
    fori(n)
    {
        if(a[i]!=a[n-1])
        {
            x=i;
            break;
        }
    }
    if(x==n)
    {
        cout<<0<<endl;
        return;
    }
    int k=1;
    for(int i=n-1;i>=1;i--)
    {
        if(a[i-1]==a[n-1])
        {
            k++;
        }
        else
        {
            break;
        }

    }
     int ans=0;
    for(int i=n-k;i>=0;)
    {
        // cout<<"i "<<i<<endl;
        if(i<=x)
        {
            break;
        }
        // if(i-k<0)
        // {
        //     ans++;
        //     break;
        // }
        // debug(i,k,a[i]);
        i-=k;
        k+=k;
        ans++;
        while( i>=1 and a[i-1]==a[n-1])
        {
            k++;
            i--;
        }
    }

    cout<<ans<<endl;

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