// // // #include <bits/stdc++.h>

// // // using namespace std;

// // // #define IOS                           \
// // //     ios_base::sync_with_stdio(false); \
// // //     cin.tie(NULL);

// // // #define ll long long
// // // #define mod 1000000007

// // // #define fi first
// // // #define se second
// // // #define pb push_back
// // // #define vi vector<int>

// // // int32_t main()
// // // {
// // //     IOS

// // //         int t;
// // //     cin >> t;
// // //     while (t--)
// // //     {
// // //         ll n;
// // //         cin >> n;
// // //         vi vis(51, 0);
// // //         vector<ll> v;
// // //         // int dp[n + 1][n + 1];
// // //         // memset(dp, 0, sizeof(dp));
// // //         for (int i = 0; i < n; i++)
// // //         {
// // //             ll x;
// // //             cin >> x;
// // //             if (x <= n)
// // //             {
// // //                 if (!vis[x])
// // //                 {
// // //                     vis[x] = 1;
// // //                 }
// // //                 else
// // //                 {
// // //                     v.pb(x);
// // //                 }
// // //             }
// // //             else
// // //             {
// // //                 v.pb(x);
// // //             }
// // //         }
// // //         // for (auto x : v)
// // //         //     cout << x << " ";

// // //         // cout << endl;

// // //         for (int i = 0; i < v.size(); i++)
// // //         {
// // //             while (v[i] > 0)
// // //             {

// // //                 v[i] /= 2;
// // //                 if (v[i] <= n && !vis[v[i]]&&v[i]>0)
// // //                 {
// // //                     vis[v[i]] = 1;
// // //                     break;
// // //                 }
// // //             }
// // //         }
// // //         bool check = true;
// // //         for (int i = 0; i < v.size(); i++)
// // //         {
// // //             if (!vis[v[i]])
// // //             {
// // //                 cout << "NO" << endl;
// // //                 check = false;
// // //             }
// // //         }
// // //         if (check)
// // //         {
// // //             cout << "yes" << endl;
// // //         }
// // //     }
// // //     return 0;
// // // // }

// // #include <bits/stdc++.h>

// // using namespace std;

// // #define IOS                           \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);

// // #define ll long long
// // #define mod 1000000007

// // #define fi first
// // #define se second
// // #define pb push_back
// // #define vi vector<int>

// // unordered_map<int, set<int>> m;
// // void set_map(int n)
// // {
// //     for (int i = 1; i <= n; i++)
// //     {
// //         m[i].clear();
// //     }
// //     return;
// // }

// // void ordring(vector<pair<int,int> >  &a)
// // {
// //     for(int i=1;i<=n;i++)
// //     {
// //         a.pb(m[i].size(),i);
// //     }
// //     sort(a.begin(),a.end());

// //     return;
// // }
// // int32_t main()
// // {
// //     IOS

// //         int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         int n;
// //         cin >> n;
// //         for (int i = 0; i < n; i++)
// //         {
// //             int x;
// //             cin>>x;
// //             int tmp=x;
// //             while(tmp>0)
// //             {
// //                 if(tmp<=n)
// //                 {
// //                     m[tmp].insert(x);
// //                 }
// //                 tmp/=2;
// //             }
// //         }

// //         vector<pair<int, int> >  a;
// //         ordering(a);
// //         if(a[0].fi==0)
// //         {
// //             cout<<"NO"<<endl;
// //         }
// //         else{

// //         }

// //     }

// //     return 0;
// // }

// #include<bits/stdc++.h>

// using namespace std;

// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

//  #define ll long long
// #define eps 1e-6

// #define mod 1000000007

// #define fi first
// #define se second
// #define pb push_back
// #define vi vector<int>

// int32_t main ()
// {	 IOS

// return 0;
// }
#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define eps 1e-6

#define mod 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int>

int32_t main()
{
    IOS

        int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int vis[n + 1];
        //   int b[n];
        vi b;
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= n && !vis[a[i]])
            {

                vis[a[i]] = 1;
            }
            else
            {
                b.pb(a[i]);
            }
        }
        sort(b.begin(), b.end());
        for (int i = 0; i < b.size(); i++)
        {

            while (b[i] > n || vis[b[i]] && b[i] >= 0)
            {
                // cout << b[i] << endl;
                b[i] /= 2;
            }
            // cout << b[i] << " ";
            if (b[i] == 0)
            {
                cout << "NO" << endl;
                break;
            }
            vis[b[i]] = 1;
        }
        // cout << endl;
        if (!count(vis + 1, vis + n + 1, 0))
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}