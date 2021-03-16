#include<iostream>
#include<cstdio>
#include<stack>
#include<algorithm>
using namespace std;
void next_s(int a[],int n,int NSE[])
{
  stack<int>s;
  s.push(0);
  for(int i=1;i<n;i++)
  {
    if(s.empty())
    s.push(i);
    else if(a[s.top()]<=a[i])
    s.push(i);
    else
    {
      while ((!s.empty()) && (a[s.top()]>a[i])) {
        NSE[s.top()]=i;
        s.pop();
      }
      s.push(i);
    }
  }
  while (!s.empty()) {
   NSE[s.top()]=n;
   s.pop();
  }
}
int main()
{
  int n;cin>>n;
  int NSE[n];
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  next_s(a,n,NSE);
  for(int i=0;i<n;i++)
  cout<<NSE[i]<<" ";
return 0;
}
