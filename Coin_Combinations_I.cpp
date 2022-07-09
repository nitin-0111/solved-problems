#include <bits/stdc++.h>
using namespace std;
#define mod (int)1e9 + 7
// m is size of coins array (number of different coins)
int minCoins(int coins[], int m, int V)
{
    // table[i] will be storing the minimum number of coins
    // required for i value. So table[V] will have result
    int table[V + 1];

    // Base case (If given value V is 0)
    table[0] = 1;

    // Initialize all table values as Infinite
    for (int i = 1; i <= V; i++)
        table[i] = 0;

    // Compute minimum coins required for all
    // values from 1 to V
    for (int i = 1; i <= V; i++)
    {
        // Go through all coins smaller than i
        for (int j = 0; j < m; j++)
            if (coins[j] <= i)
            {
                table[i] += table[i - coins[j]];
                table[i] %= mod;
            }
    }

    return table[V];
}

// Driver program to test above function
int main()
{
    int n, x;
    cin >> n >> x;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << minCoins(a, n, x);
}
