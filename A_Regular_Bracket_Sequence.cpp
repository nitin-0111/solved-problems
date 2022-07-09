// #include <bits/stdc++.h>

// using namespace std;

// #ifndef ONLINE_JUDGE

// #include <D:\Coding_and_Web\debug.cpp>

// #else // online submission

// #endif

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ll long long
// #define eps 1e-6

// #define mod 1000000007

// #define pi (3.141592653589)

// #define ull uint64_t

// #define cmp [](const auto &l, const auto &r) { return l > r; }

// #define all(v) v.begin(), v.end()
// #define fi first
// #define se second
// #define rep(i, n) for (int i = 0; i < n; i++)

// #define rrep(i, n) for (int i = n - 1; i >= 0; i--)

// #define pb push_back
// #define vi vector<int>
// #define fori(n) for (int i = 0; i < n; i++)

// //#define int int64_t

// void solve()
// {

//     string s;
//     cin >> s;
//     int n = s.size();
//     int l = n;
//     if (s[0] == ')' ||s[n-1]=='('||n&1)
//     {
//         cout << "NO" << endl;
//         return;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         if(s[i]==')')
//         for(int j=i-1;j<n;j--)
//         {
//            if(s[j]=='('||s[j]=='?')
//            {
//                s[j]='0';
//                s[i]='0';
//                l-=2;
//                break;
//            }
//         }
//     }
    
//     for(int i=n-2;i>=0;i--)
//     {
//         if(s[i]=='(')
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(s[j]=='?')
//                 {
//                     s[j]='0';
//                     s[i]='0';
//                     l-=2;
//                     break;
//                 }
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]=='?')
//         l--;
//     }
//     // cout<<s<<" "<<l<<endl;
//     if(l==0)
//     {
//         cout<<"Yes"<<endl;
//         return;
//     }
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
// }

#include<bits/stdc++.h>

using namespace std;

 #ifndef ONLINE_JUDGE 

#include<D:\Coding_and_Web\debug.cpp>
 
#else// online submission 

#endif 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
 #define eps 1e-6

#define mod 1000000007

#define pi (3.141592653589)

#define ull uint64_t 

#define cmp [] (const auto &l, const auto &r) {return l > r;}

#define all(v) v.begin(),v.end()
#define fi first
#define se second
#define rep(i,n) for(int i=0;i<n;i++)

#define rrep(i,n) for(int i=n-1;i>=0;i--)


#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)


//#define int int64_t





 
void solve()
{

    string s;
    cin>>s;
    if(s.size()%2 ||s[0]==')'||s[s.size()-1]=='(')
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"Yes"<<endl;

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