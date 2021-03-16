#include<bits/stdc++.h>
using namespace std;
/********Global variable***/
int ptr1=0,ptr2=499;
/*************/
void push1(std::vector<int> &v){
	int val;cin>>val;
	if((ptr2-ptr1)==1)
		cout<<"NO more value can be pushed"<<'\n';
	else{
		v[ptr1] = val;
		ptr1++;
		
	}
	//cout<<ptr1<<'\n';

}
void push2(std::vector<int> &v){
	int val;cin>>val;
	if((ptr2-ptr1)==1)
		cout<<"NO more value can be pushed"<<'\n';
	else{
		v[ptr2] = val;
		ptr2--;
	}

}
int pop1(std::vector<int>&v){
	if(ptr1<0)
		cout<<"NO element present"<<'\n';
	else{
		//cout<<ptr1<<'\n';
		int x = v[ptr1];
		ptr1--;
		return x;
	}
return -1;
}
int pop2(std::vector<int>&v){
	if(ptr2>499)
		cout<<"NO element present"<<'\n';
	else{
		int x = v[ptr2];
		ptr2++;
		return x;
	}
return -1;
}
int main(){
	int Query;cin>>Query;
	cout<<"for push in stack 1 enter 1"<<'\n'<<"for pop from 1 enter 10"<<'\n';
	cout<<"for push in stack 2 enter 2"<<'\n'<<"for pop from 1 enter 20"<<'\n';
	std::vector<int> v(500);
	while(Query--){
		int n;cin>>n;
		if(n==1)
			push1(v);
		else if(n==2)
			push2(v);
		else if(n==10)
			cout<<pop1(v)<<'\n';
		else if(n==20)
			cout<<pop2(v)<<'\n';

	}
return 0;
}