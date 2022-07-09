#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define int long long
#define MOD 1000000007
//works 

bool ispossible(ll *a, int n, int m, int mid)
{
    ll get_wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= mid)
        {
            get_wood += (a[i] - mid);
        }
        if (get_wood >= m)
        {
            return true;
        }
    }
    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, M;
    cin >> n >> M;
    ll *tree = new ll[n];
    ll m = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> tree[i];
        if (tree[i] > m)
        {
            m = tree[i];
        }
        // sum += tree[i];
    }
    int s = 0;
    int ans = 0;
    int e = m;
    while (s <= e)
    {
        int mid = (s + e) >> 1;
        if (ispossible(tree, n, M, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    cout << ans << endl;
    delete[] tree;

    return 0;
}
/*INPUT: 



OUTPUT:

*/