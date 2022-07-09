#include<bits/stdc++.h>

using namespace std;
 //#include<E:\Coding_and_Web\debug.cpp> 


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

    int a,b;
    cin>>a>>b;
    if((a+b)%2!=0)
    {
        cout<<-1<<" "<<-1<<endl;
        return;
    }

    int t=(a+b)/2;
    if(t>=min(a,b))
    {
        t=abs(min(a,b)-t);
        if(min(a,b)==a)
        {
            a=0;
            b-=t;
        }
        else
        {
            a-=t;
            b=0;
        }
        cout<<a<<" "<<b<<endl;
        return;
    }
    int k=t/2;
    t=t-k;
    a-=t;
    b-=k;
    cout<<a<<" "<<b<<endl;

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