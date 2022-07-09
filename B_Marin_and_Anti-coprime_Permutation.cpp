#include<bits/stdc++.h>

using namespace std;

 #ifndef ONLINE_JUDGE 
#include<D:\Coding_and_Web\debug.cpp>
 
#else// online submission 

#endif 


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(v) v.begin(),v.end()
#define uniq(v) v.erase(unique(all(v)),v.end()) 
#define sz(x) (int)((x).size())
 #define ll long long
 #define eps 1e-6
#define mod 998244353 
#define pi (3.141592653589)
#define ull uint64_t 
#define cmp [] (const auto &l, const auto &r) {return l > r;}
#define fi first
#define se second
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mem1(a) memset(a,-1,sizeof(a) )
#define mem0(a) memset(a,0,sizeof(a) ) 
#define prDouble(x) cout<<fixed<<setprecision(10)<<x
#define rrep(i,n) for(int i=n-1;i>=0;i--)
//__builtin_ctz(x)  __builtin_popcountll(x)

#define pb push_back
#define vi vector<int>

#define int int64_t


// const int N = 3e5 + 9, mod = 998244353 ;
// template <int32_t MOD>
// struct modint {
//   int32_t value;
//   modint() = default;
//   modint(int32_t value_) : value(value_) {}
//   inline modint<MOD> operator + (modint<MOD> other) const { int32_t c = this->value + other.value; return modint<MOD>(c >= MOD ? c - MOD : c); }
//   inline modint<MOD> operator - (modint<MOD> other) const { int32_t c = this->value - other.value; return modint<MOD>(c <    0 ? c + MOD : c); }
//   inline modint<MOD> operator * (modint<MOD> other) const { int32_t c = (int64_t)this->value * other.value % MOD; return modint<MOD>(c < 0 ? c + MOD : c); }
//   inline modint<MOD> & operator += (modint<MOD> other) { this->value += other.value; if (this->value >= MOD) this->value -= MOD; return *this; }
//   inline modint<MOD> & operator -= (modint<MOD> other) { this->value -= other.value; if (this->value <    0) this->value += MOD; return *this; }
//   inline modint<MOD> & operator *= (modint<MOD> other) { this->value = (int64_t)this->value * other.value % MOD; if (this->value < 0) this->value += MOD; return *this; }
//   inline modint<MOD> operator - () const { return modint<MOD>(this->value ? MOD - this->value : 0); }
//   modint<MOD> pow(uint64_t k) const {
//     modint<MOD> x = *this, y = 1;
//     for (; k; k >>= 1) {
//       if (k & 1) y *= x;
//       x *= x;
//     }
//     return y;
//   }
//   modint<MOD> inv() const { return pow(MOD - 2); }  // MOD must be a prime
//   inline modint<MOD> operator /  (modint<MOD> other) const { return *this *  other.inv(); }
//   inline modint<MOD> operator /= (modint<MOD> other)       { return *this *= other.inv(); }
//   inline bool operator == (modint<MOD> other) const { return value == other.value; }
//   inline bool operator != (modint<MOD> other) const { return value != other.value; }
//   inline bool operator < (modint<MOD> other) const { return value < other.value; }
//   inline bool operator > (modint<MOD> other) const { return value > other.value; }
// };
// template <int32_t MOD> modint<MOD> operator * (int64_t value, modint<MOD> n) { return modint<MOD>(value) * n; }
// template <int32_t MOD> modint<MOD> operator * (int32_t value, modint<MOD> n) { return modint<MOD>(value % MOD) * n; }
// template <int32_t MOD> istream & operator >> (istream & in, modint<MOD> &n) { return in >> n.value;}
// template <int32_t MOD> ostream & operator << (ostream & out, modint<MOD> n) { return out << n.value; }

// using mint = modint<mod>;

// mint fact(int n)
// {
//     if(n<2)return (mint)n;
//     return (mint)n*fact(n-1);
// }
 
 int fact(int n)
 {
     if(n<2)return 1;
     return (((n)%mod)*(fact(n-1)%mod))%mod;
 }
void solve()
{

    int n;
    cin>>n;
    if(n&1)
    {
        cout<<0<<endl;
        return;
    }
    int ans=(fact(n/2)*fact(n/2))%mod;
    if(ans<0)ans+=mod;
    cout<<ans<<endl;


}



signed  main ()

{
 IOS
 uint32_t test_case;
#ifndef ONLINE_JUDGE
 //freopen( "input.txt"  , "r"  , stdin);
 //freopen("output.txt","w",stdout);
#endif

cin>>test_case;
 while(test_case --){
 
solve();
}  
return 0;
}