#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    ll k;
    cin >> n;
    cin >> k;
    ll *a = new ll[n];
    ll ssum = 0;
    ll cts = 0, cte = 0, ctm = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // ssum += a[i];
        // if (ssum <= k)
        // {
        //     cts++;
        // }
    }
    // ll esum = 0;
    // int j = n - 1;

    // while (esum <= k && j >= 0)
    // {
    //     esum += a[j];
    //     if (esum > k)
    //     {
    //         break;
    //     }
    //     j--;
    //     cte++;
    // }
    ll msum = 0;
    int i = 0;
   int j = n - 1;
    while (msum <= k && i < n && j >= 0)
    {
        if (a[i] <= a[j])
        {
            msum += a[i];
            if (msum > k)
            {
                break;
            }
            ctm++;
            i++;
        }
        else if (a[j] <= a[i])
        {
            msum += a[j];
            if (msum > k)
            {
                break;
            }
            ctm++;
            j--;
        }
    }
    // int ans = max(cts, max(cte, ctm));
    cout << (n - ctm) << endl;

    delete[] a;
    return 0;
}
/*INPUT: 



OUTPUT:

*/