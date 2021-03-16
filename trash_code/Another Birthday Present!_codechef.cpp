#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstdbool>
#define ll long long int
using namespace std;
bool check(ll a[],ll n)
{
  for(ll i=0;i<n;i++)
  {
    if(a[i]>a[i+1])
    return false;
  }
return true;
}

/***********************************/
void sort(ll a[],ll k,ll n)
{
int c=1;
while (c!=0) {
c=0;
    for(ll j=0;j<n-k;j++)
    {
      if(a[j]>a[j+k])
      {
      ll temp=a[j];
      a[j]=a[j+k];
      a[j+k]=temp;
      c++;
     }
    }
  }
  }

int main()
{
  ll t;cin>>t;
  while (t--) {
  ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
    }
    sort(a,k,n);
    if(check(a,n))
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
  }
return 0;
}
