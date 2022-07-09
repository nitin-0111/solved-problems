// #include <bits/stdc++.h>

// using namespace std;

// #define IOS                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ll long long
// #define eps 1e-6

// #define mod 1000000007

// #define fi first
// #define se second
// #define pb push_back
// #define vi vector<int>

// int N = 101;
// vector<int> a(N, 1);

// void sieve()
// {
//     a[0] = a[1] = 0;
//     for (int i = 2; i < N; i += 2)
//     {
//         a[i] = 0;
//     }
//     a[2] = 1;
//     for (int i = 3; i * i < N; i += 2)
//     {
//         a[i] = 1;
//         for (int j = i * i; j < N; j += i)
//         {
//             a[j] = 0;
//         }
//     }
// }

// // ll cur=dp.max_size();
// unsigned ll M = 134217728/2;

// vector<ll> dp(M, 0);

// void dp_fun()
// {

//     dp[3] = 1;
//     for (unsigned ll i = 4; i < M; i++)
//     {
//         int x = __builtin_popcount(i);
//         // cout<<x<<endl;
//         if (a[x])
//         {
//             dp[i] = 1 + dp[i - 1];
//         }
//         else
//             dp[i] = dp[i - 1];
//     }
// }

// // unsigned ll  M =134217728 ;
// // vector<unsigned ll> dp2(M, 0);
// unsigned ll * dp2=new unsigned ll [M];

// const unsigned ll L = 1e19 - (M - 1);

// void dp2_fun()
// {
//     memset(dp2,0,sizeof(dp2));
//     int x = __builtin_popcount(L);
//     if (a[x])
//         dp2[0] = 1;
//     else
//         dp2[0] = 0;

//     for (unsigned ll i = 1; i < M; i++)
//     {
//         int x = __builtin_popcount(i + L);
//         // cout<<x<<endl;
//         if (a[x])
//         {
//             dp[i] = 1 + dp[i - 1];
//         }
//         else
//             dp[i] = dp[i - 1];
//     }
// }
// unsigned ll fun(unsigned ll x, unsigned ll y)
// {
//     unsigned ll ans = 0;
//     if (y < M)
//     {
//         ans = dp[y] - dp[x - 1];
//         return ans;
//     }
//     else if (x > L)
//     {
//         ans = dp[y - L] - dp[x - L];
//         return ans;
//     }
//     else
//     {
//         if (x < M)
//         {
//             ans = dp[M - 1] - dp[x - 1];

//             x = M;
//         }
//         while (x <= y)
//         {
//             int i = __builtin_popcount(x);
//             if (a[i])
//             {
//                 ans++;
//             }
//             x++;
//         }
//     }

//     return ans;
// }
// int32_t main()
// {
//     IOS
//     // cout<<M<<endl;
//     sieve();
//     dp_fun();
//     dp2_fun();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         unsigned long long x, y;
//         cin >> x >> y;
//         // cout << __builtin_popcount(b) << endl;
//         cout << fun(x, y) << endl;
//     }

//     return 0;
// }

#include<cstdio>
#include<iostream>
#include<string>
#include<cstdlib>
#include<queue>
#include<stack>
#include<utility>
#include<string>
#include<cstring>
#include<set>
#include<cmath>
#include<vector>
#include<fstream>
#include<map>
#include<list>
#include<algorithm>

typedef long long int LLD;
typedef unsigned long long int LLU;

using namespace std;

LLU nbitprime[65], ncr[65][65];
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61};

void init(){
	for(int i=0;i<65;i++)
		for(int j=0;j<65;j++)
			ncr[i][j] = 0;
}

void prepare_ncr(){
	init();
	for(int i=0;i<65;i++){
		ncr[i][0] = ncr[i][i] = 1;
		for(int j=1;j<i;j++)
			ncr[i][j] = ncr[i-1][j-1] + ncr[i-1][j];
	}
}

int find_bits(LLU num){
	int res = 0;
	while(num){
		res++;
		num >>= 1;
	}
	return res;
}

int find_set_bits(LLU num){
	int res = 0;
	while(num){
		if(num & 1)
			res++;
		num >>= 1;
	}
	return res;
}

LLU find_prime_for(int bits, LLU num){
	
	int posn = 0, set = find_set_bits(num), j = set-1;
	LLU res = 0, tmp = num;
	while(j){
		if(tmp & 1){
			j--;
			set--;
			for(int k = 0;k < 18 && primes[k] <= bits;k++){
				int n = posn;
				int r = primes[k] - set;
				if(n >= 0 && r >= 0 && r <= n)
					res += ncr[n][r];
				else if(r > n)
					break;
			}
		}
		tmp >>= 1;
		posn++;
	}
	set = find_set_bits(num);
	for(int i=0;i<18;i++)
		if(set == primes[i]){
			res++;
			break;
		}
	return res;
}

bool isprime(int num){
	for(int i=0;i<18;i++)
		if(num == primes[i])
			return true;
	return false;
}

LLU find_primes(LLU a, LLU b){
	LLD res = 0;
	int bita = find_bits(a);
	int bitb = find_bits(b);
	for(int i=bita+1;i<bitb;i++)
		res += nbitprime[i];
	LLU resa = find_prime_for(bita, a);
	LLU resb = find_prime_for(bitb, b);
	if(bita != bitb)
		res += (nbitprime[bita] - resa + (isprime(find_set_bits(a)) ? 1 : 0) + resb);
	else
		res += (resb - resa + (isprime(find_set_bits(a)) ? 1 : 0));
	return res;
}

void prepare_nbit_primes(){
	for(int i=1;i<65;i++){
		nbitprime[i] = 0;
		int n = i-1;
		for(int j=0;j < 18 && i >= primes[j];j++){
			int r = primes[j] - 1;
			nbitprime[i] += ncr[n][r];
		}
	}
}

int main(){
	
	LLU a, b;
	int t;
	prepare_ncr();
	prepare_nbit_primes();
	scanf("%d", &t);
	while(t--){
		scanf("%llu%llu", &a, &b);
		printf("%llu\n", find_primes(a, b));
	}
	return 0;
}