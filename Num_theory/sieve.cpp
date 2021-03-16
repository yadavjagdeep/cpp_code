#include <bits/stdc++.h>
using namespace std;
void sieve(vector<bool>&prime){
	fill(prime.begin(),prime.end(),true);
	prime[0]=false;
	prime[1]=false;
  for(int i=2;i*i<=prime.size();i++){
		if(prime[i]==true){
			for(int j=i*i;j<=prime.size();j+=i)
			prime[j]=false;
		}
	}
}
void print(int n,int m,vector<bool>prime){
	for(int i=n;i<=m;i++){
		if(prime[i]==true)
		cout<<i<<" ";
	}
	cout<<'\n';
}
int main(){
	std::vector<bool>prime(120);
	sieve(prime);
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		print(n,m,prime);
	}
return 0;
}
