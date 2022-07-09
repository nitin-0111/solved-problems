#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define mod 1000000007

#define fi first
#define int ll
#define se second
#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

void buildTree(int *a, int s, int e, int *tree, int index)
{
    if (s == e)
    {
        tree[index] = a[s];
        return;
    }
    // recursive call

    int mid = (s + e) / 2;
    buildTree(a, s, mid, tree, 2 * index);
    buildTree(a, mid + 1, e, tree, 2 * index + 1);
    tree[index] = tree[2 * index] + tree[2 * index + 1];
    return;
}

int32_t main()
{
    IOS int n;
    cin >> n;
    int a[n];
    int csum[n + 1] = {0};
    fori(n)
    {
        cin >> a[i];

        csum[i + 1] += csum[i] + a[i];
    }

    int cnt = 0;
    int odd = 0, even = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (csum[i] % 2 == 0)
        {
            even++;
            continue;
        }
        odd++;
    }
    cnt = (((((n + 1) * n)) % mod) / 2 - (even * odd) % mod) % mod;
    if(cnt<0)cnt+=mod;

    cout << cnt << endl;

    return 0;
}