#include<bits/stdc++.h>
using namespace std;
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
struct cmp{
bool operator()(pair<int,pair<int,int>> p1, pair<int,pair<int,int>>p2){
	return p1.first > p2.first;
}
};
void print(priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,cmp>pq){
	while(!pq.empty()){
		pair<int,pair<int,int>>p = pq.top();
		pq.pop();
		cout<<p.first<<" ";
	}
	cout<<'\n';
}

int kth_min(vector<vector<int>>v,int k){
	if(k==1)return v[0][0];
	int n = v[0].size();
	priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,cmp> pq;
    pq.push(make_pair(v[0][0],make_pair(0,0)));
   // pair<int,pair<int,int>>p;
   // unordered_map<pair<int,int>,int>umap;
    set<pair<int,int>>s;
    int ans;
    //k+=1;
    while(k--){
    	//print(pq);
     pair<int,pair<int,int>>p = pq.top();
     pq.pop();
     ans = p.first;
     //cout<<ans<<'\n';
     int i = p.second.first;
     int j = p.second.second;
     pair<int,int>temp = make_pair(i,j+1);
     if((j+1 < n) && s.find(temp)==s.end()){
       s.insert(temp);
        pq.push(make_pair(v[i][j+1],make_pair(i,j+1)));
     }
      temp = make_pair(i+1,j);
     if((i+1 < n) && s.find(temp)==s.end()){
       s.insert(temp);
        pq.push(make_pair(v[i+1][j],make_pair(i+1,j)));
     }
    }
return ans;
}


int main(){
   int n;cin>>n;
   vector<vector<int>> v = insert_2d(n,n);
   int k;cin>>k;
   cout<<kth_min(v,k)<<'\n';
  return 0;
}