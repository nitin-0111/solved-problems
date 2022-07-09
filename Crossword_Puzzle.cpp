#include<bits/stdc++.h>

using namespace std;


 #define ll long long
#define MOD 1000000007

void  fun(char ** puzzle ,map<string,bool> set,int row ,int col)
{
    if(puzzle[row][col]=='-')
    {
        int rcout=getrhsempty(puzzle,row,col);
        int lstart=getleftstart(puzzle,row,col);
        int rsz=rcout+col-lstart;
        if(rsz>1)
        {
            for(pair<string,bool> s:set)
            {
                if(s->first().length()==rsz&&canrightfit(puzzle,row,lstart,s))
                {
                    char **puzzlecopy=copyPuzzle(puzzle);
                    map<string,bool> setcopy=copyset(set);
                    setcopy.remove

                }
            }
        }
    }
}
 
int main ()
{
  ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;}
 /*INPUT: 



OUTPUT:

*/