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

#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(v) v.begin(), v.end()
#define uniq(v) v.erase(unique(all(v)), v.end())
#define sz(x) (int)((x).size())
#define ll long long
#define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t
#define cmp [](const auto &l, const auto &r) { return l > r; }
#define fi first
#define se second
#define prDouble(x) cout << fixed << setprecision(10) << x
#define rep(i, a, b) for (int i = a; i < b; i++)
#define fr(a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

#define pb push_back
#define vi vector<int>
template <class T>
using ordered_set = tree<T, null_type, less<T>,
                         rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t

vector<int> seg_tree;

// combine function for combining two nodes of the tree, in
// this case we need to take min of two
int combine(int a, int b) { return min(a, b); }

// build function, builds seg_tree based on vector parameter
// arr
void build(vector<int> &arr, int node, int tl, int tr)
{
    // if current range consists only of one element, then
    // node should be this element
    if (tl == tr)
    {
        seg_tree[node] = arr[tl];
    }
    else
    {
        // divide the build operations into two parts
        int tm = (tr - tl) / 2 + tl;

        build(arr, 2 * node, tl, tm);
        build(arr, 2 * node + 1, tm + 1, tr);

        // combine the results from two parts, and store it
        // into current node
        seg_tree[node] = combine(seg_tree[2 * node],
                                 seg_tree[2 * node + 1]);
    }
}

// query function, returns minimum in the range [l, r]
int query(int node, int tl, int tr, int l, int r)
{
    // if range is invalid, then return infinity
    if (l > r)
    {
        return INT32_MAX;
    }

    // if range completely aligns with a segment tree node,
    // then value of this node should be returned
    if (l == tl && r == tr)
    {
        return seg_tree[node];
    }

    // else divide the query into two parts
    int tm = (tr - tl) / 2 + tl;

    int q1 = query(2 * node, tl, tm, l, min(r, tm));
    int q2 = query(2 * node + 1, tm + 1, tr, max(l, tm + 1),
                   r);

    // and combine the results from the two parts and return
    // it
    return combine(q1, q2);
}

// --------Segment Tree Ends Here-----------------

vi nextsmall;
void printNSE(vector<int> arr, int n)
{
    seg_tree = vector<int>(4 * n);

    // build segment tree initially
    build(arr, 1, 0, n - 1);

    int q, l, r, mid, ans;
    for (int i = 0; i < n; i++)
    {
        // binary search for ans in range [i + 1, n - 1],
        // initially ans is -1 representing there is no NSE
        // for this element
        l = i + 1;
        r = n - 1;
        ans = -1;

        while (l <= r)
        {
            mid = (r - l) / 2 + l;
            // q is the minimum element in range [l, mid]
            q = query(1, 0, n - 1, l, mid);

            // if the minimum element in range [l, mid] is
            // less than arr[i], then mid can be answer, we
            // mark it, and look for a better answer in left
            // half. Else if q is greater than arr[i], mid
            // can't be an answer, we should search in right
            // half

            if (q < arr[i])
            {
                ans = arr[mid];
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        // print NSE for arr[i]
        if (ans == -1)
        {
            nextsmall.pb(INT_MAX);
        }
        else
            nextsmall.pb(ans);
        // cout << arr[i] << " ---> " << ans << "\n";
    }
}

int fun(vi v)
{
    int n = v.size();
    printNSE(v, n);
    int ans = 0;
    int j;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] < v[i - 1])
        {
            ans += v[i] - v[i - 1];
        }
        else
        {
            int small = nextsmall[i + 1];
            if (small != INT_MAX)
            {
                int x = v[i + 1] - small
                                       ans += x;
                v[i + 1] = small;
                if (v[i + 1] > v[i])
                {
                    ans += v[i + 1] - v[i];
                }
                // i++;
            }
            else
            {
                j = i + 1;
                break;
            }
        }
    }
    return ans;
}

void solve(int _t)
{

    int n;
    cin >> n;
    vi v(n);
    fr(0, n) cin >> v[i];

    printNSE(v, n);
    // debug(nextsmall);
    int ans = 0;
    int j;

    int pre;
    vi p;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] < v[i - 1])
        {
            ans += v[i] - v[i - 1];
            pre=v[i];
        }
        else if(v[i]>v[i-1])
        {
            int small = nextsmall[i + 1];
            if (small != INT_MAX)
            {
                int x = v[i + 1] - small;
                ans += x;
                v[i + 1] = small;
                pre-=x;
                if (v[i + 1] > v[i])
                {
                    ans += v[i + 1] - v[i];
                }
                // i++;
            }
            else
            {
                j = i + 1;
                break;
            }
        }
    }
    vi a;
    if (j < n)
        for (int i = j; i < n; i++)
        {
            a.pb(v[i]);
        }
    reverse(all(a));
    int ans1 = fun(a);
}

signed main()

{
    IOS
        uint32_t test_case = 1;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif
    cin >> test_case;
    int __t = test_case;

    while (test_case--)
    {

        solve(__t - test_case);
    }
    return 0;
}