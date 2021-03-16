#include<iostream>
using namespace std;

int extended_euclid(int a,int b,int *x,int *y)
{
  if(b==0)
  {
    *x=1;
    *y=0;
    return a;
  }
  int x1,y1;
  int gcd = extended_euclid(b,a%b,&x1,&y1);
  *x=y1;
  *y=(x1-(a/b)*y1);
return  gcd;
}


int main()
{
  int a,b,x,y;
  cin>>a>>b;
  int gcd = extended_euclid(a,b,&x,&y);
  cout<<"gcd = "<<gcd<<endl;
  cout<<"x = "<<x<<" y = "<<y<<endl;
return 0;
}
