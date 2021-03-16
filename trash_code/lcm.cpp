#include<iostream>
#include<unordered_map>
#include<vector>
#define ll long long int
using namespace std;

ll gcd(ll a,ll b)
{
    if(b==0)
    return a;

    return gcd(b,a%b);
}
ll lcm(vector<ll>& a,ll n)
{
    ll ans = a[0];
    for(ll i=1;i<n;i++)
    {
        ans = (((a[i]*ans))/(gcd(a[i],ans)));
    }
return ans;
}
ll LCM(ll a,ll b)
{
    return((a*b)/(gcd(a,b)));
}
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
       ll n,m;
       cin>>n>>m;
       vector<ll>a;
       unordered_map<int,int>umap;
       for(ll i=0;i<n;i++)
       {
           ll x;
           cin>>x;
           a.push_back(x);
           umap.insert({x,1});
       }
       ll val=lcm(a,n);
       vector<ll>v;
       for(ll i=1;i<=m;i++)
       {
           if(umap.find(i)==umap.end())
           {
               v.push_back(i);
           }
       }
       ll result=-1;
       ll k=1;
      for(ll i=0;i<v.size();i++)
      {
          ll ans = LCM(v[i],val);
           if(ans>result)
           {
               result=ans;
               k=v[i];
           }
           cout<<ans<<endl;
      }
    cout<<k<<endl;
    }
    return 0;
}
