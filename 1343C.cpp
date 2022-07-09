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


// #define int int64_t





 
// void solve()
// {

//     int n;
//     cin>>n;
//     vector<int> a(n);
//     vector<int> b;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
       
        
        
//     }

//     int sum=0;
//     int k=0;
//     int mx=0;

//     for(int i=0;i<n;i++)
//     {
//         if(a[i]>0 )
//         {
//             if(mx<a[i])
//             {
//                 mx=a[i];
//             }
//             continue;

//         }
//         else if(!k) {
//             sum+=mx;
//             mx=0;
//         }

//         if(a[i]<0)
//         {
//             if(mx<)
//         }
        


//     }
//     cout<<sum<<endl;
//     debug("doen");




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





 
void solve()
{

    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];

    int i=0,j=0;
    int mx=INT_MIN;
    int     sum=0;
    while(j<n)
    {
        if((a[i]*a[j])>0)
        {
            mx=max(a[j],mx);
            j++;
        }
        else 
        {
            // debug(i,j,mx,sum);
            sum+=mx;
            mx=INT_MIN;
            i=j;
        }


        
    }
    if(mx!=INT_MIN )
    {
        sum+=mx;
    }
    cout<<sum<<endl;

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