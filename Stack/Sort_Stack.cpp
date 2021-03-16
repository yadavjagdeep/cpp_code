#include<bits/stdc++.h>
using namespace std;
void sort_stack(stack<int>&s){
	stack<int>temp;
	while(!s.empty()){
		int x = s.top();
		s.pop();
		while(!temp.empty() && temp.top()>x){
			s.push(temp.top());
			temp.pop();
		}
		temp.push(x);
	}
	while(!temp.empty()){
		cout<<temp.top()<<'\n';
		temp.pop();
	}
}
int main(){
	int n;cin>>n;
	stack<int>s;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		s.push(val);
	}
	sort_stack(s);
	
return 0;
}