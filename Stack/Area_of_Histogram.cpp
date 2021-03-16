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
/**************************************************/
std::vector<int> next_smaller(std::vector<int> v){
	int n = (int)v.size();
	std::vector<int> NSE(n,n);
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
	std::vector<int> PSE = previous_smaller(v);
	std::vector<int>NSE = next_smaller(v);
	int ans=INT_MIN;
	for(int i=0;i<n;i++){
	  int area = (NSE[i]-PSE[i]-1)*v[i];
	  ans = max(ans,area);
	}
	cout<<ans<<'\n';
return 0;
}