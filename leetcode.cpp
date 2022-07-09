#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE

#include <D:\Coding_and_Web\debug.cpp>

#else // online submission

#endif

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define eps 1e-6

#define mod 1000000007

#define pi (3.141592653589)

#define ull uint64_t

#define cmp [](const auto &l, const auto &r) { return l > r; }

#define all(v) v.begin(), v.end()
#define fi first
#define se second
#define rep(i, n) for (int i = 0; i < n; i++)

#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

//#define int int64_t
long long fun(int a)
{
    long long l = (long long)a;
    return l * (l + 1) / 2;
}
long long minimalKSum(vector<int> &nums, int k)
{
    vector<int> ind;
    long long ans = 0;
    vector<int> v;
    if (nums[0] != 1)
        v.push_back(0);
    sort(nums.begin(), nums.end());
    nums.push_back((int)(1e9));
    debug(nums);
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i]-nums[i-1]>1)
        {
            v.push_back(i);
        }
    }
    debug(v);
    for (auto x : v)
    {
        if (k <= 0)
            break;
        if (x == 0)
        {
            long long r = (nums[0] - 1);
            // cout<<r<<endl;
            if (r >= k)
            {
                long long y = (long long)k;
                ans = (y) * (y + 1) / 2;
                return ans;
            }
            // cout<<ans<<endl;
            ans += (r) * (r + 1) / 2;
            k -= r;
            continue;
        }
        long long r = nums[x] - nums[x - 1] - 1;
        debug(k,ans,r,x);
        if (r <= k)
        {
            ans += fun(nums[x] - 1) - fun(nums[x - 1]);
            k -= r;
        }
        else
        {
            ans += fun(nums[x - 1] + k) - fun(nums[x - 1]);
            k = 0;
        }
    }
    return ans;
}

long long solve()
{

    vector<int> v = { 96, 44, 99, 25, 61, 84, 88, 18, 19, 33, 60, 86, 52, 19, 32, 47, 35, 50, 94, 17, 29, 98, 22, 21, 72, 100, 40, 84 };
    int k =
        35;
    cout << minimalKSum(v, k);
}

int32_t main()

{
    IOS
        uint32_t tt = 1;

    while (tt--)
    {

        cout << solve();
    }
    return 0;
}