// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long
// #define MOD 1000000007
// bool prime(const int n)
// {
    
//     if (n == 2 || n == 3)
//     {
//         return true;
//     }
//     int a = (n - 1) % 6, b = (n + 1) % 6;

//     if (a == 0 || b == 0)
//     {
//         return true;
//     }
//     else
//         return false;
// }

// void fun(const int n)
// {
//     int i = floor(sqrt(n));
//     int m = n;
//     while (m % i != 0)
//     {
//         i--;
//     }
//     cout << i << " " << n / i << endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         int n;
//         cin >> n;
//         if (n == 1)
//         {
//             cout << 1 << " " << 1 << endl;
//         }
//         else if ((sqrt(n) - floor(sqrt(n))) == 0)
//         {
//             cout <<(int) sqrt(n) << " " <<(int ) sqrt(n) << endl;
//         }
//         else if (prime(n))
//         {
//             cout << 1 << " " << n << endl;
//         }

//         else
//             fun(n);
//     }
//     return 0;
// }
// /*INPUT: 



// OUTPUT:

// */
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007
int N=1000001;
   vector<int> pri(N,1);
void  prime()
{
    
   for(int i=2;i<=N;i+=2)
   {
       pri[i]=0;
   }
   pri[2]=1;
   for(int i=3;i*i<=N;i+=2)
   {
       if(pri[i])
       {
           for(int j=i*i;j<=N;j+=i)
           {
               pri[j]=0;
           }
       }
   }
  
}

void fun(const int n)
{
    int i = floor(sqrt(n));
    int m = n;
    while (m % i != 0)
    {
        i--;
    }
    cout << i << " " << n / i << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;prime();
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << " " << 1 << endl;
        }
        else if ((sqrt(n) - floor(sqrt(n))) == 0)
        {
            cout <<(int) sqrt(n) << " " <<(int ) sqrt(n) << endl;
        }
        else if (pri[n])
        {
            cout << 1 << " " << n << endl;
        }

        else
            fun(n);
    }
    return 0;
}
/*INPUT: 



OUTPUT:

*/
