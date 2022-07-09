#include<bits/stdc++.h>

using namespace std;


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

 #define ll long long
#define eps 1e-6

#define mod 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int> 

int maxdigit(string s)
{
    int maxi=INT_MIN;
    for(int i=0;i<s.size();i++)
    {
        int digit=s[i]-'0';
        if(maxi<digit)
        {
            maxi=digit;
        }
    }
    return maxi;
}

 
int32_t main ()
{	 IOS
  
    int n;
    cin>>n;

    int cnt=0;

    int max=INT_MIN;
    while(n>0)
    {

        string s=to_string(n);
        int digit=maxdigit(s);
        n-=digit;
        ++cnt;
    }
    cout<<cnt<<endl;
return 0;
}