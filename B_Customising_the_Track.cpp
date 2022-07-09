// #include <bits/stdc++.h>

// using namespace std;
// #include<E:\Coding_and_Web\debug.cpp>

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

// #define int int64_t

// // int incov(vector<int> a)
// // {
// //     vector<int> csum(a.size());
// //     fori(a.size())
// //     {
// //         if(i==0)
// //         {
// //             csum[0]=a[0];
// //             continue;
// //         }
// //         csum[i]+=csum[i-1]+a[i];
// //     }
// //     int sum=0;
// // }

// void solve()
// {

//     int n;
//     cin >> n;
//     vector<int> a(n);
//     fori(n) cin >> a[i];

//     sort(all(a));
//     // debug(a);

//     map<int,int > m;
//     for (int i = 0, j = n - 1; i < j; i++, j--)
//     {
//         int sum = a[i] + a[j];
//         a[i] = sum / 2;
//         a[j] = sum - a[i];
//         // debug(sum,a[i],a[j]);
//         cout<<endl;
//         m[a[i]]++;
//         m[a[j]]++;
//     }
//     sort(all(a));
//     // debug(a);
//     if (a[0] == a[n - 1])
//     {
//         cout << 0 << endl;
//         return;
//     }
//     int ans = 0;
//     debug(m);
//     for (auto it = m.begin(); it != m.end(); it++)
//     {
//         for (auto it1 = prev(it,-1); it1 != m.end(); it1++)
//         {
//             int diff = abs(it->fi - it1->fi);
//             // debug(diff,ans);
//             cout<<endl;
//                 debug(*it,*it1);
//             ans += (diff * (it->se) * (it1->se));
//         }
//     }
//     cout << ans << endl;
//     return;
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



void  fun(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=a[j][i];
        }
    }
}

 
void solve()
{
  int a[2][2]={{1,2},{3,4}};
  fun((int*)a,2);
  fori(2)
  {
      for(int j=0;j<2;j++)
      {
          cout<<a[i][j]<<endl;
      }
  }
    

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