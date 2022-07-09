#include <bits/stdc++.h>

using namespace std;

 #ifndef ONLINE_JUDGE 

#include<D:\Coding_and_Web\debug.cpp>
 
#else// online submission 

#endif 
#define ll long long
#define MOD 1000000007

bool equivalent(string a, string b)
{
    if (a == b)
    {
        return true;
    }
    if ((a.size() != b.size()) || (a.size() == 1 and a != b))
    {
        return false;
    }
    int mid = a.length() / 2;
    string a1 = a.substr(0, mid), a2 = a.substr(mid ), b1 = b.substr(0, mid), b2 = b.substr(mid );
    // debug(a1,a2,b1,b2);
    bool check1 = equivalent(a1, b1) && equivalent(a2, b2);
    bool check2 = equivalent(a1, b2) && equivalent(a2, b1);

    return  check2||check1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b;
    cin >> a >> b;
    if (equivalent(a, b))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
/*INPUT: 



OUTPUT:

*/