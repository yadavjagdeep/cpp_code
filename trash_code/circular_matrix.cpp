#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<vector<int>> &v)
{
   int dri=0;
   int t=0,b=2,l=0,r=3;
   while(t<=b && l<=r)
   {
       if(dri==0)
       {
           for(int i=l;i<=r;i++)
           cout<<v[t][i]<<" ";
           dri=1;
           t++;
       }
       else if(dri==1)
       {
           for(int i=t;i<=b;i++)
           cout<<v[i][r]<<" ";
           dri=2;
           r--;
       }
       else if(dri==2)
       {
           for(int i=r;i>=l;i--)
           cout<<v[b][i]<<" ";
           dri=3;
           b--;
       }
       else if(dri==3)
       {
           for(int i=b;i>=t;i--)
           cout<<v[i][l]<<" ";
           dri=0;
           l++;
       }
   }
}
int main()
{
vector<vector<int>>v={ { 1, 2, 3, 10},
                               { 4, 5, 6, 11},
                               { 7, 8, 9, 12} };
        print(v);

    return 0;
}
