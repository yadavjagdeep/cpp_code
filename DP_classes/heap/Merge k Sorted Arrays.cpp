///   --> Merge k sorted array can be solved using min heap <--

#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;cin>>k;
	std::vector<std::vector<int>>v;
	for(int i=0;i<k;i++){
		std::vector<int> row;
		for(int j=0;j<k;j++){
			int val;cin>>val;
			row.push_back(val);
		}
		v.push_back(row);
	}
	
	priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;

	/*p = make_pair(5,make_pair(0,1));
	cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<'\n';*/
	for(int i=0;i<k;i++){
		pair<int,pair<int,int>>p;
	    p = make_pair(v[i][0],make_pair(i,0));
	    pq.push(p);
	}
   std::vector<int> ans;
    while(!pq.empty()){
    	pair<int,pair<int,int>>p = pq.top();
    	pq.pop();
    	//cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<'\n';
        ans.push_back(p.first);
        if(p.second.second<k-1){
        	pair<int,pair<int,int>>temp;
        	temp = make_pair(v[p.second.first][p.second.second+1],make_pair(p.second.first,p.second.second+1));
        	pq.push(temp);
        }

    }
    for(auto x:ans)
    	cout<<x<<" ";

	return 0;
}