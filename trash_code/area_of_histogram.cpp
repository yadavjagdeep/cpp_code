#include<iostream>
#include<stack>
#include<cstdio>
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

/************************************************************************/

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

/*********************************/

int main()
{
  int n;cin>>n;
  int NSE[n];
  int PSE[n];
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  next_s(a,n,NSE);
  prev_s(a,n,PSE);
  int max=-1;
  for(int i=0;i<n;i++)
  {
    int area = (NSE[i]-PSE[i]-1)*a[i];
    if(area>max)
    max=area;
  }
  cout<<max<<endl;
return 0;
}
