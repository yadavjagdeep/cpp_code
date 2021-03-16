#include<iostream>
#include<cstdio>
#include<stack>
#include<algorithm>
using namespace std;
void prev_s(int a[],int n,int PSE[])
{
  stack<int>s;
  s.push(n-1);
  for(int i=n-2;i>=0;i--)
  {
    if(s.empty())
    s.push(i);
    else if(a[s.top()]<=a[i])
    s.push(i);
    else
    {
      while ((!s.empty()) && (a[s.top()]>a[i])) {
        PSE[s.top()]=i;
        s.pop();
      }
      s.push(i);
    }
  }
  while (!s.empty()) {
    PSE[s.top()]=-1;
    s.pop();
  }
}
int main()
{
  int n;cin>>n;
  int PSE[n];
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  prev_s(a,n,PSE);
  for(int i=0;i<n;i++)
  cout<<PSE[i]<<" ";
return 0;
}
