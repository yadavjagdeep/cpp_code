#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void buildmaxheap(vector<int>&v){
  int n = v.size();
  for(int i = 0;i<n;i++){
    while (i>0 && v[i]>v[(i-1)/2]) {
      swap(v[i],v[(i-1)/2]);
      i = (i-1)/2;
    }
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
  }
}
void deletex(int x,vector<int>&v){
  v[x] = 999999;
  buildmaxheap(v);
 swap(v[0],v[v.size()-1]);
  v.pop_back();
  buildmaxheap(v);
}
int main(){
  int n;cin>>n;
  std::vector<int> v;
  for(int i = 0 ;i<n;i++){
    int val;cin>>val;
    v.push_back(val);
  }
  buildmaxheap(v);
  cout<<"Enter the index to delete the element"<<endl;
  int x;cin>>x;
  deletex(x,v);
  for(auto x:v)
  cout<<x<<endl;
  return 0;
}
