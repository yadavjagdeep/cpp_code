#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;
ll max(ll a,ll b)
{
  if(a>b)
  return a;
  else
  return b;
}
ll max_sum_subarray(vector<ll>&v)
{
   ll local_max=0;
   ll global_max=-9999999999;
   for(ll i=0;i<v.size();i++)
   {
     local_max = max(v[i],(v[i]+local_max));
     if(local_max>global_max)
     global_max=local_max;
   }
  return global_max;
}
int main()
{
  ll n;cin>>n;
  vector<ll> v;
  for(ll i=0;i<n;i++)
  {
    ll x;cin>>x;
    v.push_back(x);
  }
  ll max = max_sum_subarray(v);
 cout<<max<<endl;
return 0;
}
