#include<bits/stdc++.h>

using namespace std;
 #ifndef ONLINE_JUDGE 
 #include<D:\Coding_and_Web\debug.cpp>
 #else
 #define debug(x...)
 #endif 
#define all(v) v.begin(),v.end()
 #define ll long long
 #define eps 1e-6
#define mod 1000000007
#define pi (3.141592653589)
#define fi first
#define se second
#define prDouble(x) cout<<fixed<<setprecision(10)<<x

#define pb push_back
#define vi vector<int>

#define int int64_t





 
signed  main ()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int k=0;
    while(q--)
    {
        int choice,x;
        cin>>choice>>x;
        if(choice==1)
        {
             k+=x;
        }
        else
        {
            x--;
            int i=x-k+n;
            i%=n;
            if(i<0)
            {
                i+=n;
                i%=n;
            }
            cout<<s[i]<<endl;
        }
    }

return 0;}