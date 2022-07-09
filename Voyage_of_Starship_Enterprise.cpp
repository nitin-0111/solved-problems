// #include <bits/stdc++.h>

// using namespace std;

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ll long long
// #define eps 1e-6

// #define mod 1000000007

// #define fi first
// #define se second
// #define pb push_back
// #define vi vector<int>

// int n;
// vector<int> a;
// // bool fun(int s)
// // {
// //     if (s >= n)
// //     {
// //         return true;
// //     }
// //     // if (s > n)
// //     // {
// //     //     return false;
// //     // }
// //     for (int i = 1 + s; i <= (a[s] + s) && i < n; i++)
// //     {
// //         if (i + a[i] == n)
// //         {
// //             return true;
// //         }
// //         cout<<a[i]<<" "<<i<<endl;
// //         bool check = fun(i);
// //         if (check)
// //             return true;
// //     }

// //     return false;
// // }

// // min segment tree
// void buildTree(vector<int> a, int s, int e, int *tree, int index)
// {
//     if (s == e)
//     {
//         tree[index] = a[s];
//         return;
//     }
//     // recursive call

//     int mid = (s + e) / 2;
//     buildTree(a, s, mid, tree, 2 * index);
//     buildTree(a, mid + 1, e, tree, 2 * index + 1);
//     tree[index] = max(tree[2 * index], tree[2 * index + 1]);
//     return;
// }

// // query in range
// int query(int *tree, int ss, int se, int qs, int qe, int index)
// {

//     //  compelete overlap
//     if (ss >= qs and se <= qe) // it is correct now think 2 befor any change
//     {
//         return tree[index];
//     }

//     // no overlap
//     if (qe < ss || qs > se)
//     {
//         return INT_MIN;
//     }
//     // Partial overlap
//     int mid = (ss + se) / 2;
//     int left = query(tree, ss, mid, qs, qe, 2 * index);
//     int right = query(tree, mid + 1, se, qs, qe, 2 * index + 1);
//     return max(left, right);
// }

// int32_t main()
// {
//     IOS
//             cin >>
//         n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         a.pb(x);
//     }

//     int *tree = new int[4 * n + 1]; // max size is 4*n+1
//     for (int i = 0; i < 4 * n + 1; i++)
//     {
//         tree[i] = INT_MIN;
//     }
//     bool check=true;
//     buildTree(a, 0, n - 1, tree, 1);
//     for(int i=0;i<n;)
//     {
//         int l=i+1,r=(a[i]+i)<n?(a[i]+i):n-1;
//         cout<<"l "<<l<<" r "<<r<<endl;
//         int m= query(tree, 0, n - 1, l, r, 1);
//         cout<<m<<endl;
//         int k=distance(a.begin(),find(a.begin(),a.end(),m));
//         if(k+m>=n)
//         {
//             cout<<"True"<<endl;
//             check=false;
//             break;
//         }
//         cout<<"k "<<k<<endl;
//         i=k;

//     }
//     if(check)
//     {
//         cout<<"False"<<endl;
//     }

//     return 0;
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

        int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool check = true;
    for (int i = 0; i < n;)
    {
        int m = INT_MIN;
        int k;
        // if (i + 1 > a[i] + i)
        // {
        //     break;
        // }
        for (int j = i + 1; j <= a[i] + i && j < n; j++)
        {
            if (a[j] >= m)
            {
                m = a[j];
                k = j;
            }
        }
        if(m==0)
        {
            break;
        }

        if (m + k >= n)
        {
            cout << "True" << endl;
            check = false;
            break;
        }
        i = k;
    }
    if (check)
    {
        cout << "False" << endl;
    }
    return 0;
}