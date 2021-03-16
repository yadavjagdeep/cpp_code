#include <iostream>
#include<queue>
#include<vector>
using namespace std;
unsigned long long int findmincost(priority_queue<int,vector<int>,greater<int>>&pq){
   // int n = pq.size();
  // priority_queue<int,vector<int>,greater<int>>p = pq;
    unsigned long long int cost  = 0;
  while (!pq.empty()) {
    int x = pq.top();
    pq.pop();
    int y = pq.top();
    pq.pop();
    cost+=x;
    cost+=y;
    if(pq.empty())
    break;
    else
    {
      pq.push(x+y);
    }
    
  }
    return cost;
}

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;

        priority_queue <int, vector<int>, greater<int>>pq;
        for(int i=0;i<n;i++)
        {
            int val;cin>>val;
            pq.push(val);
        }

        cout<<findmincost(pq)<<endl;
    }
	return 0;
}
