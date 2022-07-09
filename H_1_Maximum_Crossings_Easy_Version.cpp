#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#ifndef ONLINE_JUDGE
#include <D:\Coding_and_Web\debug.cpp>
#else
#define debug(x...)
#endif
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define all(v) v.begin(), v.end()
#define uniq(v) v.resize(unique(all(v)) - v.begin())
#define ll long long
#define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t
#define fi first
#define se second
#define prDouble(x) cout << fixed << setprecision(10) << x
#define rep(i, a, b) for (int i = a; i < b; i++)
#define fr(a, b) for (int i = a; i < b; ++i)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))

#define pb push_back
#define vi vector<int>
string yes = "YES", no = "NO";
template <class T>
using ordered_set = tree<T, null_type, less<T>,
                         rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t

int Merge(int arr[], int aux[], int low, int mid, int high)
{
    int k = low, i = low, j = mid + 1;
    int inversionCount = 0;

    // while there are elements in the left and right runs
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            aux[k++] = arr[i++];
        }
        else
        {
            aux[k++] = arr[j++];
            inversionCount += (mid - i + 1); // NOTE
        }
    }

    // copy remaining elements
    while (i <= mid)
    {
        aux[k++] = arr[i++];
    }

    /* no need to copy the second half (since the remaining items
       are already in their correct position in the temporary array) */

    // copy back to the original array to reflect sorted order
    for (int i = low; i <= high; i++)
    {
        arr[i] = aux[i];
    }

    return inversionCount;
}

// Sort array `arr[low…high]` using auxiliary array `aux`
int MergeSort(int arr[], int aux[], int low, int high)
{
    // base case
    if (high <= low)
    { // if run size <= 1
        return 0;
    }

    // find midpoint
    int mid = (low + ((high - low) >> 1));
    int inversionCount = 0;

    // recursively split runs into two halves until run size <= 1,
    // then merges them and return up the call chain

    // split/merge left half
    inversionCount += MergeSort(arr, aux, low, mid);

    // split/merge right half
    inversionCount += MergeSort(arr, aux, mid + 1, high);

    // merge the two half runs
    inversionCount += Merge(arr, aux, low, mid, high);

    return inversionCount;
}

void solve(int _t)
{

    int n;
    cin >> n;
    // vi a(n);
    int a[n], b[n];
    fr(0, n)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    int ans = 0;
    int cnt = MergeSort(a,b,0,n-1);
    //    int
    cout << cnt << endl;
}

signed main()

{
    IOS
        uint32_t test_case = 1;
    cin >> test_case;
    int __t = test_case;

    while (test_case--)
    {

        solve(__t - test_case);
    }
    return 0;
}