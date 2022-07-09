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


int fun(int a,int b)
{
    if(a==0)
    {
        return 0;
    }
    if(b>a)return 1;
    int op1=1+fun(a/b,b);
    int op2=1+fun(a,b+1);
    return min(op1,op2);
}


 
void solve()
{

    int a,b;
    cin>>a>>b;
    int cnt=0;
    // int k=a,ma=INT_MIN;
    if(b>a){
        cout<<1<<endl;
        return;
    }
    else if(a==b)
    {
        cout<<2<<endl;
        return;
    }
//    cout<<fun(a,b)<<endl;
      while(a)
      {
          int op1=(a/(b*b));
          int op2=(a/(b+1));
        //   int l=min(op1,op2);
        //   debug(a,b,cnt,op1,op2);
          if(op1<op2)
          {
              a/=b;
              cnt++;

          }
          else{
              b++;
              cnt++;
          }
      }
      cout<<cnt<<endl;

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