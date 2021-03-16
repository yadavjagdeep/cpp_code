#include<bits/stdc++.h>
using namespace std;
void bfs(std::vector<int>adj[],int V){
	bool visited[V];;
	for(int i=0;i<V+1;i++)
		visited[i]=false;
int s;cin>>s;
queue<int>q;
q.push(s);
visited[s]=true;
while(!q.empty()){
	int n = q.size();
	for(int i=0;i<n;i++){
		int num = q.front();
		q.pop();
		cout<<num<<" ";
      for(auto x:adj[num]){
      	if(!visited[x]){
      		visited[x]=true;
      		q.push(x);
      	}
      	//cout<<x<<" ";
      }
	}
	cout<<'\n';
}


}
int main(){
	int V,E;cin>>V>>E;
	std::vector<int>adj[V+1];
	while(E--){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	bfs(adj,V);
return 0;
}