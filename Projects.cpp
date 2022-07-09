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




// bool cmp1(pair<int,pair<int,int> > a, pair<int,pair<int,int> >b )
// {
//     return a.se.fi<b.se.fi;
// }
// int fun(int i,vector<pair<int,pair<int,int> > > v)
// {
//     int l=0,r=i-1;
//     int ans=0;
//     while(l<=r)
//     {
//         int m=(l+r)>>1;
//         if(v[m].se.fi<v[i].fi)
//         {
//             // ans=m;
//             // l=m+1;
//             if(v[m+1].se.fi<v[i].fi)
//             {
//                 l=m+1;
//             }
//             else
//             return m;
//         }
//         else
//         r=m-1;
//     }
//     return ans;
//     // for(int j=i-1;j>=1;j--)
//     // {
//     //     if(a[j].se.fi<a[i].fi)
//     //     {
//     //         return j;
//     //     }
//     // }
//     // return 0;
// }
 
// void solve()
// {

//     int n;
//     cin>>n;
//     vector< pair<int, pair<int,int> > > v(n+1);
//     for(int i=1;i<=n;i++)
//     {
//         cin>>v[i].fi>>v[i].se.fi>>v[i].se.se;
//     }
//     sort(all(v),cmp1);
//     //  debug(v);
//     vector<int> dp(n+1,0);
//     for(int i=1;i<=n;i++)
//     {
//         dp[i]=max(dp[i-1],(v[i].se.se+dp[fun(i,v)]));
//     }
//     // debug(dp);
//     cout<<dp[n]<<endl;

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

C++ program for weighted job scheduling using Dynamic
Programming and Binary Search
#include <iostream>
#include <algorithm>
using namespace std;

// #define int long long 
// A job has start time, finish time and profit.
struct Job
{
	int start, finish, profit;
};

// A utility function that is used for sorting events
// according to finish time
bool myfunction(Job s1, Job s2)
{
	return (s1.finish < s2.finish);
}

// A Binary Search based function to find the latest job
// (before current job) that doesn't conflict with current
// job. "index" is index of the current job. This function
// returns -1 if all jobs before index conflict with it.
// The array jobs[] is sorted in increasing order of finish
// time.
int binarySearch(Job jobs[], int index)
{
	// Initialize 'lo' and 'hi' for Binary Search
	int lo = 0, hi = index - 1;

	// Perform binary Search iteratively
	while (lo <= hi)
	{
		int mid = (lo + hi) / 2;
		if (jobs[mid].finish < jobs[index].start)
		{
			if (jobs[mid + 1].finish < jobs[index].start)
				lo = mid + 1;
			else
				return mid;
		}
		else
			hi = mid - 1;
	}

	return -1;
}

// The main function that returns the maximum possible
// profit from given array of jobs
int findMaxProfit(Job arr[], int n)
{
	// Sort jobs according to finish time
	sort(arr, arr+n, myfunction);

	// Create an array to store solutions of subproblems. table[i]
	// stores the profit for jobs till arr[i] (including arr[i])
	// int *table = new int[n];
    // long long int * table=new long long [n];
    long long table[n];
	table[0] = arr[0].profit;

	// Fill entries in table[] using recursive property
	for (int i=1; i<n; i++)
	{
		// Find profit including the current job
		int inclProf = arr[i].profit;
		int l = binarySearch(arr, i);
		if (l != -1)
			inclProf += table[l];

		// Store maximum of including and excluding
		table[i] = max(inclProf, table[i-1]);
	}

	// Store result and free dynamic memory allocated for table[]
	int result = table[n-1];
	// delete[] table;
	
	return result;
}

// Driver program
signed int main()
{
	// Job arr[] = {{3, 10, 20}, {1, 2, 50}, {6, 19, 100}, {2, 100, 200}};
	int n;
    cin>>n;
    Job arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].start>>arr[i].finish>>arr[i].profit;
    }
	cout << findMaxProfit(arr, n);
	return 0;
}
