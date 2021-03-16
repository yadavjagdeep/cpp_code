/*
C(n, k)
= n! / (n-k)! * k!
= [n * (n-1) *....* 1]  / [ ( (n-k) * (n-k-1) * .... * 1) *
                            ( k * (k-1) * .... * 1 ) ]
After simplifying, we get
C(n, k)
= [n * (n-1) * .... * (n-k+1)] / [k * (k-1) * .... * 1]

Also, C(n, k) = C(n, n-k)
// r can be changed to n-r if r > n-r 
*/
#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;

ll binomialcoff(ll n,ll r){
  if(r > n-r)
  r  = n-r;
  int res=1;
  for(int i=0;i<r;i++){
    res = res*(n-i);
    res = res/(i+1);
  }
  return res;
}
int main(){
  int t;cin>>t;
  while (t--) {
    ll n,r;
    cin>>n>>r;
    cout<<binomialcoff(n,r)<<endl;
  }
return 0;
}
