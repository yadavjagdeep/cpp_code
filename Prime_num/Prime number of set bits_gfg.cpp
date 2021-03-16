#include<bits/stdc++.h>
using namespace std;
vector<int>v(100001);
vector<int>bit(100001);
void sieve(){
  fill(v.begin(),v.end(),1);
  v[0]=0;
  v[1]=0;
  for(int i=2;i*i<=100001;i++){
    if(v[i]==1){
      for(int j=i*i;j<100001;j+=i){
        v[j]=0;
      }
    }
  }
}
/*************************************/
void bit_count(){
  fill(bit.begin(),bit.end(),0);
  for(int i=3;i<100001;i++){
    int b = __builtin_popcount(i);
    if(v[b]==1){
      bit[i]=1;
    }
  }
  for(int i=1;i<100001;i++){
    bit[i]+=bit[i-1];
  }
}
/***************************************/
int main(){
  sieve();
  bit_count();
  int l,r;
  cin>>l>>r;
  cout<<bit[r]-bit[l-1]<<'\n';
return 0;
}
