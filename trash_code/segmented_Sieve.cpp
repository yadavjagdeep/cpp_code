#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdbool>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long int
using namespace std;
 vector<ll> sieve(ll n)
 {
   bool a[n+1];
   memset(a,true,sizeof(a));
   a[0]=false;
   a[1]=false;
   for(ll i=2;i*i<=n;i++)
   {
     if(a[i]==true)
     {
       for(ll j=i*2;j<=n;j+=i)
       a[j]=false;
     }
   }
   std::vector<ll> v;
   for(ll i=2;i<n+1;i++)
   {
     if(a[i]==true)
     v.push_back(i);
   }
  return v;
 }
/**********************************************/
void segmentedsieve(ll n)
{
  ll limit = floor(sqrt(n))+1;
  std::vector<ll> prime;
  prime = sieve(limit);

  for(ll i=0;i<prime.size();i++){
  cout<<prime[i]<<endl;
}

  ll low = limit;
  ll high = limit*2;
   while (low<n) {
     if(high>n)
     high=n;

     bool mark[limit+1];
     memset(mark,true,sizeof(mark));
     for(ll i=0;i<prime.size();i++)
     {
       ll lolim = floor(low/prime[i])*prime[i];
       if(lolim<low)
       lolim+=prime[i];

       for(ll j=lolim;j<high;j+=prime[i])
       mark[j-low]=false;
     }
     for(ll i=low;i<high;i++)
     {
       if(mark[i-low]==true)
       cout<<i<<endl;
     }
     low+=limit;
     high+=limit;
   }
}

int main()
{
  ll n;cin>>n;
 segmentedsieve(n);
  return 0;
}
