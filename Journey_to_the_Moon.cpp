#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define MOD 1000000007
int N = 1000000;
int ncr(int n,int r)
{
    if(r>n)
    {
        return 0;
    }
     if (r==0||r==n)
     {
         return 1;
     }
     if (r==1||r==n-1)
     {
         return n;
     }
     return ncr(n-1,r-1)+ncr(n-1,r);
}
template <typename T>

class Graph
{
  map<T, list<T>> l;

public:
  void addEdge(T x, T y)
  {
    l[x].push_back(y);
    // l[y].push_back(x);
  }

  
  int  size_of(T src ,map<T,bool> &visited)
  {
    visited[src]=true;
    int ans=1;
    for(T nbr:l[src])
    {
      if(!visited[nbr])
      {
        ans++;

      }
    }
    return ans;
  }
  ll fun(T src,vector<int> country)
  {
    map<T, bool> visited;
    for(auto p: l)
    {
       T node=p.first;
       visited[node]=false;

    }
    int minus=0;
    for(auto p:l)
    {
      T node=p.first;
      if(!visited[node])
      {
        //  minus+=ncr(size_of(node,visited),2);
        country.push_back(size_of(node,visited));

      }
    }
    ll sum=0;
    ll result=0;

    for(int i=0;i<country.size()-1;i++)
    {
        sum+=country[i];
        result+=sum*country[i+1];
    }
    // cout<<minus<<endl;
    return result;
  }
  

 
};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  Graph<int> g;
  int n, p;
  cin >> n >> p;
  int **in = new int *[p];
 
  vector<int > country(n,0);
  for (int i = 0; i < p; i++)
  {
    in[i] = new int[2];
    for (int j = 0; j < 2; j++)
    {
      cin >> in[i][j];
    }
    g.addEdge(in[i][0], in[i][1]);
  }
   cout<< g.fun(in[0][0],country)<<endl;

  return 0;
}
/*INPUT: 



OUTPUT:

*/

