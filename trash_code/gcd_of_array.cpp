#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<iterator>
#define ll long long int
using namespace std;
ll gcd(ll a,ll b)   // function to caclculate gcd of two number
{
  if(b==0)
  return a;

  return gcd(b,a%b);
}
/*********************************************/
ll arrgcd(vector<ll> &v)   // function to explit arry in two numbers
{
  ll result=v[0];
  for(ll i=1;i<v.size();i++)
  {
    result=gcd(v[i],result);
    if(result==1)
    return 1;
  }
return result;
}
/****************************************************/
ll lcm(vector<ll> &v)   // function to caclculate lcm of array
{
  ll result=v[0];
  for(ll i=1;i<v.size();i++)
  {
    result = ((v[i]*result)/(gcd(v[i],result)));
  }
  return result;
}
/*****************************************/
int main()
{
  ll t;cin>>t;
  while (t--) {
    ll n,m;
    cin>>n>>m;
    vector<ll> v;
    unordered_map<ll,ll> umap;
    for(ll i=0;i<n;i++)
    {
      ll x;cin>>x;
      v.push_back(x);
      umap[x]=1;
    }
    /*************************/
  unordered_map<ll, ll>:: iterator itr;
    for(itr = umap.begin(),itr!=umap.end();itr++)
    {
      if(umap.find(itr)==umap.end())
      continue;
      else
    cout << itr->first << "  " << itr->second << endl;
    }
    /*******************************/

    ll val=lcm(v);
    ll max=val;
    ll ans=1;
    for(ll i=1;i<=m;i++)
    {
      if(!(umap.find(i)==umap.end()))
      continue;

      ll temp = ((val*i)/(gcd(val,i)));
      if(temp>max)
      {
      max=temp;
      ans=i;
     }
    }
    cout<<ans<<endl;
  }

return 0;
}
