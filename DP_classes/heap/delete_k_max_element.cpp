#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
  int n;cin>>n;
  priority_queue<int>pq;
  for(int i = 0;i<n;i++){
    int val;cin>>val;
    pq.push(val);
  }
  cout<<"enter the no of element to pop";
  int no;cin>>no;
  for(int i = 0;i<no;i++){
    cout<<pq.top()<<endl;
  pq.pop();
  }
return 0;
}
