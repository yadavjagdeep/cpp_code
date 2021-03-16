#include<bits/stdc++.h>
using namespace std;
int dp[21][21];
bool is_vis[21][21];
int n,m;
int x,y;
vector<vector<int>> insert_2d(int n,int m){
   vector<vector<int>> v;
   for(int i=0;i<n;i++){
    std::vector<int>row;
    for(int j=0;j<m;j++){
      int val;cin>>val;
      row.push_back(val);
    }
    v.push_back(row);
   }
  return v;
}
int path(vector<vector<int>>v,int i,int j){
 if(i<0 || j<0 || i>=n || j>=m || v[i][j]==0 || is_vis[i][j])
    return 5000;
  if(i==x && j==y && v[i][j]==1)
    return 0;
 // cout<<x<<" "<<y<<'\n';

  is_vis[i][j]=true;
  /*int x1 = 1+path(v,i,j-1);
  int x2 = 1+path(v,i,j+1); 
  int x3 = 1+path(v,i-1,j);
  int x4 = 1+path(v,i+1,j);
  return min({x1,x2,x3,x4});*/
  return 1+min({path(v,i+1,j),path(v,i-1,j),path(v,i,j+1),path(v,i,j-1)});
}




int main(){
  int t;cin>>t;
  while(t--){
    cin>>n>>m;
  memset(is_vis,false,sizeof(is_vis));
  //memset(dp,-1,sizeof(dp));
  std::vector<std::vector<int>>v = insert_2d(n,m);
  cin>>x>>y;
    int ans = path(v,0,0);
    if(ans>=5000)
      cout<<-1<<'\n';
    else
      cout<<ans<<'\n';
  }
  return 0;
}