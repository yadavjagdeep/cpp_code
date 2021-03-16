#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n;cin>>n;
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      int cnt=0;
      while (n%i==0) {
      n/=i;
      cnt++;
      }
      std::cout <<"("<< i<<"^"<<cnt<<")" <<'\n';
    }
  }
  if(n!=1)
  std::cout <<"("<< n<<"^"<<"1"<<")" << '\n';
  return 0;
}
