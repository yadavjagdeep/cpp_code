#include<bits/stdc++.h>
using namespace std;

vector<int> new_array(vector<pair<int,int>>v1,vector<pair<int,int>>v2){
  vector<int>ans;
}

int main(){
	int n;cin>>n;
	std::vector<pair<int,int>> v1;
	std::vector<pair<int,int>> v2;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		pair<int,int>p = make_pair(val,1);
	    v1.push_back(p);
	}
	for(int i=0;i<n;i++){
        	int val;cin>>val;
		pair<int,int>p = make_pair(val,2);
        v2.push_back(p);
	}
std::vector<int>ans = new_array(v1,v2);

return 0;
}