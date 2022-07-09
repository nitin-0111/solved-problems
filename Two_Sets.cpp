// // // #include<bits/stdc++.h>

// // // using namespace std;

// // // #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

// // //  #define ll long long
// // // #define MOD 1000000007

// // // #define fi first
// // // #define se second
// // // #define pb push_back
// // // #define vi vector<int>

// // // int32_t main ()
// // // {	 IOS

// // //     int n;
// // //     cin>>n;
// // //     if(n==1)
// // //     {
// // //         cout<<"NO"<<endl;
// // //         exit(0);
// // //     }

// // //    int i=1,j=n,cnt=1;
// // //    vector<int> a,b;
// // //    while(i<=j)
// // //    {
// // //        if(cnt%2!=0)
// // //        {
// // //            a.pb(i); i++;
// // //            a.pb(j); j--;

// // //        }
// // //        else
// // //        {
// // //            b.pb(i); i++;
// // //            b.pb(j);j--;
// // //        }
// // //        cnt++;
// // //    }
// // //    cout<<i<<j<<endl;
// // // //    if(i!=j||cnt&1==1)
// // // //    {
// // // //        cout<<"NO"<<endl;
// // // //    }
// // // //    else
// // // //    {
// // //        cout<<"YES"<<endl;
// // //        cout<<a.size()<<endl;
// // //        for(int x: a)cout<<x<<" ";
// // //        cout<<endl;
// // //        cout<<b.size()<<endl;
// // //        for(int x:b)cout<<x<<" ";
// // //        cout<<endl;
// // // //    }
// // // return 0;
// // // }

// // #include <bits/stdc++.h>

// // using namespace std;

// // #define IOS                           \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);

// // #define ll long long
// // #define mod 1000000007

// // #define cmp [](const auto &l, const auto &r) { return l > r; }
// // #define all(v) v.begin(), v.end()
// // #define fi first
// // #define se second

// // #define pb push_back
// // #define vi vector<int>
// // #define fori(n) for (int i = 0; i < n; i++)

// // //#define int ll
// // bool cmp1(int a, int b)
// // {
// //     return a > b;
// // }

// // int32_t main()
// // {
// //     IOS

// //         int n;
// //     cin >> n;
// //     if (n * (n + 1) % 4)
// //     {
// //         cout << "NO" << endl;
// //     }

// //     else
// //     {
// //         vector<int> a[2];
// //         int k = 0;
// //         if (n %4==0)
// //         {
// //           int i=1,j=n;
// //           while(i<j)
// //           {
// //               a[k].pb(i);
// //               a[k].pb(j);
// //               k=1-k;
// //               i++;j--;
// //           }
// //         }
// //         else
// //         {

// //             for (int i = 1; i <= n;)
// //             {
// //                 if (i % 4 == 1)
// //                 {
// //                     a[k].pb(i);
// //                     if (i + 1 > n)
// //                     {
// //                         break;
// //                     }
// //                     a[k].pb(i + 1);
// //                     i += 2;
// //                     k = 1 - k;
// //                     continue;
// //                 }
// //                 a[k].pb(i);
// //                 k = 1 - k;
// //                 i++;
// //             }
// //         }
// //         cout << "YES" << endl;
// //         sort(all(a[0]), cmp1);
// //         cout << a[0].size() << endl;
// //         for (auto x : a[0])
// //         {
// //             cout << x << " ";
// //         }
// //         cout << endl;
// //         cout << a[1].size() << endl;
// //         sort(all(a[1]), cmp1);
// //         for (auto x : a[1])
// //         {
// //             cout << x << " ";
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
//     int n;
//     cin >> n;
//     vector<int> s1,s2;

//     int csum = (n*(n+1))/2;

//     if(csum%2){
//         cout << "NO\n";
//         return;
//     }

//     else{
//         cout << "YES\n";
//         if(n%2 == 0){
//             int i = 1, j = n;

//             while(i < j){
//                 if(i%2){
//                     s1.push_back(i);
//                     s1.push_back(j);
//                 }
//                 else{
//                     s2.push_back(i);
//                     s2.push_back(j);
//                 }
//                 i++,j--;
//             }
//         }
//         else{
//             s1.push_back(n);
//             n--;
//             int i = 1, j = n;
//             while(i < j){
//                 if(i%2 == 0){
//                     s1.push_back(i);
//                     s1.push_back(j);
//                 }
//                 else{
//                     s2.push_back(i);
//                     s2.push_back(j);
//                 }
//                 i++,j--;
//             }
//         }
//     }
//     cout << s1.size() << "\n";
//     for(auto& x : s1){
//         cout << x << " ";
//     }
//     cout << "\n";
//     cout << s2.size() << "\n";
//     for(auto& x : s2){
//         cout << x << " ";
//     }
//     cout << "\n";
// }

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     solve();

//     return 0;
// }

class Solution
{
public:
    int largestRectangleArea(vector<int> &a)
    {
        stack<int> s;
        int area = 0;
        int n = a.size();
        for (int i = 0; i < n; i++)
        {
            if (s.empty())
            {
                s.push(a[i]);
                continue;
            }
            if (s.top() <= a[i])
            {
                s.push(a[i]);
                continue;
            }

            if (s.top() > a[i])
            {
                int h =a[i], w = 0;
                while (!s.empty() && s.top() >= a[i])
                {
                    w++;
                area = max(area, h * w);
                    h = s.top();
                    s.pop();
                }

                s.push(a[i]);
                cout << area << endl;
            }
        }
        if (!s.empth())
        {
            int h = s.top(), w = 0;
            while (!s.empty())
            {
                h = s.top();
                w++;
                area = max(area, h * w);
                s.pop();
            }
        }
        return area;
    }
};