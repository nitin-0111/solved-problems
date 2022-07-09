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

//     int n;
//     cin >> n;
//     vector<int> odd, even;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         if (x & 1)
//         {
//             odd.pb(x);
//         }
//         else
//         {
//             even.pb(x);
//         }
//     }
//     sort(all(odd));
//     sort(all(even));
//     int i = odd.size() - 1;
//     int j = even.size() - 1;
//     int t = (n + 1) / 2;
//     int sum = 0;
//     while (t--)
//     {
//         if (odd[i] > 2 * even[j])
//         {
//             odd[i] = 0;
//             i -= 2;
//         }
//         else
//         {
//             sum += even[j];
//             j--;
//         }
//     }
//     int oddsum = accumulate(all(odd), 0);
//     if (oddsum < sum)
//     {
//         cout << "Alice" << endl;
//     }
//     else if (oddsum > sum)
//     {
//         cout << "Bob" << endl;
//     }
//     else
//         cout << "Tie" << endl;


//         return;
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


#define int int64_t





 
void solve()
{

    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)
    cin>>a[i];

    sort(all(a));
    int k=1;
    int sume=0,sumo=0;
    for(int i=a.size()-1;i>=0;i--)
    {
         if(k)
         {
             if(a[i]&1)
             {
                 k=1-k;
                 continue;
             }
             else
             {
                 sume+=a[i];
                 k=1-k;
             }
         }
         else
         {
            if(a[i]&1)
            {
                sumo+=a[i];
                k=1-k;
                continue;

            }
            else
            {
                k=1-k;
                continue;
            }
         }
    }
    // cout<<sumo<<" "<<sume<<endl;
    if(sumo==sume)
    {
        cout<<"Tie"<<endl;
    }
    else if(sume>sumo)
    {
        cout<<"Alice"<<endl;
    }
    else
    {
        cout<<"Bob"<<endl;
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