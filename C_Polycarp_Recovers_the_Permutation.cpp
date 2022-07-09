// // // #include<bits/stdc++.h>

// // // using namespace std;
// // //  //#include<E:\Coding_and_Web\debug.cpp>

// // // #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

// // //  #define ll long long
// // //  #define eps 1e-6
// // // #define mod 1000000007
// // // #define ull uint64_t

// // // #define cmp [] (const auto &l, const auto &r) {return l > r;}
// // // #define all(v) v.begin(),v.end()
// // // #define fi first
// // // #define se second

// // // #define pb push_back
// // // #define vi vector<int>
// // // #define fori(n) for(int i=0;i<n;i++)

// // // //#define int int64_t

// // // void solve()
// // // {

// // //     int n;
// // //     cin>>n;
// // //     vector<int> v(n+1);
// // //     fori(n+1)cin>>v[i+1];

// // //    int i,j;
// // //     if(n%2)i=n/2+1;
// // //     else
// // //      i=n/2;

// // //     j=i+1;
// // //     string a="",b="";
// // //     while(i>=1 and j<=n)
// // //     {
// // //         if(v[i]<v[j])
// // //         {
// // //             a=a+to_string(v[i]);
// // //             i--;
// // //         }
// // //         else if(v[j]<v[i])
// // //         {
// // //             b=to_string(v[j])+b;
// // //             j++;
// // //         }

// // //     }
// // //     cout<<i<<j<<endl;
// // //     if(i!=0)
// // //     {
// // //         a=a+to_string(v[i]);
// // //     }
// // //     else if(j<=n)
// // //     {
// // //         b=to_string(v[j])+b;
// // //     }
// // //     cout<<a+b<<endl;
// // //       a="",b="";
// // //       v.clear();

// // // }

// // // int32_t main ()
// // // {
// // //  IOS
// // //  int tt;
// // //  cin>>tt;
// // //  while(tt--){
// // //  solve();
// // // }
// // // return 0;
// // // }

// // class Solution {
// // public:
// //     vector<int> findSubstring(string s, vector<string>& words) {

// //         unordered_map<string,in> mp,mp2;
// //         int x=30,y=1;

// //         for(int i=0;i<words.size();)
// //         {
// //             mp[words[i]]=1;
// //             if(words[i].size()>y)y=words[i].size();
// //             if(words[i].size()<x)x=words[i].size();
// //         }
// //         int n=s.size();
// //         vector<int> ans;
// //         mp2=mp;
// //         int cnt=0;
// //         for(int i=0;i<n;i++)
// //         {
// //             int cur_len=x;
// //             string t=s.substr(i,x);
// //             while(mp2[t]!=1 and cur_len<=y and cur_len+i<=n)
// //             {
// //                 t+=s[cur_len];
// //                 cur_len++;
// //             }
// //             if(mp2[t]==1)
// //             {
// //                 cnt++;
// //                 mp2[t]=2;

// //             }
// //             else if(cnt!=0){
// //                 cnt=0;
// //                 i+=cur_len;
// //                 continue;
// //             }

// //             if(cnt==words.size())
// //             {
// //                 ans.push_back(i);
// //                 cnt=0;
// //                 mp2.clear();
// //                 mp2=mp;
// //             }
// //         }

// //     }
// // };
// #include <bits/stdc++.h>

// using namespace std;
// #include <E:\Coding_and_Web\debug.cpp>

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ll long long
// #define eps 1e-6
// #define mod 1000000007

// #define cmp [](const auto &l, const auto &r) { return l > r; }
// #define all(v) v.begin(), v.end()
// #define ull uint64_t
// #define fi first
// #define se second

// #define pb push_back
// #define vi vector<int>
// #define fori(n) for (int i = 0; i < n; i++)

// //#define int  int64_t

// vector<int> findSubstring(string s, vector<string> &words)
// {

//     unordered_map<string, int> mp, mp2;
//     int x = 30, y = 1;

//     for (int i = 0; i < words.size();i++)
//     {
//         mp[words[i]] = 1;
//         if (words[i].size() > y)
//             y = words[i].size();
//         if (words[i].size() < x)
//             x = words[i].size();
//     }
//     debug(mp);
//     int n = s.size();
//     vector<int> ans;
//     mp2 = mp;
//     debug(mp2);
//     int cnt = 0;
//     int k=0;
//     for (int i = 0; i < n; )
//     {
//         int cur_len = x;
//         string t = s.substr(i, x);
//         debug(t, cur_len, i);
//         while (mp2[t] != 1 and cur_len <= y and cur_len + i < n)
//         {
//             t += s[cur_len + i];
//             cur_len++;
//         }
        
//         if (mp2[t] == 1)
//         {
//             cnt++;
//             mp2[t] = 2;
//         }
//         else if (cnt != 0)
//         {
//             cnt = 0;
//             i += cur_len;
//             continue;
//         }
//         if(cnt==1)k=i;
//         debug(cnt);
//         if (cnt == words.size())
//         {
//             ans.push_back(k);
//             cnt = 0;
//             mp2.clear();
//             mp2 = mp;
//         }
//         i += cur_len;
//     }

//     return ans;
// }

// int32_t main()
// {
//     IOS
//         string  s = "barfoothefoobarman";
//     vector<string> words = {"foo", "bar"};
//     vector<int> ans = findSubstring(s, words);
//     fori(ans.size()) cout << ans[i] << " ";
//     cout << endl;

//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;
 //#include<E:\Coding_and_Web\debug.cpp> 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
 #define eps 1e-6
#define mod 1000000007
#define ull uint64_t 

#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define all(v) v.begin(),v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)

//#define int int64_t





 
void solve()
{

    int n;
    cin>>n;
    int a[n];
    fori(n)cin>>a[i];
    vector<int> b(n);
    int i=0,j=n-1;
    int x,y;
    if(a[0]>a[n-1])
    {
        x=n/2;y=x+1;
    }
    else
    {
        x=n/2-1;y=x+1;
    }
    while(i<=j)
    {
        if(x<0||y>=n)
        {
            cout<<-1<<endl; 
            return;
        }
        else if(a[i]>a[j])
        {
            if()
            b[x--]=a[i++];
        }
        else if(a[i]<a[j])
        {
            b[y++]=a[j--];
        }
        fori(n)cout<<b[i]<<" ";
        cout<<endl;
    }
    fori(n)cout<<b[i]<<" ";
    cout<<endl;

}



int32_t main ()
{
 IOS
 uint32_t tt;
cin>>tt;
 while(tt--){
 solve();
}  
return 0;
}