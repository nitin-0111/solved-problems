// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long
// #define MOD 1000000007

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;

//         cin >> n;
//         vector<pair<int, int>> cor;

//         // vector<vector<char>> a;
//         char a[n][n];
//         for (int i = 0; i < n; i++)
//         {

//             for (int j = 0; j < n; j++)
//             {
//                 cin >> a[i][j];
//                 if (a[i][j] == '*')
//                 {
//                     cor.push_back({i, j});
//                 }
//             }
//         }
//         int x1, y1, x2, y2;
//         x1 = cor[0].first;
//         x2 = cor[1].first;
//         y1 = cor[0].second;
//         y2 = cor[1].second;

//         if (x1 != x2 && y1 != y2)
//         {
//             a[x1][y2] = '*';
//             a[x2][y1] = '*';
//         }
//         else if (y1 == y2)
//         {
//             if (y1 + 1 < n)
//             {
//                 a[x1][y1 + 1] = '*';
//                 a[x2][y1 + 1] = '*';
//             }
//             else
//             {
//                 a[x1][y1 - 1] = '*';
//                 a[x2][y1 - 1] = '*';
//             }
//         }
//         else if (x1 == x2)
//         {
//             if (x1 + 1 < n)
//             {
//                 a[x1 + 1][y1] = '*';
//                 a[x2 + 1][y2] = '*';
//             }
//             else
//             {
//                 a[x1 - 1][y1] = '*';
//                 a[x1 - 1][y2] = '*';
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << a[i][j];
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }
// /*INPUT: 



// OUTPUT:

// */
