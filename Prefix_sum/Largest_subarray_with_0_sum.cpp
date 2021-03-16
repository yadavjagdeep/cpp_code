#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int findmax(vector<int>&v){
  int sum=0;
  int res=0;
  unordered_map<int,int>umap;
  for(int i=0;i<v.size();i++){
    sum+=v[i];
    if(sum==0)
    res = i+1;

    if(umap.find(sum)!=umap.end()){
      res = max(res,i-umap.find(sum)->second);
    }
    umap.insert(make_pair(sum,i));
  }
return res;
}
int main(){
  int n;cin>>n;
  std::vector<int> v;
  for(int i=0;i<n;i++){
    int val;cin>>val;
    v.push_back(val);
  }
  cout<<findmax(v);
return 0;
}
