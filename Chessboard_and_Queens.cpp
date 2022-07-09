#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include <D:\Coding_and_Web\debug.cpp>

#else // online submission

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
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

#define pb push_back
#define vi vector<int>

#define int int64_t

char c[8][8];
// bool is_safe(int i,int j)
// {
//     if(c[i][j]=='*')return false;
//   int k=i,l=j;
//    while(i>0 and j>0 )
//    {
//        if(c[--i][--j]!='.')
//         return false;
//    }
//    int x=k,y=l;
//    while(x>=0 and y<8)
//    {
//        if(c[x--][y++]!='.')return false;
//    }
//    while(k>=0)
//    {
//        if(c[k--][l]!='.')
//        return false;
//    }
//    return true;

// }
vector<int> col(8, 0), dig1(16, 0), dig2(16, 0);
int cnt = 0;
void  fun(int i)
{
    if (i == 8)
    {
        cnt++;
        return;
    }
    for (int j = 0; j < 8; j++)
    {
        if (col[j] || dig1[i + j] || dig2[i - j + 7] || c[i][j] == '*')
            continue;

        col[j] = dig1[i + j] = dig2[i - j + 7] = 1;
        fun(i + 1);
        col[j] = dig1[i + j] = dig2[i - j + 7] = 0;
    }
    return;
}

void solve()
{
    rep(i, 0, 8)
    {
        rep(j, 0, 8)
                cin >>
            c[i][j];
    }
    // rep(i,0,8)
    // {
    //     rep(j,0,8)
    //     cout<<c[i][j];
    //     cout<<endl;
    // }
    fun(0);
    cout << cnt << endl;
}

signed main()

{
    IOS
        uint32_t test_case = 1;
#ifndef ONLINE_JUDGE
    // freopen( "input.txt"  , "r"  , stdin);
    // freopen("output.txt","w",stdout);
#endif

    while (test_case--)
    {

        solve();
    }
    return 0;
}