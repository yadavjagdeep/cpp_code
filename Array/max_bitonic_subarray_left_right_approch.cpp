#include<iostream>
#include<vector>
#define ll long long int
using namespace std;

int main(){
  int t;cin>>t;
  while (t--) {
      ll n;
      vector<ll> v;
    cin>>n;
    v.clear();
    for(ll i=0;i<n;i++){
      ll val;cin>>val;
      v.push_back(val);
    }
    vector<ll>ps;
    ps.clear();
    ps.push_back(v[0]);
    for(ll i=1;i<n;i++){
      if(v[i]>v[i-1])
      ps.push_back(v[i]+ps[i-1]);
      else
      ps.push_back(v[i]);
    }
    ll ss[n];
    ss[n-1] = v[n-1];
    for(ll i=n-2;i>=0;i--){
      if(v[i]>v[i+1])
      ss[i] = v[i]+ss[i+1];
      else
      ss[i] = v[i];
    }

  ll ans = 0;
    for(ll i=0;i<n;i++)
    ans = max(ans,((ps[i]+ss[i])-v[i]));
    cout<<ans<<endl;

  }
return 0;
}
