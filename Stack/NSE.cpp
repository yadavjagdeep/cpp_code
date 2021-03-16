#include<bits/stdc++.h>
using namespace std;
std::vector<int> next_smaller(std::vector<int> v){
	int n = (int)v.size();
	std::vector<int> NSE(n,-1);
	stack<int>s;
	s.push(0);
	for(int i=1;i<n;i++){
		if(s.empty())
			s.push(i);
		else if(v[i]>=v[s.top()])
			s.push(i);
		else{
			while(!s.empty() && v[i]<v[s.top()]){
               NSE[s.top()] = i;
               s.pop();
			}
			s.push(i);
		}
	}
	return NSE;
}
int main(){
	int n;cin>>n;
	std::vector<int> v;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		v.push_back(val);
	}
	std::vector<int>NSE = next_smaller(v);
	for(auto x:NSE){
		if(x==-1)
			cout<<x<<" ";
		else
		cout<<v[x]<<" ";
	}
return 0;
}