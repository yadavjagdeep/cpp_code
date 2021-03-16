#include<bits/stdc++.h>
using namespace std;
struct cmp
{
	bool operator()(pair<int,int>p1,pair<int,int>p2){
	if(p1.second == p2.second)
		return p1.first > p2.first;
	return p1.second < p2.second;

}

};
void print(priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>q,int k){
	int cnt=0;
	while(!q.empty()){
		pair<int,int> p = q.top();
		cout<<p.first<<" ";
		cnt++;
		if(cnt==k)
			return;
		q.pop();
	}
}

int main(){
	int n,k;cin>>n>>k;
	priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
	unordered_map<int,int>umap;
	std::vector<int> v;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		umap[val]++;
		for(auto x:umap){
			//auto itr = umap.find(val);
			pair<int,int>p = make_pair(x.first,x.second);
		pq.push(p);
		}
		print(pq,k);
		while(!pq.empty())
			pq.pop();
	}
 
 return 0;
}