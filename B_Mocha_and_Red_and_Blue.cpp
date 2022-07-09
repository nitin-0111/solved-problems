// #include <bits/stdc++.h>

// using namespace std;
// // #include <E:\Coding_and_Web\debug.cpp>

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ll long long
// #define eps 1e-6
// #define mod 1000000007
// #define ull uint64_t

// #define cmp [](const auto &l, const auto &r) { return l > r; }
// #define all(v) v.begin(), v.end()
// #define fi first
// #define se second

// #define pb push_back
// #define vi vector<int>
// #define fori(n) for (int i = 0; i < n; i++)

// //#define int int64_t

// int n;
// void dfs(string &s, int i)
// {
//     if (i < 0 || i >= n)
//     {
//         return;
//     }
    
//     if (s[i] == 'B')
//     {
//         if (i - 1 >= 0 and s[i - 1] == '?')
//         {
//             s[i - 1] = 'R';
//             dfs(s, i - 1);
//         }

//         if (i + 1 < n and s[i + 1] == '?')
//         {
//             s[i + 1] = 'R';
//             dfs(s, i + 1);
//         }
//     }
//     else if (s[i] == 'R')
//     {
//         if (i - 1 >= 0 and s[i - 1] == '?')
//         {
//             s[i - 1] = 'B';
//             dfs(s, i - 1);
//         }

//         if (i + 1 < n and s[i + 1] == '?')
//         {
//             s[i + 1] = 'B';
//             dfs(s, i + 1);
//         }
//     }
//     return;
// }

// void solve()
// {

//     cin >> n;
//     string s;
//     cin >> s;

//     // cout << " yes " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] != '?')
//         {
           
//             dfs(s, i);
//         }
//     }
//     int k=0;
//     string t="BR";
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]=='?')
//         {
//              s[i]=t[k];
//              k=1-k;
//         }
//     }
//     cout << s << endl;
// }

// int32_t main()
// {
//     IOS
//         uint32_t tt;
      
//     cin >> tt;
    
//     while (tt--)
//     {
//         solve();
//     }
//     return 0;
// // }

#include<bits/stdc++.h>

using namespace std;
 #include<E:\Coding_and_Web\debug.cpp> 


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
    string s;
    cin>>s+1;
    for (int i=2;i<=n;i++)
			if (s[i]=='?'&&s[i-1]!='?')
            {
				s[i]=s[i-1]^('B'^'R');
                debug(s[i-1],s[i])

            }
		for (int i=n-1;i;i--)
			if (s[i]=='?'&&s[i+1]!='?')
				s[i]=s[i+1]^('B'^'R');
		printf("%s\n",s+1);
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