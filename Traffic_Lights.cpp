// #include<bits/stdc++.h>

// using namespace std;

//  #ifndef ONLINE_JUDGE 
// #include<D:\Coding_and_Web\debug.cpp>
 
// #else// online submission 

// #endif 


// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

// #define ppb pop_back
// #define pf push_front
// #define ppf pop_front
// #define all(v) v.begin(),v.end()
// #define uniq(v) v.erase(unique(all(v)),v.end()) 
// #define sz(x) (int)((x).size())
//  #define ll long long
//  #define eps 1e-6
// #define mod 1000000007
// #define pi (3.141592653589)
// #define ull uint64_t 
// #define cmp [] (const auto &l, const auto &r) {return l > r;}
// #define fi first
// #define se second
// #define prDouble(x) cout<<fixed<<setprecision(10)<<x
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define mem1(a) memset(a,-1,sizeof(a) )
// #define mem0(a) memset(a,0,sizeof(a) ) 
// #define rrep(i,n) for(int i=n-1;i>=0;i--)

// #define pb push_back
// #define vi vector<int>

// #define int int64_t

// void fun(map<int,set<pair<int,int> >> mp)
// {
//     for(auto x:mp)
//     {
//         cout<<x.fi<<"-> ";
//         for(auto y:x.se)
//         {
//             cout<<y.fi<<" "<<y.se<<" "<<endl;
//         }
    
//     }
//     cout<<endl;
//     cout<<endl;
// }



 
// void solve()
// {

//     int l,n;
//     cin>>l>>n;
//     set<int> s;
//     s.insert(0);
//     s.insert(l);
//     map<int,set<pair<int,int> > > mp;
//     mp[l].insert({0,l});
//     vector<int> input;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         input.pb(x);

//     }
//     for(int i=0;i<n;i++)
//     {
//         int x=input[i];
       
//         auto it=s.upper_bound(x);
//         int b=*it,a;
//         --it;
//         a=*it;

//         int k=b-a;
//         // debug(a,b,k);
//         mp[k].erase({a,b});
//         if(mp[k].size()==0)
//         mp.erase(k);
//          s.insert(x);
//         mp[x-a].insert({a,x});
//         mp[b-x].insert({x,b});
//            auto it1=mp.rbegin();
//     // cout<<"x "<<x<<endl;
//         //    fun(mp);

//         cout<<it1->fi<<" ";
//         // cout<<endl;
//         // cout<<endl;


//     }
//    cout<<endl;
// }



// signed  main ()

// {
//  IOS
//  uint32_t test_case=1;
// #ifndef ONLINE_JUDGE
//  //freopen( "input.txt"  , "r"  , stdin);
//  //freopen("output.txt","w",stdout);
// #endif

//  while(test_case --){
 
// solve();
// }  
// return 0;
// }







class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& f, vector<int>& p) {
      int n=f.size();
      for(int i=0;i<n;i++)
      {
          reverse(f[i].begin(),f[i].end());
      }
      sort(f.begin(),f.end());
     for(int i=0;i<n;i++)
      {
          reverse(f[i].begin(),f[i].end());
      }
   vector<int> ans;
      for(int k=0;k<p.size();k++)
      {
            int x=p[k];
            int i=0,j=n-1;
            int l=i,r=j
            while(i<=j)
            {
                int mid=(i+j)/2;
                if(f[mid][1]>=x)
                {
                    r=mid;
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
            i=0,j=n-1;
            while(i<=j)
            {
                int mid=(i+j)/2;
                if(f[mid][0])
            }
      }
        
    }
};