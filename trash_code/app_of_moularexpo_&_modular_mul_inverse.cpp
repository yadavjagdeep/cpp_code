#include<iostream>
#define ll long long int
using namespace std;
ll  expo(ll x ,ll n,ll m)
{
  ll result=1;
  while (n>0) {
    if(n&1)
    result = ((result%m)*(x%m))%m;

    x = ((x%m)*(x%m))%m;
    n=n>>1;
  }
return result;
}

ll extended_euclid(ll a, ll b,ll *x,ll *y)
{
  if(b==0)
  {
    *x=1;
    *y=0;
    return a;
  }
  ll x1,y1;
  ll gcd = extended_euclid(b,a%b,&x1,&y1);
  *x = y1;
  *y = x1-((a/b)*y1);
return gcd;
}
ll extended(ll c,ll m)
{
  ll x,y;
  extended_euclid(c,m,&x,&y);
  return (x%m+m)%m;
}
int main()
{
  ll a,b,c,m;
  cin>>a>>b>>c>>m;
  ll ans1 = expo(a,b,m);
  ll ans2 = extended(c,m);
  cout<<((ans1%m)*(ans2%m))%m;
return 0;
}
