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
  }
}
void insert(int val,vector<int>&v){
int n = v.size();
v.push_back(val);
buildmaxheap(v);
}
int main(){
  int n;cin>>n;
  std::vector<int> v;
  for(int i = 0;i<n;i++){
    int val;cin>>val;
    v.push_back(val);
  }
  buildmaxheap(v);
  for(auto x:v)
  cout<<x<<" ";
  cout<<endl;
  cout<<" Enter value to insert in heap"<<endl;
  int x;cin>>x;
  insert(x,v);
  for(auto x:v)
  cout<<x<<" ";
  return 0;
}
