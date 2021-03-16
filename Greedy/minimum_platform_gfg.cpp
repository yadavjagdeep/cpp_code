#include<bits/stdc++.h>
using namespace std;
int min_platform(std::vector<int> &arr,std::vector<int> &dep){
	int n = (int)arr.size();
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int platforms=0;
    int cnt=0;
    int i=0,j=0;
    while(i<n){
    	if(arr[i]<dep[j]){
    		platforms = max(platforms,++cnt);
    		i++;
    	}else{
    		cnt--;
    		j++;
    	}
    }
   return platforms;
}
int main(){
	int n;cin>>n;
	std::vector<int> arr;
	std::vector<int> dep;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		arr.push_back(val);
	}
	for(int i=0;i<n;i++){
		int val;cin>>val;
		dep.push_back(val);
	}
	cout<<min_platform(arr,dep)<<'\n';
return 0;
}