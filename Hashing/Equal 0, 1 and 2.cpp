#include<bits/stdc++.h>
using namespace std;
int cnt_subarray(vector<int> v){
	int n = v.size();
	int ans=0;
	map<pair<int,int>,int>m;
	m[{0,0}]=1;
	int cnt0,cnt1,cnt2;
	cnt0=cnt1=cnt2=0;
	for(int i=0;i<n;i++){
		if(v[i]==0)cnt0++;
		else if(v[i]==1)cnt1++;
		else cnt2++;
     pair<int,int>p = make_pair(cnt0-cnt1,cnt1-cnt2);
      if(m.find(p)!=m.end()){
      	auto itr = m.find(p);
      	ans+=itr->second;
      }
      m[p]++;
	}
return ans;
}
int main(){
	int n;cin>>n;
	std::vector<int> v;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		v.push_back(val);
	}

	cout<<cnt_subarray(v)<<'\n';
	return 0;
}