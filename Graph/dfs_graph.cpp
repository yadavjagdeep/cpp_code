#include <bits/stdc++.h>
using namespace std;
bool *visited;
void DFS(std::vector<int>adj[],int V,int s){
    cout<<s<<" ";
    visited[s]=true;
    for(auto x: adj[s]){
    	if(!visited[x]){
    		DFS(adj,V,x);
    	}
    	//cout<<x<<" ";
    }
}
int main(){
	int V,E;cin>>V>>E;
	std::vector<int>adj[V+1];
	visited = new bool[V+1];
	memset(visited,false,sizeof(visited));
	while(E--){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int s;cin>>s;
   DFS(adj,V,s);
 return 0;
}