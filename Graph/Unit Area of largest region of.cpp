#include<bits/stdc++.h>
using namespace std;
//bool is_vis[50][50];
int n,m;
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

int DFS(int i,int j,vector<vector<int>>&v){
if(i<0 || j<0 || i>=n || j>=m || v[i][j]==0)
    return -1;

    v[i][j] =0;
    int x1 = 1+DFS(i,j+1,v);
    //cout<<x1<<'\n';
    int x2 = 1+DFS(i,j-1,v);
    int x3 = 1+DFS(i+1,j,v);
    int x4 = 1+DFS(i-1,j,v);
    int x5 = 1+DFS(i-1,j+1,v);
    int x6 = 1+DFS(i+1,j-1,v);
    int x7 = 1+DFS(i+1,j+1,v);
    int x8 = 1+DFS(i-1,j-1,v);
    return (x1+x2+x3+x4+x5+x6+x7+x8);
}


int island(vector<vector<int>>v){
  int mx=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
            if(v[i][j]==1 ){
              mx = max(mx,1+DFS(i,j,v));
            }
    }
  }
return mx;
}




int main(){
	cin>>n>>m;
	//memset(is_vis,false,sizeof(is_vis));
	std::vector<std::vector<int>>v = insert_2d(n,m);
    cout<<island(v)<<'\n';
  return 0;
}