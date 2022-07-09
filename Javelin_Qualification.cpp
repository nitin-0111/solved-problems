#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define loop(i, a, n) for (int i = a; i < n; i++)

void print(int *b,int k)
{
    cout << k << " ";
                sort(b, b + k);
                for (int i = 0; i < k; i++)
                {
                    cout << b[i] << " ";
                }
                cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        map<int, int,greater<int>> a;
        int *b = new int[x];
        int k = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            a[x] = i;
            if (a[x] >= m)
            {
                if (k < x)
                {
                    b[k] = i;
                    k++;
                    a[x] = 0;
                }
            }
        }
        if(k==x)
        {
            print(b,k);
        }
        else
        {
           for(auto q:a)
           {
               if(q.second==0)
               {
                   continue;
               }
               else if(k<x)
               {
                   b[k]=q.second;
                   k++;
                   a[q.first]=0;
               }
               else if(k==x)
               {
                   break;
               }

           }
           print(b,k);
        }
    }
    return 0;
}
/*INPUT: 



OUTPUT:

*/