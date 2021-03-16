//next greater elememt
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
void next_g(int a[],int n) {
  stack<int>s;
  s.push(0);
  int NGE[n];
  for(int i=1;i<n;i++)
  {
    if(s.empty())
    {
      s.push(i);
    }
    else if(a[s.top()]>a[i])
    s.push(i);
    else
    {
      while ((!s.empty()) && a[s.top()]<=a[i])
      {
        NGE[s.top()]=a[i];
        s.pop();
      }
      s.push(i);
    }
  }
  while (!s.empty()) {
    NGE[s.top()]=-1;
    s.pop();
  }
for(int i=0;i<n;i++)
cout<<NGE[i]<<" ";
}
int main()
{
  int n;cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  next_g(a,n);
return 0;
}
