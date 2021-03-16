#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main(){
  int t;cin>>t;
  while (t--) {
    int n;cin>>n;
    std::vector<int> v;
      int a[3];
      memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
      int val;cin>>val;
      v.push_back(val);
      a[val]++;
    }
  for(int i=0;i<3;i++){
    while (a[i]>0) {
      cout<<i<<" ";
      a[i]--;
    }
  }
    cout<<endl;
  }
return 0;
}
