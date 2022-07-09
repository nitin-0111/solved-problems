#include <bits/stdc++.h>

using namespace std;
#ifndef ONLINE_JUDGE
#include <D:\Coding_and_Web\debug.cpp>
#else
#define debug(x...)
#endif
#define all(v) v.begin(), v.end()
#define ll long long
#define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define fi first
#define se second
#define prDouble(x) cout << fixed << setprecision(10) << x

#define pb push_back
#define vi vector<int>

#define int int64_t

signed main()
{
    int n;
    int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    cin >> n;
    // int a[n][n];
    string a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];

    // for(int i=0;i<n;i++)
    // {for(int j=0;j<n;j++)
    //    cout<<a[i][j]<<" ";
    //    cout<<endl;}
    //    cout<<endl;

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k <8; k++)
            {
                // int i=0,j=0;
                string s;
                s+=a[i][j];
                int m = n - 1;
                int x = i, y = j;
                while (m--)
                {
                    x = x + dx[k]+n, y = y + dy[k]+n;
                    x %= n;
                    y %= n;


                    s += (a[x][y]);
                    // debug(x,y,s);

                }
                long long l=stoll(s);
                // cout << s << endl;
                ans=max(ans,l);
            }
        }
    }
    cout << ans << endl;

    return 0;
}