#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#define mod 1000000007
#define ll long long int
using namespace std;
/*ll modularexpo(ll x,ll n)
{
  ll result=1;
  while (n>0) {
    if(n%2==1)
    result=(result*x)%mod;

    x=(x*x)%mod;
    n=n/2;
  }
return result;
}
*********************************************/
ll modularexpo(ll x,ll n)
{
  ll result=1;
  while (n>0) {
    if(n&1)
    result=(result*x)%mod;

    x=(x*x)%mod;
    //n=n/2;
    n=n>>1;
  }
return result;
}
int main()
{
  ll t;cin>>t;
  while (t--) {
    ll n,x;
    cin>>n>>x;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
      ll pow = (2*i-1)%mod;
      ll val = modularexpo(x,pow);
      sum = ((sum%mod)+(val%mod))%mod;
      x = ((x%mod)*(val%mod))%mod;
    }
    cout<<sum<<endl;
  }

return 0;
}
