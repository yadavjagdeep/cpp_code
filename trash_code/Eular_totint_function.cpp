#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;
ll totint(ll n)
{
  ll result=n;
  for(ll i=2;i*i<=n;i++)
  {
    if(n%i==0)
    {
      while (n%i==0)
      {
       n/=i;
      }
      result -=result/i;
    }
  }
  if(n!=1)
  result -=result/n;
return result;
}
int main()
{
  ll t;cin>>t;
  while (t--)
  {
    ll n;cin>>n;
  cout<<totint(n)<<endl;
  }


return 0;
}
