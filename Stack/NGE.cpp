#include<bits/stdc++.h>
using namespace std;
std::vector<int> next_greater(std::vector<int> &v){
	int n = (int)v.size();
	std::vector<int>NGE(n,-1);
	stack<int>s;
	s.push(0);
	for(int i=1;i<n;i++){
		if(s.empty())
			s.push(i);
		else if(v[i]<=v[s.top()])
			s.push(i);
		else{
			while(!s.empty() && v[i]>v[s.top()]){
				NGE[s.top()] = v[i];
				s.pop();
			}
			s.push(i);
		}
	}
return NGE;
}
int main(){
	int n;cin>>n;
	std::vector<int> v;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		v.push_back(val);
	}
	std::vector<int>NGE = next_greater(v);
	for(auto x:NGE)
		cout<<x<<" ";
return 0;
}