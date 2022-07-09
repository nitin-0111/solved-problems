#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 #ifndef ONLINE_JUDGE 
 #include<D:\Coding_and_Web\debug.cpp>
 #else
 #define debug(x...)
 #endif 
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(v) v.begin(),v.end()
#define uniq(v) v.erase(unique(all(v)),v.end()) 
#define sz(x) (int)((x).size())
 #define ll long long
 #define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define ull uint64_t 
#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define fi first
#define se second
#define prDouble(x) cout<<fixed<<setprecision(10)<<x
#define rep(i,a,b) for(int i=a;i<b;i++)
#define fr(a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define rrep(i,n) for(int i=n-1;i>=0;i--)

#define pb push_back
#define vi vector<int>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
template <class T> using ordered_set = tree<T, null_type, less<T>, 
rb_tree_tag,tree_order_statistics_node_update>;

#define int int64_t




class graph
{
    int v;
    list<pair<int, int>> l;
    // vector<int> parent, rank;
    int *parent,*rank;

public:
    graph(int v)
    {
        this->v = v;
        parent=new int [v+1];
        rank=new int [v+1];
        for (int i = 1; i <= v; i++)
        {
            parent[i]=i;
            rank[i]=1;
            // parent.push_back(i);
            // rank.push_back(1);
        }
    }
    void addEdge(int x, int y)
    {
        l.push_back({x, y});
    }

    int findset(int v)
    {
        if (parent[v] == v)
        {
            return v;
        }

        return parent[v] = findset(parent[v]);
    }

    void union_set(int x, int y)
    {
        x = findset(x);
        y = findset(y);
        if (x != y)
        {
            if (rank[x] < rank[y])
            {
                parent[x] = y;
                rank[y] += rank[x];
            }
            else
            {
                parent[y] = x;
                rank[x] += rank[y];
            }
        }
    }

    void fun()
    {

        for (auto edge : l)
        {
            union_set(edge.first, edge.second);
        }

        vector<int> a;
       for(int i=1;i<=v;i++)
        {
            if(parent[i]==i)
            a.pb(parent[i]);
        }
        sort(all(a));
        // a.resize(unique(all(a))-a.begin());
        if(a.size()==1)
        {
            cout<<0<<endl;
        }
        else{
            cout<<a.size()-1<<endl;
            for(int i=0;i<a.size()-1;i++)
            {
                cout<<a[i]<<" "<<a[i+1]<<endl;
            }
        }
    }
};

 
void solve(int _t)
{

    int n,m;
    cin>>n>>m;

    graph g(n);
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        g.addEdge(x,y);
    }
    g.fun();


}



signed  main ()

{
 IOS
 uint32_t test_case=1;
#ifndef ONLINE_JUDGE
 //freopen( "input.txt"  , "r"  , stdin);
 //freopen("output.txt","w",stdout);
#endif
int __t=test_case;

 while(test_case --){
 
solve(__t-test_case);
}  
return 0;
}