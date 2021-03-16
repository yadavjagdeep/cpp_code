#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
	std::vector<int> a;
	std::vector<int> d;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		a.push_back(val);
	}
	for(int i=0;i<n;i++){
		int val;cin>>val;
		d.push_back(val);
	}
	sort(a.begin(),a.end());
	sort(d.begin(),d.end());
	int max_t=0,max_i=0;
	int i=0,j=0;
	while(i<n){
       if(a[i]<=d[j])
       	i++;
       else
       	j++;

       int m = i-j;
       if(m>max_t){
       	max_t = m;
       	max_i=a[i-1];
       }
       //cout<<i<<" "<<j<<'\n';
	}
	cout<<max_t<<" "<<max_i<<'\n';
	}
	
return 0;
}