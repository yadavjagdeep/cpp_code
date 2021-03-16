#include<bits/stdc++.h>
using namespace std;
std::vector<int> previous_greater(std::vector<int> v){
	int n = v.size();
	std::vector<int> PGE(n,-1);
	stack<int>s;
	s.push(n-1);
	for(int i=n-2;i>=0;i--){
		if(s.empty())
			s.push(i);
		else if(v[i]<=v[s.top()])
			s.push(i);
		else{
			while(!s.empty() && v[i]>v[s.top()]){
				PGE[s.top()] = i;
				s.pop();
			}
			s.push(i);
		}

	}
return PGE;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		std::vector<int> v;
		for(int i=0;i<n;i++){
			int val;cin>>val;
			v.push_back(val);
		}
		std::vector<int> PGE = previous_greater(v);
		for(int i=0;i<n;i++){
			/*if(PGE[i]==-1)
				cout<<1<<" ";
			else*/
				cout<<i-PGE[i]<<" ";
		}
		cout<<'\n';
	}
return 0;
}