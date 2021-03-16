/*
 The Island problem can be solved either by using is_visited array
 of by changing value of land(1) to water(0);

 --> is_visited approch will give time out for larger constraints as
     there are 8 recursive call making TC to O(8^n) which is too much

     --> updating the original array will reduce time complexity to
          a good extent


        ==> Below both approches are implimented <==

*/

/*int numIslands(vector<vector<char>>& grid) {
        // Code here
        n = grid.size();
        m = grid[0].size();
        int cnt=0;
        memset(is_vis,false,sizeof(is_vis));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1'){
                  cnt++;
                  DFS(i,j,grid);
                }
            }
        }
    return cnt;
    }
    
    void DFS(int i,int j,vector<vector<char>>& grid){
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]=='0')
        return;
        grid[i][j] = '0';
    DFS(i,j+1,grid);
    DFS(i,j-1,grid);
    DFS(i+1,j,grid);
    DFS(i-1,j,grid);
    DFS(i-1,j+1,grid);
    DFS(i+1,j-1,grid);
    DFS(i+1,j+1,grid);
    DFS(i-1,j-1,grid);
    }
*/




#include<bits/stdc++.h>
using namespace std;
bool is_vis[50][50];
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
void DFS(int i,int j,vector<vector<int>>v){
	if(i<0 || j<0 || i>=n || j>=m || v[i][j]==0 || is_vis[i][j])
		return;
	is_vis[i][j] = true;
    DFS(i,j+1,v);
    DFS(i,j-1,v);
    DFS(i+1,j,v);
    DFS(i-1,j,v);
    DFS(i-1,j+1,v);
    DFS(i+1,j-1,v);
    DFS(i+1,j+1,v);
    DFS(i-1,j-1,v);
}



int island(vector<vector<int>>v){
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
            if(v[i][j]==1 && !is_vis[i][j]){
            	//is_vis[i][j] = true;
            	cnt++;
            	DFS(i,j,v);
            }
		}
	}
return cnt;
}



int main(){
	cin>>n>>m;
	memset(is_vis,false,sizeof(is_vis));
	std::vector<std::vector<int>>v = insert_2d(n,m);
    cout<<island(v)<<'\n';
  return 0;
}