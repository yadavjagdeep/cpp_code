#include<bits/stdc++.h>
using namespace std;
int dependacy_sum(std::vector<int>adj[],int v){
	int sum=0;
	for(int i=0;i<v;i++){
		sum+=adj[i].size();
	}
return sum;
}
int main(){
	int t;cin>>t;
	while(t--){
		int v,e;
		cin>>v>>e;
		std::vector<int>adj[v];
		while(e--){
			int x,y;cin>>x>>y;
			adj[x].push_back(y);
		}
		cout<<dependacy_sum(adj,v)<<'\n';
	}
return 0;
}