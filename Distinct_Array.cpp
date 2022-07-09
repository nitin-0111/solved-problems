#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define eps 1e-6

#define mod 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int>

int32_t main()
{
    IOS

        int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        int N = m.size();
        if (n == N)
        {
            cout << n << endl;
            continue;
        }
        int cnt = 0;
        for (auto x : m)
        {
            if (x.se == 2)
            {
                cnt++;
                continue;
            }
            if (x.se >= 3)
            {
                int l = x.se;
                do
                {
                    l = l / 3 + l % 3;

                } while (l >= 3);
                if (l == 2)
                {
                    cnt++;
                }
            }
        }
        if(cnt&1)
        {
            cout<<N-1<<endl;
        }
        else
        {
            cout<<N<<endl;
        }
    }
    return 0;
}