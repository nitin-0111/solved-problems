#include<bits/stdc++.h>

using namespace std;

int main()
{
        int t;
        cin>>t;
        while(t--)
        {
                int n,k;
                cin>>n>>k;
                vector<int> a(n);
                for(int i=0;i<n;i++)
                {
                        cin>>a[i];
                }
                
                sort(a.begin(),a.end());
                bool flag=true;
                for(int i=0;i<n;i++)
                {
                        if(binary_search(a.begin()+i+1,a.end(),a[i]+k))
                        {
                                cout<<"yes"<<endl;
                                flag=false;
                                break;
                        }
                }
                if(flag)
                {
                        cout<<"NO"<<endl;
                }
        }
        
        return 0;
}