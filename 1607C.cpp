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
//     vector<int> v(n);
//     int ans = INT_MIN;
//     fori(n)
//     {
//         cin >> v[i];
//     }
//     n--;
//     while (n--)
//     {
//         int m = INT_MAX;
//         int k = -1;

//         fori(v.size())
//         {
//             if (v[i] < m)
//             {
//                 m = v[i];
//                 k = i;
//             }
//         }
//         if (ans < m)
//         {
//             ans = m;
//         }
//         fori(v.size())
//         {
           
//             v[i] -= m;
//         }
//         sort(all(v));
//         v.erase(v.begin());

//     }
//     cout<<ans<<endl;
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
    vector<int> v(n);
    fori(n)
    {
        cin>>v[i];
    }
    sort(all(v));
    int ans=v[0];
    
    for(int i=1;i<n;i++)
    {
        int k=v[i]-v[i-1];
        if(ans<k)
        {
            ans=k;
        }
    }
    cout<<ans<<endl;

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