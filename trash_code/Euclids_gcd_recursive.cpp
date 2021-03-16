#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int gcd(int a,int b)
{
  if(b==0)
  return a;
  return(b,a%b);
}
int main()
{
  int a;cin>>a;
  int b;cin>>b;
  int dividend  = a>=b?a:b;
  int diviser  = a<=b?a:b;
  int val=gcd(dividend,diviser);
  cout<<val<<endl;
  return 0;
}
