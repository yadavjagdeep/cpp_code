#include<iostream>
#include<cstdio>
#include<unordered_map>
#include<algorithm>
#define ll long long int
using namespace std;
int main(){
  ll t;cin>>t;
  while (t--) {
    ll n,k;
    cin>>n>>k;
    //std::vector<int> v;
    unordered_map<ll,ll>umap;
    for(ll i=0;i<n;i++)
    {
      ll val;cin>>val;
      umap[val]++;
    }
    ll count=0;
    for(auto x:umap){
      if(x.second > 0)
      count++;
    }
   cout<<k+count<<endl;
  }
  return 0;
}
