#include <iostream>
#include<cstdio>
using namespace std;
void fib(int n,int a,int b)
{
  if(n==1)
  return;
  cout<<b<<" ";
  fib(n-1,b,a+b);
}
int main()
{
  int n;cin>>n;
  cout<<0<<" ";
  fib(n,0,1);
return 0;
}
