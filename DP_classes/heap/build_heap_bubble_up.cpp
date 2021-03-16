#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n;cin>>n;
  std::vector<int> v;
  v.clear();
  for(int i=0;i<n;i++){
    int val;cin>>val;
    v.push_back(val);
  }
  for(int i=0;i<n;i++){
    while (i>0 && v[i]>v[(i-1)/2]) {
    swap(v[i],v[(i-1)/2]);
    i = (i-1)/2;
    }
  }
  for(auto i:v)
  cout<<i<<" ";
  return 0;
}
