#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE

#include <D:\Coding_and_Web\debug.cpp>

#else // online submission

#endif

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define eps 1e-6

#define mod 1000000007

#define pi (3.141592653589)

#define ull uint64_t

#define cmp [](const auto &l, const auto &r) { return l > r; }

#define all(v) v.begin(), v.end()
#define fi first
#define se second
#define rep(i, n) for (int i = 0; i < n; i++)

#define rrep(i, n) for (int i = n - 1; i >= 0; i--)

#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

//#define int int64_t

template <typename T>
class Graph
{
    map<T, list<T>> l;
    // vector<T> shortest;

public:
    void addEdge(T x, T y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
};

void solve()
{

    int n, m;
    cin >> n >> m;
    Graph<int> g;
    int s, end;
    cin >> s >> end;
    // g.addEdge(s,e);
    rep(i, m)
    {
        int x, y;
        cin >> x >> y;
        g.addEdge(x, y);
    }
     
    map<T, int> dist;
    queue<T> q;
    // traversing the bfs  way
    for (auto node_pair : l)
    {
        T node = node_pair.first;
        dist[node] = INT_MAX;
    }
    // intialisizing the scr ->0 and all other with infinite
    int src=s;
    int e=end;
    q.push(src);
    dist[src] = 0;
    while (!q.empty())
    {
        T node = q.front();
        q.pop();
        for (T nbr : l[node])
        {
            if (dist[nbr] == INT_MAX)
            {
                q.push(nbr);
                dist[nbr] = dist[node] + 1;
            }
        }
    }
    int sh=dist[e];
}

int32_t main()

{
    IOS
        uint32_t tt;

    cin >> tt;
    while (tt--)
    {

        solve();
    }
    return 0;
}