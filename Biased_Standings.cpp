// #include <bits/stdc++.h>

// using namespace std;

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ll long long
// #define mod 1000000007

// #define cmp [](const auto &l, const auto &r) { return l < r; }
// #define fi first
// #define se second
// #define pb push_back
// #define int ll
// #define vi vector<int>
// #define fori(n) for (int i = 0; i < n; i++)

// int32_t main()
// {
//     IOS

//         int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<pair<int, string>> v;
//         fori(n)
//         {
//             string s;
//             int rank;
//             cin >> s >> rank;
//             v.pb({rank, s});
//         }
//         sort(v.begin(), v.end());
//         int cnt = 0;
//         fori(n)
//         {
//             cnt += (abs(v[i].fi - (i + 1)));
//             // cout<<v[i].fi<<" "<<v[i].se<<" "<<abs(v[i].fi-(i+1))<<endl;
//         }
//         cout << cnt << endl;
//     }
//     return 0;
// }
