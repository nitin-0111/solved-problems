// #include<bits/stdc++.h>

// using namespace std;

// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

//  #define ll long long
// #define MOD 1000000007

// #define fi first
// #define se second
// #define pb push_back
// #define vi vector<int>

// int a[100000];
// bool ispossible(int n)
// {

// }

// int32_t main ()
// {	 IOS
// int n;
// cin>>n;
// for(int i=0;i<n;i++)
// {
//     cin>>a[i];
// }
// int s=0,e=n;
// int ans=0
// while(s<=e)
// {
//     int mid=(s+e)>>1;
//     if(ispossible(mid))
//     {
//         ans=mid;
//         s=mid+1;
//     }
//     else
//     e=mid-1;
// }
// cout<<

// return 0;
// }

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

class node
{
public:
    node *next;
    node *pre;
    int data;
    node(int val)
    {
        data = val;
        next = nullptr;
        pre = nullptr;
    }
};
void insertathead(node * &head, int val)
{
    node *p = new node(val);
    if (head == nullptr)
    {
        head = p;
        return;
    }
}
void display(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return;
}

int32_t main()
{
    IOS
        node *t = nullptr;
    insertathead(t, 8);
    display(t);

    return 0;
}