#include<bits/stdc++.h>
using namespace std;
int l_cons_s(vector<int> v){
	int n = *max_element(v.begin(),v.end());
	vector<int>hash(n+1,0);
	for(int x:v)
		hash[x]=1;
    for(int i=1;i<n;i++){
    	if(hash[i]!=0)
    	hash[i]+=hash[i-1];
    }
    int ans = *max_element(hash.begin(),hash.end());
return ans;	
}
int main(){
	int n;cin>>n;
	std::vector<int> v;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		v.push_back(val);
	}

	cout<<l_cons_s(v)<<'\n';
return 0;
}