#include<bits/stdc++.h>
using namespace std;
string solve(string str){
	string s="";
	for(int i=0;i<str.size();i++){
		if(str[i]=='b')
			continue;
		else if((i+1<str.size()) && (str[i]=='a' && str[i+1]=='c')){
			++i;continue;
		}
		s+=str[i];
	}
return s;
}
int main(){
	int t;cin>>t;
	while(t--){
		string str;cin>>str;
		cout<<solve(str)<<'\n';
	}
return 0;
}