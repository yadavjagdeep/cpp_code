#include <iostream>
#include<queue>
#include<vector>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;

      //  priority_queue <int, vector<int>, greater<int>>pq;
      priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            int val;cin>>val;
            pq.push(val);
        }

        int cost = 0;
        while (!pq.empty()) {
          int x = pq.top();
          pq.pop();
          int y = pq.top();
          pq.pop();
          cout<<x<<" "<<y<<endl;
          if(pq.empty())
          break;
          else
          pq.push(10);
        }
    }
	return 0;
}
