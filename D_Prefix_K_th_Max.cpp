// #include <bits/stdc++.h>

// using namespace std;

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ll long long
// #define MOD 1000000007

// #define fi first
// #define se second
// #define pb push_back
// #define vi vector<int>

// int32_t main()
// {
//     IOS int n, k;
//     cin >> n >> k;
//     vector<int> v;
//     vector<int> temp;
//     int cnt = 1;
//     for (int i = 0; i < n; i++)
//     {
//         int t;
//         cin >> t;
//         v.pb(t);
//         if (cnt <= k)
//         {
//             temp.pb(t);
//             cnt++;
//         }
//     }
//     if (k == n)
//     {
//         sort(v.begin(), v.end());
//         for (int i = 0; i < n; i++)
//         {
//             cout << v[i] << "\n";
//         }
//     }
//     else
//     {
//         sort(temp.begin(), temp.end());
//         // vector<int> a;
//         priority_queue<int, vector<int>, greater<int>> q;

//         int i = 0;
//         // cout << temp[0]<<endl;
//         for (int l = k; l < n; l++)
//         {
//             if (temp[i] >= v[l])
//             {
//                 cout << temp[i] << "\n";
//                 // i++;
//             }
//             else if (temp[i] < v[l])
//             {
//                 q.push(v[l]);
//                 // sort(a.begin(),a.end());
//                 if (temp[i] < q.top())
//                 {
//                     cout << temp[i] << "\n";
//                     i++;
//                 }
//                 else
//                 {
//                     cout << q.top() << "\n";
//                     q.pop();
//                 }
//             }
//         }

//         if (temp[i] < q.top())
//         {
//             cout << temp[i] << "\n";
//             i++;
//         }
//         else
//         {
//             cout << q.top() << "\n";
//             q.pop();
//         }
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,K; cin >> N >> K;
	vector<int> P(N);
	for(int i=0; i<N; i++) cin >> P[i];
	priority_queue<int,vector<int>,greater<int> > que;
	for(int i=0; i<K; i++) que.push(P[i]);
	cout << que.top() << endl;
	for(int i=K; i<N; i++){
		if(que.top() < P[i]){
			que.pop();
			que.push(P[i]);
		}
		cout << que.top() << endl;
	}
}
