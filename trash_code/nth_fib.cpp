#include<iostream>
#include<cstdio>
using namespace std;
int fib(int n)
{
  if(n<=1)
  return n;
  return(fib(n-1)+fib(n-2));
}
int main()
{
  int n;cin>>n;
  int val=fib(n);
  cout<<val;
return 0;
}
