#include<bits/stdc++.h>
using namespace std;
stack<int> _push(std::vector<int> v){
   int n = v.size();
	stack<int>s;
	s.push(v[0]);
   for(int i=1;i<n;i++){
      if(v[i]>=s.top())
         s.push(s.top());
      else
         s.push(v[i]);
   }
 return s;
}


void find_min(stack<int>s){
	while(!s.empty()){
      cout<<s.top()<<" ";
      s.pop();
   }
}
int main(){
	int n;cin>>n;
	std::vector<int> v;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		v.push_back(val);
	}
	stack<int>s = _push(v);
	find_min(s);
return 0;
}