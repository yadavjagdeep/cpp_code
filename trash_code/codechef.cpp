#include<iostream>
#include<vector>
#include<algorithm>
#define mod 1000000007
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
      int n,m;
      cin>>n>>m;
      int a[n][n];
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
            a[i][j]=m;
          }
      }
      
      int sum=0;
      int temp=1;
      for(int i=0;i<n;i++)
      {
          int val=1;
          for(int j=0;j<=i;j++)
          {
              for(int k=0;k<=i;k++)
              {
                  //val=val*a[j][k];
                  //val=val%mod;
                 // a[j][k]=1;
                 val
              }
          }
          sum+=val;
          sum%=mod;
           cout<<val<<endl;
      }
     
    }
    return 0;
}