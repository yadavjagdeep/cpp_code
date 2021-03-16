#include<iostream>
#include<vector>
using namespace std;
int quick_sort(vector<int>&v,int start,int end){
  int pivot = end;
  int pindex = start;
  for(int i=0;i<end-1;i++){
    if(v[i]<=v[pivot]){
      swap(v[i],v[pindex]);
      pindex++;
    }
  }
  swap(v[pindex],v[end]);
  cout<<pindex<<endl;
  for(auto x:v)
  cout<<x<<" ";
  cout<<endl;
return pindex;
}
int quick_select(vector<int>&v,int start,int end,int k){
if(start==end)
return v[start];
  int pivot = quick_sort(v,start,end);
  if(k==pivot+1)
  return v[pivot];
  else if(k>pivot+1)
  return quick_select(v,pivot,end,k);
  else
  return quick_select(v,start,pivot,k);
}
int main(){
  int t;cin>>t;
  while (t--) {
    int n;cin>>n;
    std::vector<int> v;
    for(int i=0;i<n;i++){
      int val;cin>>val;
      v.push_back(val);
    }
    int k;cin>>k;
    cout<<quick_select(v,0,n-1,k)<<endl;
    v.clear();
  }
return 0;
}
