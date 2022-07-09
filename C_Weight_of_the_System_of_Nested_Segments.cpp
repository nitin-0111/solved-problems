#include <bits/stdc++.h>
using namespace std;
using ll=long long;
array<ll,3> X[(int)2e5+1];
ll t,n,m,i,x,w;
int main() {
	cin>>t;
	while(t--) {
		cin>>n>>m;
		for(i=0;i<m;++i) cin>>x>>w, X[i]={w,x,i+1};
		sort(X, X+m);
		for(i=0,w=0;i<n+n;++i) w+=X[i][0];
		cout<<w<<'\n';
		sort(X, X+n+n, [](auto&a,auto&b) { return a[1]<b[1]; });
		for(i=0;i<n;++i) cout<<X[i][2]<<' '<<X[n+n-i-1][2]<<'\n';
		puts("");
	}
}