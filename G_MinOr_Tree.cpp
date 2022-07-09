// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long
// #define MOD 1000000007

// int n, m;
// class dsu
// {
//     int *parent;
//     int *rank;

// public:
//     dsu(int n)
//     {
//         parent = new int[n + 1];
//         rank = new int[n + 1];
//         for (int i = 0; i <= n; i++)
//         {
//             parent[i] = -1;
//             rank[i] = 1;
//         }
//     }

//     int find(int i)
//     {
//         return parent[i] == -1 ? i : parent[i] = find(parent[i]);
//     }
//     void union_set(int x, int y)
//     {
//         int s1 = find(x);
//         int s2 = find(y);
//         if (s1 != s2)
//         {
//             if (rank[s1] < rank[s2])
//             {
//                 parent[s1] = s2;
//                 rank[s2] += rank[s1];
//             }
//             else
//             {
//                 parent[s2] = s1;
//                 rank[s1] += rank[s2];
//             }
//         }
//     }
// };
// bool comp(vector<int> a, vector<int> b)
// {
//     return a[0] > b[0];
// }
// class Graph
// {
//     vector<vector<int>> adjMatrix;
//     int v;

// public:
//     Graph(int v)
//     {
//         this->v = v;
//     }

//     void addEdge(int x, int y, int w)
//     {
//         adjMatrix.push_back({w, x, y});
//     }
//     int kruskals()
//     // {
//         static ll ans = 0;
//         int l=INT_MAX;
//             sort(adjMatrix.begin(), adjMatrix.end(), comp);
//         int i = 0;
//         for (int j = 0; j < adjMatrix.size(); j++)
//         {
//             swap(adjMatrix[i], adjMatrix[j]);

//             dsu s(v);

//             //   cout<<" Edge with MST"<<endl;
//             for (auto edge : adjMatrix)
//             {
//                 int w = edge[0];
//                 int x = edge[1];
//                 int y = edge[2];

//                 if (s.find(x) != s.find(y))
//                 {
//                     s.union_set(x, y);
//                     // cout<<x<<"--"<<w<<"--"<<y<<endl;
//                     ans=ans|w;
//                     if(ans<l)
//                     {
//                         l=ans;
//                     }
//                 }
//             }
//         }
//         return l;
//     }
// };

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {

//         cin >> n >> m;
//         Graph g(n);
//         for (int i = 0; i < m; i++)
//         {
//             int x, y, w;
//             cin >> x >> y >> w;
//             g.addEdge(x, y, w);
//         }
//         cout << g.kruskals() << endl;
//     }

//     return 0;
// }
// /*INPUT:
// 7 9
// 1 2 28
// 2 3 16
// 3 4 12
// 4 5 22
// 4 7 18
// 2 7 14
// 5 7 24
// 5 6 25
// 6 1 10

// OUTPUT:

// */

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007

void prims()
{
    int n, m;

    cin >> n >> m;
    vector<pair<int, int>> gr[n + 1];
    int vis[n + 1] = {};
    // vis means that it is in MST
    for (int i = 0; i < m; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        gr[x].push_back({y, w});
        gr[y].push_back({x, w});
    }
    int k = INT_MAX;
    for (int i = 1; i <= n; i++)
    {

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        q.push({0, i});
        //  weight ,to(node) -> we using greater for comparsion which comparee first elment

        ll mst = 0; // total cost for MST traversal
        while (!q.empty())
        {
            pair<int, int> best = q.top();
            q.pop();
            int weight = best.first;
            int to = best.second;
            if (vis[to])
                continue;

            mst = mst | weight;
            vis[to] = 1;
            for (auto x : gr[to])
            {
                if (vis[x.first] == 0)
                {
                    q.push({x.second, x.first});
                }
            }
        }
        if (mst < k)
        {
            k = mst;
        }
    }
    cout << k << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        prims();
    }

    return 0;
}
/*INPUT: 



OUTPUT:

*/
