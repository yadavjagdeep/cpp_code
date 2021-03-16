#include<iostream>
#include<vector>
using namespace std;
int n;
std::vector<int> v;
long long int lsum(int i){
  int x = v[i];
  long long int sum = v[i];
  for(int y = i-1;y>=0;y--){
    if(v[y]<=x){
      sum+=v[y];
      x = v[y];
    }else{
      return sum;
    }
  }
return sum;
}
long long int rsum(int i){
  int x = v[i];
  long long int sum = v[i];
  for(int y = i+1;y<n;y++){
    if(v[y]<=x){
      sum+=v[y];
      x = v[y];
    }else{
      return sum;
    }
  }
return sum;
}
int main(){
  int t;cin>>t;
  while (t--) {
    v.clear();
    cin>>n;
    for(int i=0;i<n;i++){
      int val;cin>>val;
      v.push_back(val);
    }
    long long int ans = 0;
    for(int i=0;i<n;i++){
      ans = max(ans,(lsum(i)+rsum(i))-v[i]);
    }
    cout<<ans<<endl;
  }
return 0;
}
