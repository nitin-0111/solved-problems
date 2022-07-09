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
#define ull uint64_t

#define cmp [](const auto &l, const auto &r) { return l > r; }
#define all(v) v.begin(), v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

#define int int64_t

const ll N = (int)1e12;
vector<int> fac(100);
int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    if (fac[n] != 0)
    {
        return fac[n];
    }
    return fac[n] = n * fact(n - 1);
}
map<int, int> m;
void fun()
{
    set<int> s;

    int k = 4;
    m[1] = 1, m[2] = 1;
    for (int i = 6; i <= N;)
    {
        s.insert(i);
        m[i] = 1;
        i = fact(k);
        k++;
    }
    // m[fact(k)]=1;
    //   cout<<  fact(k);
    // debug(m);
}

void solve()
{
    int n;
    cin >> n;

    if ((n & (n - 1)) == 0)
    {
        // cout<<"yes"<<endl;
        cout << 1 << endl;
        return;
    }

    else if (m.count(n) > 0)
    {
        cout << 1 << endl;
        return;
    }

    int ans = __builtin_popcountll(n);
    bitset<64>a(n);
    cout<<a<<endl;
    debug(ans);
    int k = n;
    int cnt = 0;
    int res = ans;
    // cout<<m.size()<<endl;
    int cnt1=0;
    int r=0;
    for (int i = 0; i < 64 && k >= 0; i++)
    {
       int l=0;
       r=0;
       for(int j=i;j<64&& k>=0;j++)
       {
           if(k&(1LL<<j)  and !r)
           {
               r=j;
           }

           if(k&(1LL<<j))
           {
                // debug(i,j,l);
               l+=(1LL<<j);
            //    cout<<l<<endl;
                   debug(l,r,j);
               if(m[l]==1)
               {
                   ans=min(ans,res-(j-r));
                  
               }
           }
       }
    }
    // k=n;
    // cnt++;
    // res=ans;
    // for(int i=63;i>=0&&k>0;i-- )
    // {
    //     if(k&(1LL<<i))
    //     {
    //         cnt++;
    //         k=k&~(1LL<<i);
    //         if(m.count(k)>0)
    //         {
    //             res=cnt+1;
    //             ans=min(ans,res);
    //             break;
    //         }
    //     }
    // }
    // cout<<fact(k)<<endl;

    cout << ans << endl;
}

int32_t main()
{
    IOS
    fun();
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif
    uint32_t tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}