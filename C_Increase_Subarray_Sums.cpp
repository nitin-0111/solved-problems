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

void solve(int _t)
{

    int n, k;
    cin >> n >> k;
    vi a(n);
    fr(0, n)
    {
        cin >> a[i];
        a[i] += k;
    }
    int l = 0, r = 0;
    int cur = 0, best = INT_MIN;
    int x = 0, y = 0;
    debug(a);
    for (int i = 0; i < n; i++)
    {
        // cur = max(cur + a[i], a[i]);

        if (a[i] > a[i] + cur)
        {
            // if (x == -1)
            x = i;
            cur = a[i];
        }
        else
        {

            cur += a[i];
        }
        if (best < cur)
        {
            y = i;
            if (r - l < y - x)
            {
                r = y;
                l = x;
            }
            best = cur;
        }
        // else
        // {

        //     x = -1;
        // }
        // else
        // {
        //     best=cur;
        // }

        // if(best <cur)
        // {

        // }
        // best=max(best,cur);
    }

    if(best<0)
    {
       for(int i=0;i<=n;i++)
       {
           cout<<0<<" ";
       }
       cout<<endl;
    }
    else{
          vector<int> ans;
          ans.pb(best);
          while(l<=r)
          {
              if(a[l]<a[r])
              {
                  if(a[l]-k >=0)
                  {
                      best-=k;
                      ans.pb(best);
                      l++;
                  }
                  else 
                  {
                      if(a[l]>=0)
                      {
                          best-=a[l];
                          l++;
                           ans.pb(best);
                      }
                      else{
                        //   best;
                      }
                  }

              }
          }


    }
    //  if(r-l <y-x)
    //        {
    //            l=x;
    //            r=y;
    //        }
    // debug(best, l, r);
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