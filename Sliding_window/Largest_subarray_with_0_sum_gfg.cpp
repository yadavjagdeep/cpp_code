#include<iostream>
#include<vector>
#include<cstdbool>
using namespace std;
bool check(int n,vector<int>&v){
  int sum=0;
  for(int i=0;i<n;i++)
  sum+=v[i];
  if(sum==0)
  return true;
  for(int i=0;i<v.size()-n;i++){
    sum-=v[i];
    sum+=v[n+i];
    if(sum==0)
    return true;
  }
  return false;
}
int main(){
  int n;cin>>n;
  std::vector<int> v;
  int sum=0;
  for(int i=0;i<n;i++){
    int val;cin>>val;
    v.push_back(val);
    sum+=val;
  }
  for(int i=n;i>=0;i--){
    if(check(i,v)){
      cout<<i<<endl;
      break;
    }
  }
return 0;
}
