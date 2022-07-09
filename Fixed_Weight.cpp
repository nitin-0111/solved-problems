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

// // int mex(int a,int b)
// // {
// //     if(a>b)swap(a,b);

// //     if(a>0 and b>0)
// //     {
// //         return 0;
// //     }
// //     else if(a==0 and b!=1)
// //     {
// //         return 1;
// //     }

// // }




 
// void solve()
// {
//  int n;
//  cin>>n;
//  vector<int> v(n);
//  int c=0;
//  rep(i,n)
//  {
//      cin>>v[i];
//      if(v[i]==0)
//      {
//          c++;
//      }
//  }
// //  cout<<c<<endl;
//  cout<<max(c,(n-c))<<endl;

    

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


#define int int64_t

bool is_prime(int n)
{
    if(n==1)return false;

    if(n==2)return true;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}



 
void solve()
{

    int n,x;
    cin>>n>>x;
    for(int len=1;len<=n;len++)
    {
        if(x%len==0 and (((n-len+1))>=x/len))
        {
            cout<<"yes"<<endl;
            return;
        }
    }
    
    cout<<"No"<<endl;

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