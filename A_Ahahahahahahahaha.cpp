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
//     vector<int> a(n);
//     rep(i,n)cin>>a[i];

//     vector<int> b;
//     int i=0,j=1;
//     while(j<n)
//     {
//         if(a[i]!=a[j])
//         {
//             if(a[i]==1)
//             {
//                 b.pb(i);
//             }
//             else
//                b.pb(j);
//         }
//         i+=2;
//         j+=2;
//     }

//     for(int i=0;i<b.size();i++)
//     {
//         a.erase(a.begin()+b[i]);
//     }

//     cout<<a.size()<<endl;
//     for(int i=0;i<a.size();i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;


// }



// int32_t main ()

// {
//  IOS
//  uint32_t tt;

// cin>>tt;
//  while(tt--){
 
// solve();
// }  
// return 0;
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

    int n;
    cin>>n;
    vector<int> a(n);
    int cnt0=0,cnt1=0;
    rep(i,n)
    {
        cin>>a[i];
        if(a[i])cnt1++;
        else
         cnt0++;
    }
    if(cnt1<=n/2)
    {
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++)
        {
            cout<<0<<" ";
        }
        cout<<endl;
    }
    else
    {
       if(cnt1&1)
       {
           vector<int> b;
           for(int i=0;i<n;i++)
           {
               if(!a[i])
               {
                  b.pb(i);
               }
           }
           for(int i=0;i<b.size();i++)
           {
               a.erase(a.begin()+b[i]);
           }
           a.erase(a.begin());
       }
       cout<<a.size()<<endl;
       for(int i=0;i<a.size();i++)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
    }

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