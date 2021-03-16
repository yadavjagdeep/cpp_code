/*
  we will use Adjacency list to strore graph
  vector<int>adj[N];
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;cin>>n>>m;
  std::vector<int>adj[n];
  while(m--){
   int x,y;cin>>x>>y;
   adj[x].push_back(y);
   adj[y].push_back(x);
  }
return 0;
}