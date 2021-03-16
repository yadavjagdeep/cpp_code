#include<iostream>
#include<vector>
#define ll unsigned long long int
using namespace std;
int main(){
  int n;cin>>n;
  ll a[1001][1001]={0};
  ll x=1;
  for(ll i=0;i<n;i++){
    a[i][0]=x;
    x++;
    for(ll j=1;j<i+1;j++){
      a[i][j] = a[i-1][j-1]+a[i-1][j];
    }
  }
  for(ll i=0;i<n;i++){
    for(ll j=0;j<i+1;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
return 0;
}
