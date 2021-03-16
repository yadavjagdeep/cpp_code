#include<bits/stdc++.h>
using namespace std;

int count_subarray(vector<int> v){
int n = v.size();
for(int i=0;i<n;i++)
	v[i] = (v[i]==0)?-1:1;

for(int i=1;i<n;i++)
	v[i]+=v[i-1];

int cnt=0;
for(int i=0;i<n;i++)
if(v[i]==0)cnt++;  // if v[i]==0 => from start to that point 
                    // number of 1's and 0's are same

unordered_map<int,int>umap; // map is used to store freq of eacj element
for(int i=0;i<n;i++){
	if(umap.find(v[i])!=umap.end()){
		auto itr = umap.find(v[i]);
		cnt+=itr->second;
		umap[v[i]]++;
	}else{
		umap.insert({v[i],1});
	}
}
return cnt;
}
int main(){
	int n;cin>>n;
	std::vector<int> v;

	for(int i=0;i<n;i++){
		int val;cin>>val;
		v.push_back(val);
	}

   cout<<count_subarray(v)<<'\n';
 return 0;
}