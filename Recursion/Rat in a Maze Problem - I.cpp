#include<bits/stdc++.h>
using namespace std;
void path(vector<vector<int>>&maze,int i,int j,int n,vector<string> &res,string str){
  if(i<0 || i>=n || j<0 || j>=n || maze[i][j]!=1)
  return ;
  if(i==n-1 && j==n-1){
    res.push_back(str);
    return;
  }
  maze[i][j]=-1;
  path(maze,i+1,j,n,res,str+'D');
    path(maze,i-1,j,n,res,str+'U');
    path(maze,i,j+1,n,res,str+'R');
    path(maze,i,j-1,n,res,str+'L');
    maze[i][j]=1;
}
int main(){
  int n;
  cin>>n;
  vector<vector<int>>maze;
  for(int i=0;i<n;i++){
    vector<int>row;
    for(int j=0;j<n;j++){
      int val;cin>>val;
      row.push_back(val);
    }
    maze.push_back(row);
  }
string s;
vector<string>res;
  path(maze,0,0,n,res,s);
  sort(res.begin(),res.end());
  for(auto x:res)
  cout<<x<<'\n';
return 0;
}
