#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define MOD 1000000007

#define fi first
#define se second
#define pb push_back
#define vi vector<int>

bool check(ll tmp)
{

    vector<int> dig;
    int cnt = 0;
    int s, e;
    while (tmp > 0)
    {
        // dig.pb(tmp % 10);
        // dsum += tmp % 10;
        if (cnt == 0)
        {
            s = tmp % 10;
        }
        if (tmp < 10)
        {
            e = tmp;
        }
        tmp /= 10;
        ++cnt;
    }

    if (dig.size() == 1)
    {
        return true;
    }

    int d = dig[1] - dig[0];
    for (int i = 1; i < dig.size(); i++)
    {
        int temp = dig[i + 1] - dig[i];
        if (temp != d)
        {
            return false;
        }
    }
    return true;
}

ll DSUM(ll x, int &s, int &e)
{
    ll dsum = 0;
    ll tmp = x;
    int cnt = 0;
    // int s = 0, e = 0;
    while (tmp > 0)
    {
        dsum += tmp % 10;
        if (cnt == 0)
        {
            s = tmp % 10;
        }
        if (tmp < 10)
        {
            e = tmp;
        }
        tmp /= 10;
        ++cnt;
    }
    return dsum;
}
vector<int> fun(int &cnt, ll tmp)
{
    vector<int> ans;
    while (tmp > 0)
    {
        ans.pb(tmp % 10);

        tmp /= 10;
        ++cnt;
    }
    return ans;
}
int32_t main()
{
    IOS

        ll x;
    cin >> x;
    ll tmp = x;
    ll n = x;
    int cnt = 0;
    int s = 0, e = 0;

    ll dsum = 0;

    while (tmp > 0)
    {

        dsum += tmp % 10;
        if (cnt == 0)
        {
            s = tmp % 10;
        }
        if (tmp < 10)
        {
            e = tmp;
        }
        tmp /= 10;
        ++cnt;
    }

    double sum = (1.0 * cnt * (s + e)) / 2.0;

    while (abs(sum - 1.0 * dsum) > 1e-9)
    {
        x += 1;
        dsum = DSUM(x, s, e);
        sum = (1.0 * cnt * (s + e)) / 2;
    }
    bool flag = check(x);
    if (flag)
    {
        cout << x << endl;
    }
    else
    {
        set<ll> s;
        s.insert(n);
        int ct = 0;
        vector<int> digits = fun(ct, n);
        reverse(digits.begin(), digits.end());
        for (int i = 0; i < ct; i++)
        {
            string st;
            for (int l = 1; l <= ct; l++)
            {
                st += to_string(digits[i]);
            }
            ll y = stoi(st);
            if (y > n)
            {
                s.insert(y);
            }
            cout<<st<<endl;
        }
        if (cnt <= 10)
        {
            string st;
            while(ct>=0)
            {
                st+=to_string(--ct);
            }
            ll y=stoi(st);
            if(y>n)
            {
                s.insert(y);
            }
        }

        auto it=s.find(n);
        it++;
        cout<<*it<<endl;
    }

    return 0;
}