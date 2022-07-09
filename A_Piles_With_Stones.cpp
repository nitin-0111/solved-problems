// #include<bits/stdc++.h>

// using namespace std;
//  //#include<E:\Coding_and_Web\debug.cpp>

// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

//  #define ll long long
//  #define eps 1e-6
// #define mod 1000000007

// #define cmp [] (const auto &l, const auto &r) {return l > r;}
// #define all(v) v.begin(),v.end()
// #define ull uint64_t 
// #define fi first
// #define se second

// #define pb push_back
// #define vi vector<int> 
// #define fori(n) for(int i=0;i<n;i++)

// //#define int  int64_t


 
// int32_t main ()
// {
//  IOS
  
//     int n;
//     cin>>n;
//     int ans=0;
//     fori(n)
//     {
//         int t;
//         cin>>t;
//         ans^=t;

//     }
//     fori(n)
//     {
//          int t;
//         cin>>t;
//         ans^=t;

//     }
//     if(ans==0)
//     {
//         cout<<"YES"<<endl;
//     }
//     else
//     {
//         cout<<"NO"<<endl;
//     }
// return 0;
// }
#include<bits/stdc++.h>

using namespace std;
 //#include<E:\Coding_and_Web\debug.cpp>

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
 #define eps 1e-6
#define mod 1000000007

#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define all(v) v.begin(),v.end()
#define ull uint64_t 
#define fi first
#define se second

#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)

//#define int  int64_t


 
int32_t main ()
{
 IOS
  
    int n;
    cin>>n;
    int a[n],b[n];
    fori(n)
    {
        cin>>a[i];
    }
    int zero=0;
    fori(n)
    {
        cin>>b[i];
        if(!b[i])zero++;
    }
    sort(a,a+n);
    sort(b,b+n);
    int k=zero;
    fori(n)
    {
        if(a[i]==b[i+k])
        {
            continue;
        }
        else 
        {
            if(zero>0)
            {
                zero--;
                continue;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }


        }
    }
    cout<<"Yes"<<endl;

return 0;
}