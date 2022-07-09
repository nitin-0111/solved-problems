// #include<bits/stdc++.h>

// using namespace std;

//  #ifndef ONLINE_JUDGE 

// #include<D:\Coding_and_Web\debug.cpp>
 
// #else// online submission 

// #endif 


// #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

//  #define ll long long
//  #define eps 1e-6

// #define mod 1000000007

// #define pi (3.141592653589)

// #define ull uint64_t 

// #define cmp [] (const auto &l, const auto &r) {return l > r;}

// #define all(v) v.begin(),v.end()
// #define fi first
// #define se second
// #define rep(i,n) for(int i=0;i<n;i++)

// #define rrep(i,n) for(int i=n-1;i>=0;i--)


// #define pb push_back
// #define vi vector<int> 
// #define fori(n) for(int i=0;i<n;i++)


// #define int int64_t





 
// void solve()
// {

//     int n;
//     cin>>n;
//     vector<int> a(n+1);
//     int odd=0,even=0;
//     int mn=INT_MAX,mx=INT_MIN;
//    for(int i=1;i<=n;i++)
//     {
//         cin>>a[i];
//         a[i]=abs(a[i]);
//         if(i&1)
//         {
//             odd+=a[i];
//             mn=min(mn,a[i]);

//         }
//         else{
//             even+=a[i];
//             mx=max(mx,a[i]);
//         }



//     }
//     int ans=odd-even;
//     if(mx>mn)
//     ans+=2*(mx-mn);

//     cout<<ans<<endl;

// }



// // int32_t main ()

// // {
// //  IOS
// //  uint32_t tt;

// // cin>>tt;
// //  while(tt--){
 
// // solve();
// // }  
// // return 0;
// // }




// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
//         // // ListNode* ans;
//         // ListNode* t=l1;
//         // int c=0;
//         // ListNode * pre1;
//         // while(l1->next!=nullptr && l2->next!=nullptr)
//         // {
//         //     int a=l1->val,b=l2->val;
//         //     int k=(a+b+c)%10;
//         //     c=(a+b+c)/10;
//         //     l1->val=k;
//         //     // ans=temp;
//         //     // ans=ans->next;
//         //     pre1=l1;
//         //     l1=l1->next;
//         //     l2=l2->next;
                
//         // }
//         // if(l1->next!=nullptr)
//         // {
//         //     if(c!=0)
//         //     {
//         //         int a=l1->val,b=l2->val;
//         //         int k=(a+b+c)%10;
//         //         c=(a+b+c)/10;
//         //         l1->val=k;
//         //         l1=l1->next;
//         //           ListNode * pre=l1;
//         //         while(l1!=nullptr and c!=0)
//         //         {
//         //             a=l1->val;
//         //             k=(a+c)%10;
//         //             c=(a+c)/10;
//         //             l1->val=k;
//         //             pre=l1;
//         //             l1=l1->next;
//         //         }
//         //         if(c!=0)
//         //         {
//         //             ListNode * temp=new ListNode(c);
//         //             pre->next=temp;
//         //         }
//         //         // ListNode * pre=l1;
//         //         // while(l1!=nullptr)
//         //         // {
//         //         //     int a=l1->val;
//         //         //     int k=(a+c)%10;
//         //         //     l1->val=k;
//         //         //     c=(a+c)/10;
//         //         //     pre=l1;
//         //         //     l1=l1->next;
//         //         // }
//         //         // if(c!=0)
//         //         // {
//         //         //     ListNode* temp=new ListNode(c);
//         //         //     pre->next=temp;
//         //         // }
                
//         //     }
//         // }
//         // else if(l2->next!=nullptr)
//         // {
//         //     int a=l1->val,b=l2->val;
//         //     int k=(a+b+c)%10;
//         //     c=(a+c+b)/10;
//         //     l1->next=l2->next;
//         //     if(c!=0)
//         //     {
                
//         //           ListNode * pre=l1;
//         //         while(l1!=nullptr and c!=0)
//         //         {
//         //             a=l1->val;
//         //             k=(a+c)%10;
//         //             c=(a+c)/10;
//         //             l1->val=k;
//         //             pre=l1;
//         //             l1=l1->next;
//         //         }
//         //         if(c!=0)
//         //         {
//         //             ListNode * temp=new ListNode(c);
//         //             pre->next=temp;
//         //         }
                
//         //     }
            
//         // }

// //         ListNode * ptr=new ListNode ();
// //         ListNode* temp=ptr;
// //         int c=0;
// //         while(l1 !=nullptr  ||l2!=nullptr ||c)
// //         {
// //             int sum=0;
// //             if(l1!=nullptr)
// //             {
// //                 sum+=l1->val;
// //                 l1=l1->next;
// //             }

// //             if(l2!=nullptr)
// //             {
// //                 sum+=l2->val;
// //                 l2=l2->next;
// //             }
// //             sum+=continue;c=sum/10;
// //             ListNode *node=new ListNode(sum%10);
// //             temp->next=node;
// //             temp=temp->next;
// //         }

// //         return ptr->next;
        
// //     }
// // };


