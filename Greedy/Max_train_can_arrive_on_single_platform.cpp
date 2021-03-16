#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>p1,pair<int,int>p2){
     return p1.second<p2.second;
}
int min_train(std::vector<int> arr,std::vector<int> dep){
	int n = (int)arr.size();
	std::vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		pair<int,int>p = make_pair(arr[i],dep[i]);
		v.push_back(p);
	}
	//sort the trains on the basis of their departure time
	sort(v.begin(),v.end(),cmp);
	int cnt=1;
	int next=v[0].second;
	for(int i=1;i<n;i++){
        if(v[i].first>next){
        	next = v[i].second;
        	cnt++;
        }
	}
	return cnt;
}
int main(){
	int n;cin>>n;
	std::vector<int> arr;
	std::vector<int> dep;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		arr.push_back(val);
	}
	for(int i=0;i<n;i++){
		int val;cin>>val;
		dep.push_back(val);
	}
	cout<<min_train(arr,dep)<<'\n';
return 0;
}