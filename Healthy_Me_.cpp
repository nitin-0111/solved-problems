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

// int32_t main()
// {
//     IOS

//             cin >>
//         n;
//     // a.resize(n);
//     int arr[n];
//     // dp(n+1,-1);
//     int cnt = 0;
//     // int h = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     vector<pair<int, int>> dp(n + 1, {0, 0});
//     for (int i = 1; i <= n; i++)
//     {
//         int h = dp[i - 1].se;
//         pair<int, int> a, b;
//         if (h + arr[i - 1] >= 0)
//         {
//             a.fi = dp[i - 1].fi + 1;
//             a.se = dp[i - 1].se + arr[i - 1];
//         }
//         b = dp[i - 1];
//         dp[i] = max(a, b);
//     }
//     cout << dp[n].fi << endl;
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define mod 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

// min segment tree
void buildTree(int *a, int s, int e, int *tree, int index)
{
    if (s == e)
    {
        tree[index] = -a[s];
        return;
    }
    // recursive call

    int mid = (s + e) / 2;
    buildTree(a, s, mid, tree, 2 * index);
    buildTree(a, mid + 1, e, tree, 2 * index + 1);
    tree[index] = min(tree[2 * index], tree[2 * index + 1]);
    return;
}

// query in range
int query(int *tree, int ss, int se, int qs, int qe, int index)
{

    //  compelete overlap
    if (ss >= qs and se <= qe) // it is correct now think 2 befor any change
    {
        return tree[index];
    }

    // no overlap
    if (qe < ss || qs > se)
    {
        return INT_MAX;
    }
    // Partial overlap
    int mid = (ss + se) / 2;
    int left = query(tree, ss, mid, qs, qe, 2 * index);
    int right = query(tree, mid + 1, se, qs, qe, 2 * index + 1);
    return min(left, right);
}

int pointupdate(int *tree, int s, int e, int uindex, int index, int value)
{
    //   out of bound
    if (uindex < s || uindex > e)
    {
        return tree[index];
    }
    //  node or(case can be s==e only)     order of if case matter we can apply s==e  only if it written below
    // out of bound case
    if (s == uindex && e == uindex)
    {
        return tree[index] += value;
    }

    int mid = (s + e) / 2;
    int left = pointupdate(tree, s, mid, uindex, 2 * index, value);
    int right = pointupdate(tree, mid + 1, e, uindex, 2 * index + 1, value);
    return tree[index] = min(left, right);
}

int32_t main()
{
    IOS

        int n;
    cin >> n;
    int a[n];
    int cnt=0;
    fori(n)
    {
        cin >> a[i];
        if(a[i]>=0)cnt++;
    }

    int *tree = new int[4 * n + 1]; // max size is 4*n+1
    for (int i = 0; i < 4 * n + 1; i++)
    {
        tree[i] = INT_MAX;
    }
    int k=0;
    buildTree(a, 0, n - 1, tree, 1);
    fori(n)
    {
        if(a[i]>=0)
        {
            k+=a[i];
            int mini=query(tree,0,n-1,i+1,n-1,1);
            if(k+mini<0)
            {
                break;
            }
            cout<<mini<<endl;
            k+=mini;
            cnt++;

        }
    }
    cout<<cnt<<endl;
    return 0;
}