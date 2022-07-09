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

    string s;
    cin>>s;
    string s1(s.size(),s[0]);
    if(s1==s)
    {
        cout<<"YES"<<endl;
        return;
    }
    int n=s.size();
    bool flag=s[0]=='1'?true:false;
    // for(int i=0;i<n;i++)
    // {
    //     if(s[i]=='1')
    //     {
    //         flag=true;
    //         continue;
    //     }
    //     else if(!flag)
    //     {
    //         continue;
    //     }

    //     if(i-1>=0 and s[i-1]=='0' and s[i-1]==s[i] )
    //     {
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    // }
    for(int i=1;i<n;i++)
    {
        if(s[i-1]=='1' and s[i]==s[i-1])
        {
            if(i+2<n)
            for(int j=i+2;j<n;j++)
            {
                if(s[j-1]=='0' and s[j-1]==s[j])
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"YEs"<<endl;

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