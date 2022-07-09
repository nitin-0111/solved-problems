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
unordered_map<int, vector<pair<int, int>>> g;

void dijkstra(int src)
{
    map<int, int> dist;
    for (auto j : g)
    {
        dist[j.first] = INT_MAX;
    }
    set<pair<int, int>> s;
    dist[src] = 0;
    s.insert({0, src});

    while (!s.empty())
    {
        auto p = *(s.begin());
        int node = p.se;
        int nodedist = p.fi;
        s.erase(s.begin());
        for (auto child : g[node])
        {
            if (child.se != INT_MAX and (nodedist + child.se) < dist[child.first])
            {
                int dest = child.fi;
                auto f = s.find({dist[dest], dest});
                if (f != s.end())
                {
                    s.erase(f);
                }
            }
            dist[child.fi] = nodedist + child.se;
            s.insert({dist[child.fi], child.fi});
        }
    }
    for (auto d : dist)
    {
        cout << d.se << " ";
    }
    cout << endl;
}
signed main()
{
    int n, m;
    cin >> n >> m;
    map<pair<int, int>, int> mp;
    while (m--)
    {
        int x, y, w;
        cin >> x >> y >> w;
        if (mp.count({x, y}) || mp.count({x, y}))
        {
            if (mp[{x, y}] > w)
                mp[{x, y}] = w;
            if (mp[{y, x}] > w)
                mp[{y, x} ] = w;
        }
        else
        {
            mp[{x, y}] = w;
            mp[{y, x}] = w;
        }
    }
    for (auto node : mp)
    {
        g[node.fi.fi].pb({node.fi.se, node.se});
    }
    dijkstra(1);
    return 0;
}