#include<bits/stdc++.h>
using namespace std;
void __push(stack<int>&s){
	int val;cin>>val;
	s.push(val);
}
int __pop(stack<int>&s){
	if(s.empty())
        return -1;
   stack<int>temp;
   int top;
   while(!s.empty()){
   	top  = s.top();
   	temp.push(top);
   	s.pop();
   }
   temp.pop();
   while(!temp.empty()){
   	int x  =temp.top();
   	s.push(x);
   	temp.pop();
   }
return top;
}

int main(){
	int Query;cin>>Query;
	cout<<"Enter 1 for push"<<'\n'<<"Enter 2 for pop"<<'\n';
	stack<int>s;
	while(Query--){
		int x;cin>>x;
		if(x==1)
			__push(s);
		else if(x==2)
			cout<<__pop(s)<<'\n';
		else
			cout<<"Invalid input"<<'\n';
	}
return 0;
}