#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define mod 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

int32_t main()
{
    IOS

        int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        int check = 1;
        fori(3)
        {
            cin >> a[i];
            if (a[i] > 50)
            {
                check = 0;
                if (i == 0)
                    cout << "A" << endl;
                else if (i == 1)
                    cout << "B" << endl;
                else
                    cout << "C" << endl;
            }
        }
        if (check)
        {
            cout << "NOTA" << endl;
        }
    }
    return 0;
}