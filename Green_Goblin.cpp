#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define eps 1e-6

#define mod 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int>
#define int ll
const int M = 1e7 + 5;
bitset<M> a;
vector<int> prime;
void primeSieve()
{

    // prime.push_back(2);
    a.set(0);

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

int32_t main()
{
    IOS
   
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 2)
            cout << "NO" << endl;
        else
        {
            // int k=3;
            if (n & 1)
            {
                cout << "YES" << endl;
                continue;
            }
            // bool check = true;
            // for(int i=0;(i<prime.size())&&(prime[i]<=n);i++)
            // {
            //     int k=prime[i];
            //     if(n%k==0)
            //     {
            //         cout<<"YES"<<endl;
            //         check=false;
            //         break;
            //     }

            // }
            while (!(n & 1))
                n >>= 1;
            if (n == 1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
           
        }
    }
    return 0;
}