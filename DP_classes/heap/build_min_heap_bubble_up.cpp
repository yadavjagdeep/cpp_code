#include<iostream>
#include<vector>
using namespace std;
void buildmin(vector<int>&v){
  int n = v.size();
  for(int i=0;i<n;i++){
    while (i>0 && v[i]<v[(i-1)/2]) {
    swap(v[i],v[(i-1)/2]);
    i=(i-1)/2;
    }
  }
}
int main(){
  int n;cin>>n;
  vector<int>v;
  for(int i = 0;i<n;i++){
    int x;cin>>x;
    v.push_back(x);
  }
  buildmin(v);
  for(auto x:v){
    cout<<x<<" ";
  }
return 0;
}
