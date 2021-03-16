#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstdlib>
#define ll long long int
using namespace std;
int main()
{
  ll n;cin>>n;
  std::vector<ll> v;
  for(ll i=0;i<n;i++)
  {
    ll x;cin>>x;
    v.push_back(x);
  }
  vector<ll> dp;
  for(ll i=0;i<n;i++)
  {
    dp.push_back(1);
  }
  for(ll i = 1 ; i < n  ;i++){ //forward track
        if(v[i] > v[i-1]){
            dp[i] = 1 + dp[i-1]; 
        }
    }

    for(ll i = n-2 ; i >= 0 ; i--){ // back track
        if(v[i] > v[i+1] && dp[i] <= dp[i+1]){
            dp[i] = dp[i+1] + 1;
        }
    }
  ll sum=0;
  for(ll i=0;i<dp.size();i++)
  sum+=dp[i];
  cout<<sum<<endl;
return 0;
}
