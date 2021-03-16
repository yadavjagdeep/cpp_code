/*
The idea is to always select next possible schedule with min end time
To do so we sort the pairs with the second value and then schedule the job
=> It is an optimal choice to seclect the job that ends as early as possible
*/
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>p1,pair<int,int>p2){
  if(p1.second<p2.second)
   return  true;//p1>p2;
return false; //p2>p1;
}
int max_schedule(vector<pair<int,int>>&v,int n){
  sort(v.begin(),v.end(),cmp);   //shorting vector of pairs on the basis of end time
  int cnt=1;
  int k=v[0].second;
  for(int i=1;i<v.size();i++){
    if(v[i].first >= k){
      cnt++;
      k = v[i].second;
    }
  }
return cnt;
}
int main(){
  int n;cin>>n;
  std::vector<int> start;
  std::vector<int> end;
  for(int i=0;i<n;i++){
    int val;cin>>val;
    start.push_back(val);
  }
  for(int i=0;i<n;i++){
    int val;cin>>val;
    end.push_back(val);
  }
std::vector<pair<int,int>> v;
for(int i=0;i<n;i++){
  pair<int,int>p;
  p=make_pair(start[i],end[i]);
  v.push_back(p);
}
  cout<<max_schedule(v,n)<<'\n';
  return 0;
}
