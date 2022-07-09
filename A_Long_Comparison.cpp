#include<bits/stdc++.h>

using namespace std;
 //#include<E:\Coding_and_Web\debug.cpp> 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
 #define eps 1e-7
#define mod 1000000007
#define ull uint64_t 

#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define all(v) v.begin(),v.end()
#define fi first
#define se second

#define pb push_back
#define vi vector<int> 
#define fori(n) for(int i=0;i<n;i++)

#define int int64_t





 
void solve()
{

    float a,b;
    int x,y;
    cin>>a>>x;
    cin>>b>>y;
    while(a>9)
    {
        a/=10;
        x++;
    }
    while(b>9)
    {
        b/=10;
        y++;
    }
    if(x>y)
    {
        cout<<">"<<endl;
    }
    else if(x<y)
    {
        cout<<"<"<<endl;
    }
    else 
    {
        if(x==y and abs(a-b)<eps)
        {
            cout<<"="<<endl;
        }
        else{
            if(a>b)
            {
                cout<<">"<<endl;
            }
            else
            {
                cout<<"<"<<endl;
            }
        }
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