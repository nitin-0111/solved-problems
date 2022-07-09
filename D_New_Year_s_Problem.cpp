// #include<bits/stdc++.h>

// using namespace std;
// //  #include<E:\Coding_and_Web\debug.cpp> 


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

//     int m,n;
//     cin>>m>>n;
//     vector<vector<int> > v(m,vector<int> (n));
//     fori(m)
//     {
//        for(int j=0;j<n;j++)
//        {
//            cin>>v[i][j];
//        }
//        sort(all(v[i]),cmp);

//     }
//     // if(n-1>=m)
//     // {
//     //     vector<int> a(n*m);
//     //     fori(m)
//     //     {
//     //         for(int j=0;j<n;j++)
//     //         {
//     //             a.pb(v[i][j]);
//     //         }
//     //     }
//     //     sort(all(a),cmp);
//     //     fori(n*m)
//     //     {
//     //         cout<<a[i]<<" ";
//     //     }
//     //     cout<<endl;
//     //     cout<<a[n-1]<<endl;
//     //     a.clear();
//     //     return;
//     // }
//     int k=0;
//     int x=0;
//     vector<int> a;
//     fori(m)
//     {
//         if(x<v[i][1])
//         {
//             x=v[i][1];
//             k=i;
//         }
//     }
//     a.pb(v[k][0]);
//     a.pb(v[k][1]);
//     vector<int> temp;
//     fori(m)
//     {
//         if(i==k)continue;
//         temp.pb(v[i][0]);
//     }
//     sort(all(temp),cmp);
//     int t=n-2;
//     for(int i=0;i<=n-3;i++)
//     {
//         a.pb(temp[i]);

//     }
//     sort(all(a));
//     // debug(a);
//     cout<<a[0]<<endl;



// }



// int32_t main ()
// {
//  IOS
//  int tt;
//  cin>>tt;
//  while(tt--){
//  solve();
// }  
// return 0;
// }

//
// Created by Vlad on 17.12.2021.
//
 
#include <bits/stdc++.h>
 
#define int long long
#define mp make_pair
#define x first
#define y second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
 
/*#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
*/
typedef long double ld;
typedef long long ll;
 
using namespace std;
 
 
mt19937 rnd(143);
 
const int inf = 1e10;
const int M = 998244353;
const ld pi = atan2(0, -1);
const ld eps = 1e-4;
 
int n, m;
vector<vector<int>> p;
 
bool check(int x){
    vector<bool> abl(m);
    bool pair = false;
    for(int i = 0; i < n; ++i){
        int c = 0;
        for(int j = 0; j < m; ++j){
            if(p[i][j] >= x){
                abl[j] = true;
                c++;
            }
        }
        if(c > 1) pair = true;
    }
    if(!pair && m > 1) return false;
    bool ans = true;
    for(bool b: abl){
        ans = ans && b;
    }
    return ans;
}
 
void solve() {
    cin >> n >> m;
    p.assign(n, vector<int>(m));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> p[i][j];
        }
    }
    int l = 1, r = 2;
    cout<<r<<endl;
    while (check(r)) r *= 2;

    cout<<r<<endl;
    while (r - l > 1){
        int mid = (r + l) / 2;
        if(check(mid)) l = mid;
        else r = mid;
    }
    cout << l;
}
 
bool multi = true;
 
signed main() {
    //freopen("in.txt", "r", stdin);
    //freopen("in.txt", "w", stdout);
    int t = 1;
    if (multi) {
        cin >> t;
    }
    for (; t != 0; --t) {
        solve();
        cout << "\n";
    }
    return 0;
}