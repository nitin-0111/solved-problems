#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string  s;
        cin >> s;
        int n = s.size();
        if (a & 1 and b & 1)
        {
            cout << -1 << endl;
            continue;
        }

        else if (a + b == 1)
        {
            if (s[0] == '?' && s.size() == 1)
            {
                cout << 1 - a << endl;
                continue;
            }
            else if (s[0] ==char (1 - a) && s.size() == 1)
            {
                cout << 1 - a << endl;
                continue;
            }
            else
                cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == '1' || s[i] == '0')
            {
                if (s[i] == s[n - 1 - i])
                {
                    if (s[i] == '0')
                    {
                        if (i != (n - 1 - i))
                        {
                            a -= 2;
                        }
                        else
                            a -= 1;
                    }
                    else
                    {
                        if (i != (n - 1 - i))
                        {
                            b -= 2;
                        }
                        else
                            b -= 1;
                    }
                }

                else
                {
                    s[n - 1 - i] = s[i];
                   if (s[i] == '0')
                    {
                        if (i != (n - 1 - i))
                        {
                            a -= 2;
                        }
                        else
                            a -= 1;
                    }
                    else
                    {
                        if (i != (n - 1 - i))
                        {
                            b -= 2;
                        }
                        else
                            b -= 1;
                    }
                }
            }

            if (s[i] == '?')
            {
                if (s[n - 1 - i] != '?')
                {
                    s[i] = s[n - 1 - i];

                    if (s[i] == '0')
                    {
                        if (i != (n - 1 - i))
                        {
                            a -= 2;
                        }
                        else
                            a -= 1;
                    }
                    else
                    {
                        if (i != (n - 1 - i))
                        {
                            b -= 2;
                        }
                        else
                            b -= 1;
                    }
                }
                else
                {
                    if (a > b)
                    {
                        s[i] = '1';
                        s[n - 1 - i] = '1';
                        if (s[i] == '0')
                        {
                            if (i != (n - 1 - i))
                            {
                                a -= 2;
                            }
                            else
                                a -= 1;
                        }
                        else
                        {
                            if (i != (n - 1 - i))
                            {
                                b -= 2;
                            }
                            else
                                b -= 1;
                        }
                    }
                    else
                    {
                        s[i] = '0';
                        s[n - 1 - i] = '0';
                        if (s[i] == '0')
                        {
                            if (i != (n - 1 - i))
                            {
                                a -= 2;
                            }
                            else
                                a -= 1;
                        }
                        else
                        {
                            if (i != (n - 1 - i))
                            {
                                b -= 2;
                            }
                            else
                                b -= 1;
                        }
                    }
                }
            }
        }


         if(a==0 and b==0)
         {
             cout<<s<<endl;
         }
         else 
         cout<<-1<<endl;
    }
    return 0;
}
/*INPUT: 



OUTPUT:

*/