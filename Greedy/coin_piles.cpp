#include<bits/stdc++.h>
using namespace std;
int min_piles(vector<int> v,int limit){
  int n=v.size();
  sort(v.begin(),v.end());
  int sum=0;
  int k=0;
  for(int i=n-1;i>0;i--){
    if((v[i]-v[k])>limit){
      if((v[i]-v[k])<=v[k]){
        sum+=(v[i]-v[k])-limit;
      }else{
        sum+=v[k];
        k++;
      }
    }
  }
return sum;
}
int main(){
  int t;cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    std::vector<int> v;
    for(int i=0;i<n;i++){
      int val;cin>>val;
      v.push_back(val);
    }
    cout<<min_piles(v,k)<<'\n';
  }
return 0;
}
