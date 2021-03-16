#include<bits/stdc++.h>
using namespace std;
std::vector<int> previous_smaller(std::vector<int> v){
	int n = v.size();
	std::vector<int> PSE(n,-1);
	stack<int>s;
	s.push(n-1);
	for(int i=n-2;i>=0;i--){
		if(s.empty())
			s.push(i);
		else if(v[i]>=v[s.top()])
			s.push(i);
		else{
			while(!s.empty() && v[i]<v[s.top()]){
				PSE[s.top()] = i;
				s.pop();
			}
			s.push(i);
		}
	}
return PSE;
}
int main(){
	int n;cin>>n;
	std::vector<int> v;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		v.push_back(val);
	}
	std::vector<int> PSE = previous_smaller(v);
	for(auto x:PSE){
		if(x==-1)
			cout<<x<<" ";
		else
			cout<<v[x]<<" ";
	}
return 0;
}