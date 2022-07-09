#include <bits/stdc++.h>

using namespace std;

#define ll long long
// #define int long long
#define MOD 998244353
// const int N = 3 * 100000;
int n,m;
vector<vector<int>> gr;
int cnt0 = 0, cnt1 = 0, can = 1;
int pwmd(int a, int n)
{  
    //  cout<<" in pwmd"<<endl;
      if(n==0)return 1;
    if (n % 2 == 0)
    {
        int ans = pwmd(a, n / 2);
        ans = (ans % MOD * ans % MOD) % MOD;
        return ans;
    }
    else
    {
        return ((pwmd(a, n - 1) % MOD) * (a % MOD));
    }
}
void dfs(int i, vector<int> &vis, int parity = 0)
{
    // cout<<" in dfs"<<endl;
    if (vis[i]) // run if i is visited
    {
        //  p=1
        // if  vis[i]==2 -> even
        //  p=0
        // vis[i]==1 ->  odd
        if (1 + parity != vis[i])
        {
            can = 0;
            return;
        }
    }

    if (parity == 0)
    {
        cnt0++, vis[i] = 1;
    }
    else
        cnt1++, vis[i] = 2;

    for (auto x : gr[i])
    {
        dfs(x, vis, 1 - parity);
    }
}
int get()
{
    int ans = 1;
    // cout<<"in get"<<endl;
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cnt0 = 0, cnt1 = 0, can = 1;
            dfs(i, vis, 0);
            if (!can)
                return 0;

            ans = (ans * (pwmd(2, cnt0) + pwmd(2, cnt1))) % MOD;
        }
    }

    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        // int m;
        n=0,m=0;
        cin >> n >> m;
        gr.clear();
        gr.resize(n + 1);
        for(int i=0;i<m;i++)
        {
            int x, y;
            cin >> x >> y;
            gr[x].push_back(y);
            gr[y].push_back(x);
        }

        cout << get() << endl;
    }
    return 0;
}
/*INPUT: 



OUTPUT:

*/