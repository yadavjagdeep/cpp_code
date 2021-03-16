#include<bits/stdc++.h>
using namespace std;
/*
 => Pushing value twice

 => Pushing value in stack in such a way that min of an element is
 present at the top of it
*/
void __push(stack<int>&s,int val){
	if(s.empty()){
		s.push(val);
		s.push(val);
	}else if(val<s.top()){
		s.push(val);
		s.push(val);
	}else{
		int min_val = s.top();
		s.push(val);
		s.push(min_val);
	}

}
int pop(stack<int>&s){
	if(s.empty())
		return -1;
    s.pop();
    int x = s.top();
    s.pop();
    return x;
}
int get_min(stack<int>&s){
	if(s.empty())
		return -1;
	return s.top();
}
int main(){
	int n;cin>>n;
	stack<int>s;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		__push(s,val);
	}
	int query;cin>>query;
	while(query--){
		cout<<get_min(s)<<'\n';
		pop(s);
	}
return 0;
}