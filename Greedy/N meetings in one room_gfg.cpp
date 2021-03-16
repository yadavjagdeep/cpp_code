#include<bits/stdc++.h>
using namespace std;
struct schedule{
  int start;
  int end;
  int idx;
};
bool cmp(struct schedule s1,struct schedule s2){
    if(s1.end==s2.end){
        if(s1.idx<s2.idx)
        return true;

        return false;
    }
  if(s1.end<s2.end)
  return true;
return false;
}
vector<int> arrange(vector<schedule> v){
  sort(v.begin(),v.end(),cmp);
/*  for(int i=0;i<v.size();i++){
    cout<<v[i].idx<<" "<<v[i].start<<" "<<v[i].end<<endl;
  }*/
  std::vector<int> ans;
  int k = v[0].end;
  ans.push_back(v[0].idx);
  for(int i=1;i<v.size();i++){
    if(v[i].start > k){
      ans.push_back(v[i].idx);
      k = v[i].end;
    }
  }
  return ans;
}
int main(){
  int n;cin>>n;
  std::vector<int>s;
  std::vector<int> e;
  for(int i=0;i<n;i++){
    int val;cin>>val;
    s.push_back(val);
  }
  for(int j=0;j<n;j++){
    int val;cin>>val;
    e.push_back(val);
  }
  std::vector<schedule> v; //vector of structure
  for(int i=0;i<n;i++){
    v.push_back({s[i],e[i],i+1});  //pushing value in vector of structure
  }
  std::vector<int> ans;
  ans=arrange(v);
  for(auto x:ans)
  cout<<x<<" ";
return 0;
}
