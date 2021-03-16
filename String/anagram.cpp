#include<bits/stdc++.h>
using namespace std;
int main(){
	string str1,str2;
	cin>>str1>>str2;
	int cnt=0;
	for(auto x:str1)
		cnt+=x;
	for(auto x:str2)
		cnt-=x;
	if(cnt==0)
		cout<<"ANAGRAM"<<'\n';
	else
		cout<<"NOT ANAGRAM"<<'\n';
return 0;
}