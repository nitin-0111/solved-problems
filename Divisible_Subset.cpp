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

        // cout << " " << endl;
        vector<int> a;
        int n;
        cin >> n;
        int csum[n] = {0};
        // csum.assign(n, 0);

        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            a.pb(t);
            if (i == 0)
            {
                csum[0] = a[0] % n;

                continue;
            }
            csum[i] = (csum[i - 1] + a[i]) % n;
        }

        int x = -1, y = -1;
        bool check = true;
        unordered_map<int,list<int> > pos;
        for(int i=0;i<n;i++)
        {
            pos[csum[i]].pb(i);
        }
       
        for (int i = 0; i < n; i++)
        {
            if (csum[i] == 0)
            {
                cout << i + 1 << endl;
                for (int j = 0; j <= i; j++)
                {
                    cout << j + 1 << endl;
                }
                check = false;
                break;
            }
            if (pos[csum[i]].size()>1)
            {

                 auto it=pos[csum[i]].begin();
                 x=*it+1;
                 advance(it,1);
                 y=*it;
                // cout<<i<<"i"<<endl;
                // x = i+1;
                // for (int j = i + 1; j < n; j++)
                // {
                //     if (csum[j] == csum[i])
                //     {
                //         y = j ;
                //         cout<<y<<endl;
                //         break;
                //     }
                // }
                // break;
            }
        }
        if (!check)
            continue;

        if (x == -1 || y == -1)
        {
            cout << -1 << endl;
            continue;
        }

        // cout<<x<<" "<<y<<endl;
        cout << y - x+1 << endl;
        for (int i = x ; i <= y; i++)
        {
            cout << i + 1 << endl;
        }
    }

    return 0;
}