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

const int M = 1e7 + 5;
bitset<M> a;
vector<int> prime;
void seive()
{

   
    prime.push_back(2);
    a[2]=1;

    for (int i = 3; i <= M; i += 2)
    {
        a[i] = 1;
    }

   
    for (int i = 3; i * i <= M; i += 2)
    {
        if (a[i])
        {
            prime.push_back(i);
           

            for (int j = i * i; j <= M; j += 2 * i)
            {
                a[j] = 0;
            }
        }
    }
}



 
void solve()
{

    int d;
    cin>>d;
    int cnt=2;
    int ans=1;
    int pre=1;
    // 
    int p=0;
   for(int i=0;i<M;i++)
   {
       if(cnt==0)
       break;
       if((prime[i]-pre)>=d)
       {
           if(!p)p=prime[i];

           cnt--;
           ans*=prime[i];
           pre=prime[i];
       }
       
   }
   int res=p*p*p;

   ans=min(ans,res);
    
    cout<<ans<<endl;

}



int32_t main ()

{
 IOS
 uint32_t tt;
seive();
cin>>tt;
 while(tt--){
 
solve();
}  
return 0;
}