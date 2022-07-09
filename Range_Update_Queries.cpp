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

#ifndef SEGMENTTREE_H
#define SEGMENTTREE_H
#define left(i) (2 * i + 1)
#define right(i) (2 * i + 2)
#define parent(i) ((i - 1) / 2)
#include <vector>

template <class T>
class SegmentTree
{
public:
    // tree constructors.
    SegmentTree(std::vector<T> data, T value, T (*combine)(T obj1, T obj2));
    SegmentTree(T ar[], int n, T value, T (*combine)(T obj1, T obj2));

    // query the range l to r, 0 based array indexing.
    T query(int l, int r);

    // update the element at index idx to val.
    void update(int idx, T val);
    /// TODO lazy propagation
private:
    // represents the segment tree.
    T *tree;

    // builds the segment tree.
    void buildTree(std::vector<T> data);

    // size of the segment tree array.
    int segTreeSize;

    // extra nodes must be added to array to make its size a power of 2
    // this is the value to be filled for the those nodes.
    T valueForExtraNodes;

    // specifies how to combine child node results to form parent node result.
    T(*combine)
    (T obj1, T obj2);

    // used to calculate the size of array needed to store the tree.
    int calculateSize(int n);

    // helps to solve a range query.
    T queryHelper(int l, int r, int st, int ed, int node);
};

template <class T>
SegmentTree<T>::SegmentTree(std::vector<T> data,
                            T value, T (*combine)(T obj1, T obj2))
{
    this->combine = combine;
    valueForExtraNodes = value;
    segTreeSize = calculateSize(data.size());
    buildTree(data);
}

template <class T>
SegmentTree<T>::SegmentTree(T ar[], int n,
                            T value, T (*combine)(T obj1, T obj2))
{
    this->combine = combine;
    valueForExtraNodes = value;
    segTreeSize = calculateSize(n);

    std::vector<T> data;
    for (int i = 0; i < n; i++)
        data.push_back(ar[i]);

    buildTree(data);
}

template <class T>
int SegmentTree<T>::calculateSize(int n)
{
    int pow2 = 1;
    while (pow2 < n)
    {
        pow2 = pow2 << 1;
    }
    return 2 * pow2 - 1;
}

template <class T>
T SegmentTree<T>::query(int l, int r)
{
    int st = 0, ed = segTreeSize / 2;
    return queryHelper(l, r, st, ed, 0);
}

template <class T>
T SegmentTree<T>::queryHelper(int l, int r, int st, int ed, int node)
{
    if ((r < st) || (l > ed) || (l > r))
        return valueForExtraNodes;
    if (st >= l && ed <= r)
        return tree[node];
    T leftVal = queryHelper(l, r, st, (st + ed) / 2, left(node));
    T rightVal = queryHelper(l, r, (st + ed) / 2 + 1, ed, right(node));
    return combine(leftVal, rightVal);
}

template <class T>
void SegmentTree<T>::buildTree(std::vector<T> data)
{
    int n = data.size();
    tree = new T[segTreeSize];
    int extraNodes = (segTreeSize / 2 + 1) - n;
    for (int i = segTreeSize - 1; i >= 0; i--)
    {
        if (extraNodes > 0)
        {
            tree[i] = valueForExtraNodes;
            extraNodes--;
        }
        else if (n > 0)
        {
            tree[i] = data[n - 1];
            n--;
        }
        else
            tree[i] = combine(tree[left(i)], tree[right(i)]);
    }
}

template <class T>
void SegmentTree<T>::update(int idx, T val)
{
    int segTreeIdx = (segTreeSize / 2) + idx;
    tree[segTreeIdx] = val;
    while (parent(segTreeIdx) >= 0)
    {
        segTreeIdx = parent(segTreeIdx);
        if (right(segTreeIdx) < segTreeSize)
            tree[segTreeIdx] = combine(tree[left(segTreeIdx)], tree[right(segTreeIdx)]);
        if (segTreeIdx == 0)
            break;
    }
}

#endif

int sum(int x, int y)
{
    return x+y;
}

void solve(int _t)
{
    int n, q;
    cin >> n >> q;
    vi a(n);
    fr(0, n)
            cin >>
        a[i];

    SegmentTree<int> sg(a,0, sum);
    while (q--)
    {
        int choice;
        cin >> choice;
        if (choice == 1)
        {
           int a,b,val;
           cin>>a>>b>>val;
           sg.update(a-1,val);
           sg.update(b-1,-val);

        }
        else
        {
            int k;
            cin>>k;
            int ans=sg.query(k,n-1);
            ans-=sg.query(k+1,n-1);
            cout<<ans<<endl;
        }
    }
}

signed main()

{
    IOS
        uint32_t test_case = 1;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif
    int __t = test_case;

    while (test_case--)
    {

        solve(__t - test_case);
    }
    return 0;
}