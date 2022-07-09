#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define MOD 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int>

int32_t main()
{
    IOS

        int n;
    cin >> n;
    vi vis(n, 0), a, v;
    for (int i = 1; i <= n; i++)
    {
        a.pb(i);
    }
    int i = -1, j = 0;
    bool check = true;
    
     if (n % 2 != 0)
    {

        while (v.size() != n)
        {
            if (!vis[j] && (i == -1 || abs(v[i] - a[j]) >= 2))
            {
                vis[j] = 1;
                v.pb(a[j]);
                // cout<<a[j]<<" ";
                i++;
                j += 2;
                j %= n;
            }
            else
            {
                check = false;
                cout << "NO SOLUTION";

                break;
            }
        }

        if (check)
        {

            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
        }
    }
    else if(n!=2)
    {
        for(int i=1;i<n;i+=2)
        {
            cout<<a[i]<<" ";
        }
        for(int i=1;i<n;i+=2)
        {
            cout<<i<<" ";
        }
    }
    else
      cout<<"NO SOLUTION"<<endl;

    return 0;
}