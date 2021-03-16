#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&v,int start,int end){
  int pivot = v[end];
  int pindex = start;
  for(int i=0;i<end-1;i++){
    if(v[i]<=pivot){
      swap(v[i],v[pindex]);
      pindex++;
    }
  }
  swap(v[pindex],v[end]);
return pindex;
}
void quicksort(vector<int>&v,int start,int end){
  if(start>=end)return;
  int pi = partition(v,start,end);
  quicksort(v,start,pi-1);
  quicksort(v,pi+1,end);
}
int main(){
  int n;cin>>n;
  std::vector<int> v;
  for(int i=0;i<n;i++){
    int val;cin>>val;
    v.push_back(val);
  }
  quicksort(v,0,n-1);
/*  for(auto x:v)
  cout<<x<<" ";*/
  for(int i=0;i<n;i++)
  cout<<v[i]<<" ";
return 0;
}
