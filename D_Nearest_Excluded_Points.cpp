// #include<bits/stdc++.h>

// using namespace std;

//  #ifndef ONLINE_JUDGE 

// #include<D:\Coding_and_Web\debug.cpp>
 
// #else// online submission 

// #endif 


// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

//  #define ll long long
//  #define eps 1e-6

// #define mod 1000000007

// #define pi (3.141592653589)

// #define ull uint64_t 

// #define cmp [] (const auto &l, const auto &r) {return l > r;}

// #define all(v) v.begin(),v.end()
// #define fi first
// #define se second
// #define rep(i,n) for(int i=0;i<n;i++)

// #define rrep(i,n) for(int i=n-1;i>=0;i--)


// #define pb push_back
// #define vi vector<int> 
// #define fori(n) for(int i=0;i<n;i++)


// //#define int int64_t





 
// void solve()
// {

//     int n;
//     cin>>n;
//     map<pair<int,int> ,int>  mp;
//     queue<int> q;
//     int d[]={-1,0,1,0,-1};
//     vector<int> x(n+1),y(n+1);
//     for(int i=1;i<=n;i++)
//     {
//         cin>>x[i]>>y[i];
//         mp[{x[i],y[i]}]=i;
//     }
//     vector<int> ansx(n+1),ansy(n+1);
//     vector<bool> st(n+1,false);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             int a=x[i]+d[j],b=y[i]+d[j];
//             if(!mp[{a,b}])
//             {
//                ansx[i]=a,ansy[i]=b;
//                st[i]=true;
//                q.push(i);
//                break;
//             }
//         }
//     }
//     while(q.size())
//     {
//         int t=q.front();
//         q.pop();
//         for(int i=0;i<4;i++)
//         {
//             int a=x[t]+d[i],b=y[t]+d[i+1];
//             int u=mp[{a,b}];
//             if(u && !st[u])
//             {
//                st[u]=true;
//                ansx[u]=ansx[t],ansy[u]=ansy[t];
//                q.push(u);
//             }
//         }
//     }
//     for(int i=1;i<=n;i++)cout<<ansx[i]<<" "<<ansy[i]<<endl;


// }



// int32_t main ()

// {
//  IOS
//  uint32_t tt=1;

//  while(tt--){
 
// solve();
// }  
// return 0;
// }

#include <bits/stdc++.h>
#define PII pair<int, int>

using namespace std;


 #ifndef ONLINE_JUDGE 

#include<D:\Coding_and_Web\debug.cpp>
 
#else// online submission 

#endif
const int N=2e5+5;
int d[]={-1, 0, 1, 0, -1};
map<PII, int> mp;
queue<int> q;
int x[N], y[N], ansx[N]={-1}, ansy[N]={-1};
bool st[N];
 
int main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) 
	{
		cin>>x[i]>>y[i];
		mp[{x[i], y[i]}]=i;
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<4; j++)
		{
			int a=x[i]+d[j], b=y[i]+d[j+1];
            // debug(i, a,b);
			if(!mp[{a, b}])
			{
				ansx[i]=a, ansy[i]=b;
				st[i]=true;
                debug("yes",i);
				q.push(i);
				break;
			}
            
		}
	}
	while(q.size())
	{
		int t=q.front();
		q.pop();
		for(int i=0; i<4; i++)
		{
			int a=x[t]+d[i], b=y[t]+d[i+1];
			int u=mp[{a, b}];
			if(u && !st[u])
			{
				st[u]=true;
				ansx[u]=ansx[t], ansy[u]=ansy[t];
				q.push(u);
			}
		}
	}
    for(int i=1; i<=n; i++) cout<<ansx[i]<<' '<<ansy[i]<<endl;
}