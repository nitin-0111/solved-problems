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
#define int ll

struct point
{
    int x, y;
    bool operator<(point &p)
    {
        if (p.x == x)
            return y < p.y;
        else
            return x < p.x;
    }
    bool operator==(point &p)
    {
        return x == p.x && y == p.y;
    }
};
bool cw(point a, point b, point c)
{
    return (a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y)) > 0;
    // is taken form the slope comparsion
}
bool ccw(point a, point b, point c)
{
    return (a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y)) < 0;
    // is taken form the slope comparsion
}
bool collinear(point a, point b, point c)
{
    return (a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y)) == 0;
    // is taken form the slope comparsion
}
void convex_hull(vector<point> &p)
{
    if (p.size() <= 2)
        return;

    sort(p.begin(), p.end());
    //  now p[0] is p1 and p[n-1] is p2
    int i, n = p.size();
    point p1 = p[0], p2 = p[n - 1];
    //  p1 is bottom left point and p2 is top right point
    vector<point> up, down;
    up.pb(p1);
    down.pb(p1);

    for (i = 1; i < n; i++)
    {
        //  now I have to check whether my current point is in lower half
        // or upper half;
        if (i == n - 1 || !ccw(p1, p[i], p2))
        {
            // upper half
            while (up.size() >= 2 && ccw(up[up.size() - 2], up[up.size() - 1], p[i]))
            {
                up.pop_back();
            }
            up.pb(p[i]);
        }
        if (i == n - 1 || !cw(p1, p[i], p2))
        {
            //  p[i]is in the lower half
            while (down.size() >= 2 && cw(down[down.size() - 2], down[down.size() - 1], p[i]))
            {
                down.pop_back();
            }
            down.pb(p[i]);
        }
    }
    //  up and down vector contains all points including the points p1 and p2 repeatedly
    p.clear();
    for (i = 0; i < up.size(); i++)
    {
        p.pb(up[i]);
    }
    for (i = 0; i < down.size(); i++)
    {
        p.pb(down[i]);
    }
    sort(p.begin(), p.end());
    p.resize(unique(p.begin(), p.end()) - p.begin());
}

void solve()
{
    int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
    cin >> n;
    vector<point> p(n);
    for (i = 0; i < n; i++)
    {
        cin >> p[i].x >> p[i].y;
    }
    map<pair<int, int>, int> mp;
    cin >> m;
    for (i = 0; i < m; i++)
    {
        point temp;
        cin >> temp.x >> temp.y;
        mp[{temp.x, temp.y}]++;
        p.pb(temp);
    }
    convex_hull(p);

    for (auto x : p)
    {
        if (mp.count({x.x, x.y}))
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int32_t main()
{
    IOS

    solve();
    return 0;
}