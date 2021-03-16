/*
 This is an Interseting problem and can be solved using stack
 very efficiently

 => The idea is  basically eliminating one person at a time 
     that he cannot be clebrity 
*/

#include <bits/stdc++.h>
using namespace std;
bool is_cleb(std::vector<std::vector<int>> v,int i){
  int n = v.size();
   for(int j=0;j<n;j++){
    if(v[i][j]==1)
      return false;
   }
   int j=i;
   for(i=0;i<n;i++){
    if(i==j)continue;
    if(v[i][j]!=1)return false;
   }
  return true;
}
int solve(std::vector<std::vector<int>> &v){
  stack<int>s;
  int n=v.size();
  for(int i=0;i<n;i++) // push all possible people into stack
    s.push(i);
   
   while(s.size()>1){
    int x = s.top();
    s.pop();
    int y = s.top();
    s.pop();
    if(v[x][y]==1)  // this tells that x knows y so x cannot be clebrity
      s.push(y);
    else if(v[x][y]==0) //this means that x does not knows y means
       s.push(x);                  // y cannot be clebrity
   }
   int i = s.top();
   if(is_cleb(v,i))
    return i;

return -1;
}
int main() {
  int n;cin>>n;
  std::vector<std::vector<int>> v;
  for(int i=0;i<n;i++){
    std::vector<int> row;
    for(int j=0;j<n;j++){
      int val;cin>>val;
      row.push_back(val);
    }
    v.push_back(row);
  }
  cout<<solve(v)<<'\n';
  return 0;
}