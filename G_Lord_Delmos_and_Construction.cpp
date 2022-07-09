#include<bits/stdc++.h>

using namespace std;


 #define ll long long
#define MOD 1000000007
vector<string> ans;
string fun(string s)
{
    if(s.size()==0)
    {
        return "";
    }
    for(int i=0;i<s.size();i++)
    {
        swap(s[0],s[i]);
        string temp=s[0]+fun(s.substr(1));
        ans.push_back(temp);
    }
    

}
 
int main ()
{
  ios_base::sync_with_stdio(false);
cin.tie(NULL);
string 
return 0;}
 /*INPUT: 



OUTPUT:

*/