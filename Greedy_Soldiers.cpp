// #include<bits/stdc++.h>

// using namespace std;

// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

//  #define ll long long
// #define eps 1e-6

// #define mod 1000000007

// #define fi first
// #define se second
// #define pb push_back
// #define vi vector<int>

// bool cmp(pair<int,int> a,pair<int, int> b)
// {
//     return a.fi<b.fi;
// }
// bool cmp1(int a,int b)
// {
//     return a>b;
// }

// int32_t main ()
// {	 IOS

//     int n,x;
//     cin>>n>>x;
//     int a[n],b[n];
//     pair<int,int> s[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     for(int i=0;i<n;i++)
//     {
//         cin>>b[i];
//         s[i]={a[i],b[i]};
//     }
//     sort(s,s+n);
//     sort(b,b+n,cmp1);

//     for(auto x: s)
//     cout<<x.fi<<" "<<x.se;
// periorty_queue<pair<int,pair<int,int> > q;
// return 0;
//
#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define mod 1000000007

#define fi first
#define int long long
#define se second
#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    return a.fi > b.fi;
}

int32_t main()
{
    IOS

        int n,
        k;
    cin >> n >> k;
    vector<pair<int, int>> power(n);
    vector<int> money(n);
    vector<pair<int, pair<int, int>>> v;
    int ans[n];

    fori(n)
    {
        cin >> power[i].fi;
        power[i].se = i;
    }
    fori(n)
    {
        cin >> money[i];
        v.pb({money[i], {power[i].fi, i}});
    }
    sort(v.begin(), v.end(), cmp);
    sort(power.begin(), power.end());
    fori(n)
    {
        int m = i <= k ? i : k;
        int idx = power[i].se;
        int p1 = power[i].fi;
        int sum = money[idx];
        if (m)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (cnt == m)
                {
                    break;
                }
                auto cur = v[j];
                int p = cur.se.fi;
                int pos = cur.se.se;
                int mne = cur.fi;
                if (p < p1)
                {
                    sum += mne;
                    cnt++;
                }
            }
        }
        ans[idx] = sum;

        // pair<int, pair<int, int> > t=v[i];
    }
    fori(n)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

// #include<bits/stdc++.h>

// using namespace std;

// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

//  #define ll long long
// #define eps 1e-6

// #define mod 1000000007

// #define fi first
// #define se second
// #define pb push_back
// #define vi vector<int>

// bool cmp(pair<int,int> a,pair<int, int> b)
// {
//     return a.fi<b.fi;
// }
// bool cmp1(int a,int b)
// {
//     return a>b;
// }

// int32_t main ()
// {	 IOS

//     int n,x;
//     cin>>n>>x;
//     int a[n],b[n];
//     pair<int,int> s[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     for(int i=0;i<n;i++)
//     {
//         cin>>b[i];
//         s[i]={a[i],b[i]};
//     }
//     sort(s,s+n);
//     sort(b,b+n,cmp1);

//     for(auto x: s)
//     cout<<x.fi<<" "<<x.se;
// periorty_queue<pair<int,pair<int,int> > q;
// return 0;
//
#include <bits/stdc++.h>

using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define mod 1000000007

#define fi first
#define int long long
#define se second
#define pb push_back
#define vi vector<int>
#define fori(n) for (int i = 0; i < n; i++)

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    return a.fi > b.fi;
}

int32_t main()
{
    IOS

        int n,
        k;
    cin >> n >> k;
    vector<pair<int, int>> power(n);
    vector<int> money(n);
    vector<pair<int, pair<int, int>>> v;
    int ans[n];

    fori(n)
    {
        cin >> power[i].fi;
        power[i].se = i;
    }
    fori(n)
    {
        cin >> money[i];
        v.pb({money[i], {power[i].fi, i}});
    }
    sort(v.begin(), v.end(), cmp);
    sort(power.begin(), power.end());
    fori(n)
    {
        int m = i <= k ? i : k;
        int idx = power[i].se;
        int p1 = power[i].fi;
        int sum = money[idx];
        if (m)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (cnt == m)
                {
                    break;
                }
                auto cur = v[j];
                int p = cur.se.fi;
                int pos = cur.se.se;
                int mne = cur.fi;
                if (p < p1)
                {
                    sum += mne;
                    cnt++;
                }
            }
        }
        ans[idx] = sum;

        // pair<int, pair<int, int> > t=v[i];
    }
    fori(n)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}