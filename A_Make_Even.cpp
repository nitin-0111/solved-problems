// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long
// #define MOD 1000000007

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//        int f=0,mi=0,l=0;
//        int m=n;
//        vector<int> a;
//        while(m>10)
//        {
//            int temp=m%10;
//            a.push_back(temp);
//            m/=10;
//        }
//        for(int i=0;i<a.size();i++)
//        {
//            if(i==0&&a[i]%2==0)
//            {
//                f=1;
//                break;
//            }

//            if(i==a.size()-1&&a[i]%2==0)
//            {
//                l=1;
//                break;
//            }

//            if(i!=0&&i!=(a.size()-1)&&a[i]%2==0)
//            {
             
              
//                mi=1;
//                break;
//            }

//        }
//         if (f)
//         {
//             cout << 0 << endl;
//         }
//         else if (l)
//         {
//             cout << 1 << endl;
//         }
//         else if (mi)
//         {
//             cout << 2 << endl;
//         }
//         else
//             cout << -1 << endl;
//     }
//     return 0;
// }
// /*INPUT: 



// OUTPUT:

// */


#include<bits/stdc++.h>

using namespace std;
//  #include<E:\Coding_and_Web\debug.cpp> 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
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
    if(n%2==0)
    {
        cout<<0<<endl;
        return;
    }

    bool last=false;
    bool even=false;
    while(n)
    {
        int d=n%10;
        if(!(d&1) and !even)
        {
            even=true;
        }
        if(!(d&1) and n%10==n)
        {
            last=true;
        }
        // debug(d,even,last,n);
        n/=10;
    }

    if(last)
    {
        cout<<1<<endl;
        return;
    }
    if(even)
    {
        cout<<2<<endl;
        return;
    }

    cout<<-1<<endl;

}



int32_t main ()
{
 IOS
 int tt;
 cin>>tt;
 while(tt--){
 solve();
}  
return 0;
}