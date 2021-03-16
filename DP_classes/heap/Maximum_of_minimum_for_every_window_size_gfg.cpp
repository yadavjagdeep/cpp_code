#include<iostream>
#include<vector>
#include<queue>
#include<cstdbool>
using namespace std;
std::vector<int> v;

int findmin(int x,int win){
  priority_queue<int,vector<int>,greater<int>>minpq;
  for(int i=x;i<win;i++){
    minpq.push(v[i]);
  }
return minpq.top();
}
int main(){
  int t;cin>>t;
  while (t--) {
    v.clear();
    int n;cin>>n;
    for(int i=0;i<n;i++){
      int val;cin>>val;
      v.push_back(val);
    }
    int win=1;
    while (win<=n) {
      priority_queue<int>mpq;
      for(int i=0;i<=n-win;i++){
        int x = findmin(i,win+i);
        //cout<<x<<endl;
        mpq.push(x);
      }
      cout<<mpq.top()<<" ";
      win++;
    }
    cout<<endl;
  }
return 0;
}
