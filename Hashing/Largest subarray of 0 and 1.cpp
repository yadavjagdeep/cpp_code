#include<bits/stdc++.h>
using namespace std;

int max_len_subarry(vector<int> v){
	int n = v.size();
	for(int i=0;i<n;i++){
		v[i] = (v[i]==0)?-1:1;
	}

	for(int i=1;i<n;i++)  //Array Preefix sum
      v[i]+=v[i-1];
  int mx = 0;
   for(int i=0;i<n;i++)  // if prefix sum is 0 => from beg to that point count is same
   	+3
   	if(v[i]==0)
   		mx = i+1;
unordered_map<int,int>umap;
for(int i=0;i<n;i++){
	if(umap.find(v[i])!= umap.end()){
		auto itr = umap.find(v[i]);
		mx = max(mx,i-itr->second);
	}else{
		umap.insert({v[i],i});
	}
}
return mx;
}

int main(){
	int n;cin>>n;
	std::vector<int> v;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		v.push_back(val);
	}

	cout<<max_len_subarry(v)<<'\n';
return 0;
}