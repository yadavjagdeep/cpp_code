#include <iostream>
#include<cstdio>
#include <cmath>
using namespace std;
int main()
{
  int a;cin>>a;
  int b;cin>>b;
  int dividend = a>=b?a:b;
  int diviser = a<=b?a:b;
  while (diviser!=0) {
    int reminder = dividend%diviser;
    dividend=diviser;
    diviser=reminder;
  }
  cout<<dividend;
return 0;
}
