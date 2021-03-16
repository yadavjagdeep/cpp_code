#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<n-i;j++)
     {
         if((i+1)%2==0)
         cout<<0;
         else
        cout<<1;
         
     }
     cout<<endl;
 }
 return 0;
}