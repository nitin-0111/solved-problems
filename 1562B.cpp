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

const int M = 15;
bitset<M> a;
vector<int> prime;
void primeSieve()
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

    int n;
    cin>>n;
    string s;
    cin>>s;
    int sum=0;
    unordered_map<int, > m;
    for(int i=0;i<n;i++)
    {
        sum+=s[i]-'0';
        m[s[i]-'0']=i;
        if(a[s[i]-'0']==0||s[i]=='1')
        {
            cout<<1<<endl;
            cout<<s[i]<<endl;
            return;
        }
    }
    int idx;
    if(sum%3!=0)
    {
        int l=sum%3;
     
         if(m.count(l)>0)
         {
             idx.pb(m[l]);
         }

         
     

    }
    

}



int32_t main ()
{
 IOS
 uint32_t tt;
 primeSieve();
cin>>tt;
 while(tt--){
 solve();
}  
return 0;
}